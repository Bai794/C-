
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct dem_array
{
    int siz;
    int capbility;
    int *paddr;

} arry_list;
arry_list *init_arry()
{
    arry_list *myarrylist = (arry_list *)malloc(sizeof(arry_list));
    myarrylist->capbility = 20;
    myarrylist->siz = 0;
    myarrylist->paddr = (int *)malloc(sizeof(int) * myarrylist->capbility);
    return myarrylist;
}
void push_back(arry_list *arry, int value)
{
    if (arry->siz == arry->capbility)
    {
        int *newspace = (int *)malloc(sizeof(int) * arry->capbility * 2); //内存不够默认申请2倍空间
        memcpy(newspace, arry->paddr, arry->capbility * sizeof(int));     //把原数据拷贝到新的空间
        free(arry->paddr);
        arry->capbility = arry->capbility * 2; //更新容量
        arry->paddr = newspace;
    }
    arry->paddr[arry->siz] = value;
    arry->siz++;
}
void remove_pos_arry(arry_list *arry, int pos)
{

    if (pos < 0 || pos >= arry->siz)
    {
        return;
    }
    for (int i = pos; i < arry->siz - 1; i++)
    {
        arry->paddr[i] = arry->paddr[i + 1];
        /* code */
    }
    arry->siz--;
}
void remove_value_arry(arry_list *arry, int value)
{
    if (arry == NULL)
        return;
    int pos = -1;
    for (int i = 0; i < arry->siz; i++)
    {
        if (arry->paddr[i] == value)
        {
            pos = i;
            break;
        }

        /* code */
    }
    remove_pos_arry(arry, pos);
}
int find_value_array(arry_list *arry, int value)
{
    if (arry == NULL)
        return 0;
    int pos = -1;
    for (int i = 0; i < arry->siz; i++)
    {
        if (arry->paddr[i] == value)
        {
            pos = i;

            break;
        }
    }
    return pos;
}
void printf_arry(arry_list *arry)
{
    for (int i = 0; i < arry->siz; i++)
        printf(" %d", arry->paddr[i]);
    printf("\r\n");
}
void freespace_array(arry_list *arry)
{
    if (arry->paddr != NULL)
    {
        free(arry->paddr);
        arry->siz = 0;
    }
    
}
int get_value(arry_list *arry, int pos)
{
    return arry->paddr[pos];
}
int main()
{

    arry_list *my_arrylist = init_arry();
    for (int i = 0; i < 40; i++)
    {
        push_back(my_arrylist, i);
        /* code */
    }
    remove_value_arry(my_arrylist, 12);
    printf_arry(my_arrylist);
    printf("size :%d  cap:%d  pos:%d", my_arrylist->siz, my_arrylist->capbility, find_value_array(my_arrylist, 34));
    freespace_array(my_arrylist);
    printf_arry(my_arrylist);
    system("pause");
}