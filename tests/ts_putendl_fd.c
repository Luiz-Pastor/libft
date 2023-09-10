#include "tests.h"

static void    change(char *ch);

void    test_putendl_fd()
{
    change("Luis");
    change(" ");
    change("A lot\tof text idk\n");
    change("\'\n\'\n");
    change("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce et ex scelerisque, consequat velit et, placerat metus. Aenean pretium congue nisi. Mauris feugiat risus vitae erat vehicula, egestas maximus erat mattis. Donec in justo nulla. Suspendisse blandit neque nunc, quis sagittis purus efficitur nec. Curabitur hendrerit vehicula sagittis. Donec fringilla sit amet nulla id pulvinar. Pellentesque ac euismod dui. Ut felis ante, facilisis a ante vel, sodales convallis nulla. Nulla nec felis nunc. Integer volutpat, tortor molestie ornare bibendum, mauris ante vestibulum lacus, a tempor felis risus quis mauris. Vestibulum cursus erat in est accumsan imperdiet.\n\tPraesent non odio justo. Cras vulputate leo in massa accumsan dignissim. Quisque at erat sed diam rutrum placerat et a mauris. Sed convallis enim sed cursus dictum. In eget maximus ex. Praesent in lorem nec orci suscipit sollicitudin. In hendrerit lectus odio, ut consectetur dolor egestas sit amet. Morbi sed euismod massa, vitae tincidunt enim. Duis nec elit at est tincidunt pulvinar in iaculis ligula. Phasellus risus est, feugiat sit amet urna varius, tincidunt tempor dui. Nullam in diam volutpat, venenatis purus non, eleifend velit. Quisque at dui et sem pulvinar tincidunt. Curabitur auctor rutrum eleifend. Vivamus cursus odio id nisl porttitor vestibulum.\nFusce iaculis ac turpis eget bibendum. Quisque nec vulputate est. Etiam sed nibh elementum mauris volutpat eleifend. In feugiat eros est, sed bibendum enim venenatis id. Maecenas placerat quis felis id placerat. In lacinia ex finibus lacinia porttitor. Nunc blandit tempus elit, vitae hendrerit orci facilisis finibus. Cras elit enim, facilisis vel quam a, molestie placerat felis. Suspendisse bibendum metus viverra urna rutrum ultrices. Sed eget sollicitudin nulla, at imperdiet est. Vivamus ut nisl at augue sollicitudin laoreet a ac ipsum. Fusce luctus luctus molestie. Sed nulla dui, vulputate non ligula nec, dictum volutpat elit. Nulla non viverra odio.\n\rUt sodales lacus in pretium tincidunt. Quisque eu nulla ipsum. Etiam finibus velit et elementum faucibus. Vestibulum sit amet massa in diam ultricies congue non non purus. Suspendisse vulputate libero et sagittis tempor. Cras scelerisque dolor mi, a hendrerit orci ultrices nec. Donec id semper velit, vel dictum est. Donec ac erat nec magna venenatis consectetur in a justo. Ut non egestas metus. Nulla ut posuere lacus. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.\t\nAenean venenatis libero nec eros sagittis, et efficitur nisl semper. Ut tempor cursus nisl, at ullamcorper massa aliquam ac. Donec accumsan libero sed neque blandit accumsan. Nam ac erat vitae neque sagittis efficitur. Mauris vestibulum dui sem, accumsan malesuada sem tincidunt sit amet. Donec sit amet sodales magna. Integer accumsan est sed nunc volutpat, sit amet porta dolor laoreet. Proin gravida fermentum turpis eget sodales. Maecenas ligula velit, consectetur ac erat non, auctor fermentum dui. Vestibulum vitae volutpat justo. In lorem metus, hendrerit quis finibus quis, scelerisque a libero. Pellentesque sed vehicula eros. Phasellus tincidunt eros eget lacus ultricies, quis auctor nibh vulputate. Proin eu porta nisi. Maecenas molestie consectetur leo, sed varius enim vulputate at. Sed ut odio ut sem pharetra condimentum.");

    PRINT_PASSED_PERCENTAGE;
}

static void    change(char *str)
{
    int     file;
    char    *res;
    char    *cpy;
    size_t  count;
    size_t  length;

    length = strlen(str);
    res = (char *) malloc((length + 2) * sizeof(char));
    if (!res)
        PRINT_TEST_RESULT(0);

    file = open("test.txt", O_CREAT | O_WRONLY);
    ft_putendl_fd(str, file);
    close(file);

    file = open("test.txt", O_RDONLY);
    count = read(file, res, length + 1);
    res[length + 1] = '\0';
    close(file);

    cpy = (char *) malloc((length + 2) * sizeof(char));
    strcpy(cpy, str);
    cpy[length] = '\n';
    cpy[length + 1] = '\0';

    PRINT_TEST_RESULT(count == (length + 1) && res[length] == '\n' && strcmp(res, cpy) == 0);

    free_memory(2, res, cpy);
}
