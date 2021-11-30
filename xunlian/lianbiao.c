#include <stdio.h>
#include <stdlib.h>
#include "windows.h"
typedef struct linknode
{
    int data;
    linknode *next;
} LINKNODE,* NODE;
void instert_node(NODE node, int pos, int num)
{
    NODE mynode = (NODE)malloc(sizeof(NODE));
    mynode->data = num;
    mynode->next = NULL;
    NODE dir = node;
    for (int i = 0; i < pos; i++)
    {
        dir = dir->next;
    }
    mynode->next = dir->next;
    dir->next = mynode;
}
void remove_linklist(NODE node, int pos)
{
    NODE dir = node;
    LINKNODE*tempnode;
    for (int i = 0; i < pos; i++) //找到前面一个
    {
        dir = dir->next;
    }
    tempnode = dir->next;
    dir->next = dir->next->next;

}
void myprint(NODE node)
{
    NODE dir = node->next;
    while (dir != NULL)
    {
        printf("%d ", dir->data);
        dir = dir->next;
    }
}
void findvalue(NODE node, int value)
{
    NODE dir = node->next;
}
int main()
{
    NODE head = (NODE)malloc(sizeof(NODE));
    head->data = -1;
    head->next = NULL;
    instert_node(head, 0, 10);
    instert_node(head, 1, 23);
    instert_node(head, 2, 12);
    instert_node(head, 3, 45);
    instert_node(head, 4, 102);
    remove_linklist(head, 3);
    myprint(head);
    system("pause");
}