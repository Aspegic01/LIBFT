#include <stdio.h>
#include <stdlib.h>

typedef struct strak
{
    char c;
    int d;
    struct strak *next;
} strak;

strak *ft_new(char ca, int di)
{
    strak *node;

    node = (strak *)malloc(sizeof(strak));
    if (!node)
        return (NULL);
    node->c = ca;
    node->d = di;
    node->next = NULL;
    return (node);
}

int main()
{
    strak *head;
    head = ft_new('\0', 0);
    strak *node1;
    node1 = ft_new('a', 1);
    head->next = node1;
    strak *node2;
    node2 = ft_new('b', 2);
    node1->next = node2;
    strak *node3;
    node3 = ft_new('c', 3);
    node2->next = node3;
    strak *node4;
    node4 = ft_new('d', 4);
    node3->next = node4;
    head = head->next;
    while (head)
    {
        printf("%d --- %c\n", head->d, head->c);
        head = head->next;
    }
}
