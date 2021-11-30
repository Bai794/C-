#include "linklist.h"
typedef struct PERSON
{
    char name[64];
    int age;
    int score;
} Person;
void myPrint(void *data)
{
    Person *p = (Person *)data;
    printf("Name:%s Age:%d Score:%d\n", p->name, p->age, p->score);
}
void Printf_linklist(linklist * list, PRINTLINKLIST print)
{
	if (list==NULL) {
		return;
	}
	LinkNode* pCurrent = list->head->next;
	while (pCurrent!=NULL) {
		print(pCurrent->data);
		pCurrent = pCurrent->next;
	}
}

linklist *Init_list()
{
    linklist *list = (linklist *)malloc(sizeof(linklist));
    list->size = 0;
    //头结点 是不保存数据信息
    list->head = (LinkNode *)malloc(sizeof(LinkNode));
    list->head->data = NULL;
    list->head->next = NULL;
    return list;
}
void Insert_linklist(linklist *ls, int pos, void *value)
{
    if (ls == NULL)
        return;
    if (value == NULL)
        return;
    if (pos < 0 || pos > ls->size)
    {
        pos = ls->size;
        /* code */
    }
    LinkNode *mynode = (LinkNode *)malloc(sizeof(LinkNode));
    mynode->data = value;
    mynode->next = NULL;

    LinkNode *pCurrent = ls->head; //创建一个方向指针
    for (int i = 0; i < pos; i++)
    {
        pCurrent = pCurrent->next;
    }
    mynode->next = pCurrent->next; //注意先后顺序
    pCurrent->next = mynode;
    ls->size++;
}
void remove_linklist(linklist *ls, int pos)
{
    LinkNode *dir = ls->head;
    for (int i = 0; i < pos-1; i++)
    {
        dir = dir->next;
        /* code */
    }
    LinkNode *pdel = dir->next;
    dir->next = pdel->next;
    free(pdel);
    ls->size--;
}
int main()
{
    linklist *myList = Init_list();
    Person p1 = {"A", 18, 60};
    Person p2 = {"B", 17, 90};
    Person p3 = {"C", 19, 80};
    Person p4 = {"D", 18, 70};
    Insert_linklist(myList, 0, &p1);
    Insert_linklist(myList, 0, &p2);
    Insert_linklist(myList, 0, &p3);
    Insert_linklist(myList, 0, &p4);
    // remove_linklist(myList,3);
    Printf_linklist(myList,myPrint);

    printf("dskdshf\r\n");
    system("pause");
}