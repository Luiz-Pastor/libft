#include "tests.h"

/* ############################################################# */

static int  *malloc_int(int number);
static void print_int(void  *number);

/* ############################################################# */

static void print_ch(void *ele);

/* ############################################################# */

static void printf_list(t_list *head, void (*print)(void *));

/* ############################################################# */

static void increment_2(void *ele);
static void *parity(void *ele);

/* ############################################################# */

void    test_list()
{
    t_list  *int_array;
    t_list  *ele2;
    t_list  *ele3;
    t_list  *ele4;
    t_list  *copy;

    int *n1;
    int *n2;
    int *n3;
    int *n4;

    n1 = malloc_int(2);
    n2 = malloc_int(1);
    n3 = malloc_int(3);
    n4 = malloc_int(8);


    int_array = ft_lstnew(n1);
    if (!int_array)
    {
        printf("No se ha reservado la lista.\n");
        return ;
    }
    ele2 = ft_lstnew(n2);
    ele3 = ft_lstnew(n3);
    ele4 = ft_lstnew(n4);

    ft_lstadd_front(&int_array, ele2);
    ft_lstadd_back(&int_array, ele3);
    ft_lstadd_front(&int_array, ele4);

    printf("\n\x1B[32m# Añadiendo los numeros '8', '1', '2' y '3' en este orden...\033[0m\n");
    printf_list(int_array, print_int);

    printf("\n\x1B[32m# Eliminando el primer elemento ('8')...\033[0m\n");
    ft_lstdelone(int_array, free);
    int_array = ele2;

    printf_list(int_array, print_int);

    printf("\n\x1B[32m# Sumando 2 a todos los elementos...\033[0m\n");
    ft_lstiter(int_array, increment_2);
    printf_list(int_array, print_int);

    // printf("\n\x1B[32m# Sustituyendo cada valor por su paridad...\033[0m\n");
    // ft_lstiter(int_array, parity);
    // printf_list(int_array, print_int);
    // printf_list(int_array, print_ch);

    printf("\n\x1B[32m# Creando una lista que represente la paridad de los valores...\033[0m\n");
    copy = ft_lstmap(int_array, parity, free);
    printf_list(copy, print_ch);

    printf("\n\x1B[32m# Eliminando las listas...\033[0m\n");
    ft_lstclear(&int_array, free);
    ft_lstclear(&copy, free);

    FORCE_RESET();
}

/* ############################################################# */

static int  *malloc_int(int number)
{
    int *memory;

    memory = (int *) malloc(1 * sizeof(int));
    if (!memory)
        return (NULL);
    *memory = number;
    return (memory);
}

static void print_int(void  *number)
{
    printf(" %d", *(int*)number);
}

/* ############################################################# */

static void print_ch(void *ele)
{
    printf("'%c'", *(char *) ele);
}

/* ############################################################# */

static void printf_list(t_list *head, void (*print)(void *))
{
    t_list  *memory;
    t_list  *last_element;

    if (!head)
        return;
    memory = head;
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
    while (memory)
    {
        print(memory->content);
        memory = memory->next;
        printf(" --> ");
    }
    printf("NULL (end)\n");

    printf("\t=> Size:\t\t%d\n", ft_lstsize(head));

    printf("\t=> Last Element:\t");
    last_element = ft_lstlast(head);
    print(last_element->content);
    printf("\n\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}

/* ############################################################# */

static void increment_2(void *ele)
{
    // int number = *(int *) ele;
    // *ele = (void)(number + 1);
    // *ele = (void) 1;
    *(int *) ele = *(int *) ele + 2;
}

static void *parity(void *ele)
{
    int number = *(int *) ele;
    // if (*(int *)ele % 2)
    //     *(int *) ele = *(int *) ele + (73 - *(int *) ele);
    // else
    //     *(int *) ele = *(int *) ele + (80 - *(int *) ele);
    if (number % 2)
        return (void *) malloc_int(73);
    else
        return (void *) malloc_int(80);
}