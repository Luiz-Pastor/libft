#include "tests.h"

static void returns(const char *s);

void    test_strdup()
{
    const char s1[] = "Hello Wordl!";
    const char s2[] = "abcdefghijklmnopqrstuvwxyz";
    const char s3[] = "0123456789";
    const char s4[] = "H3_\\llo Wrldmº2\"\'";
    const char s5[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. In sed tortor dictum, auctor leo et, lacinia augue. Quisque luctus ligula non erat lacinia, nec tempor dui finibus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. In vestibulum, nisl sed congue gravida, tortor ante rutrum augue, non faucibus mauris nunc non turpis. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin scelerisque libero bibendum orci commodo, nec facilisis ex dapibus. Proin laoreet nulla leo, ac porttitor nulla porttitor a. Suspendisse quis vehicula arcu. Curabitur tortor nunc, luctus vel luctus in, viverra nec tellus. Ut feugiat elit tortor, in dignissim risus posuere non. Fusce quis libero eget purus ultrices accumsan non vestibulum ex. Pellentesque luctus gravida nibh, eget tempus tellus lacinia at. Vestibulum ac sollicitudin urna. Quisque bibendum vestibulum elit. Nullam pulvinar efficitur enim ac venenatis.\nSuspendisse sit amet dolor felis. Vivamus imperdiet eros ut tempor viverra. Cras ultrices nulla ac dignissim luctus. Curabitur quis lorem non sem congue consequat non egestas risus. Sed egestas, quam vitae faucibus cursus, sem arcu dapibus sapien, sed laoreet purus diam in purus. Proin pellentesque elit justo, sed suscipit felis convallis eget. Proin ac lobortis neque. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus elit nulla, auctor suscipit nisi sed, euismod dictum erat. Sed pulvinar at magna et vestibulum. Aliquam erat volutpat. Vestibulum accumsan elit semper faucibus vulputate. Aenean id rutrum augue, sed imperdiet lorem. Pellentesque viverra iaculis metus, vel pharetra dui vehicula vulputate. In sed ligula sit amet massa maximus consequat. Vivamus viverra felis tortor, sed rhoncus dolor euismod vel.\nSed et lectus sed ipsum facilisis ornare at in purus. Vestibulum ut eros id sapien gravida consectetur a at magna. Sed eu ligula pellentesque, semper erat in, euismod nibh. Curabitur eget magna id lorem ullamcorper pulvinar quis at diam. Vivamus urna ex, mattis non pulvinar nec, pellentesque ut mi. Etiam eget lobortis massa, non luctus sapien. In hac habitasse platea dictumst. Nulla ac sodales odio, ac tincidunt dolor.\nFusce tristique tellus non eleifend feugiat. Aliquam pharetra lorem a rutrum pulvinar. In eu placerat sem, eget fringilla risus. Etiam commodo orci eu lobortis imperdiet. Proin sit amet mollis arcu. Maecenas at posuere tellus. Aenean tristique nisl mi, ac rhoncus turpis laoreet vel. Curabitur nisl urna, sollicitudin id eros at, eleifend varius orci. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent et dolor non magna cursus aliquam vitae sit amet dolor. Vivamus feugiat ullamcorper ultricies. Aenean rhoncus leo nec bibendum pulvinar. Maecenas suscipit vehicula dapibus. Proin dignissim ornare purus, ut rutrum quam semper quis. Duis ac pellentesque sem, sit amet hendrerit nisi.\v\t\nCurabitur congue facilisis dolor, sit amet malesuada orci convallis quis. Nullam cursus sollicitudin interdum. Cras massa est, congue nec porttitor at, suscipit in metus. Etiam in erat nec nisi laoreet ornare. Integer auctor auctor condimentum. Suspendisse vehicula suscipit arcu, in luctus purus tincidunt id. Pellentesque nec purus mattis, elementum nunc a, malesuada lorem. Interdum et malesuada fames ac ante ipsum primis in faucibus. Curabitur tempus velit nec erat dictum, efficitur volutpat turpis porta. In vel tempus nibh. Nunc erat lacus, sagittis et justo sed, rutrum commodo lectus.\n";
    const char s6[] = "";
    
    returns(s1);
    returns(s2);
    returns(s3);
    returns(s4);
    returns(s5);
    returns(s6);

    PRINT_PASSED_PERCENTAGE;
}

static void returns(const char *s)
{
    char    *res1;
    char    *res2;

    res1 = strdup(s);
    res2 = ft_strdup(s);

    PRINT_TEST_RESULT(strcmp(res1, res2) == 0);

    free_memory(2, res1, res2);
}