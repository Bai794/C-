#pragma once
#ifndef _LINKLIST_H
#define _LINKLIST_H
#include <stdio.h>
#include <stdlib.h>
typedef struct LINKNODE
{
  void *data; //无类型指针，可以指向任何数据类型
  struct LINKNODE *next;
} LinkNode;
typedef struct LINKLIST
{
  LinkNode *head;
  int size;
} linklist;

typedef void (*PRINTLINKLIST) (void *);
//链表初始化
linklist *Init_list();
//插入链表
void Insert_linklist(linklist *ls, int pos, void *value);
//删除某个链表
void remove_linklist(linklist *ls, int pos);
//获取链表长度
int getsize_linklist(linklist *ls); 
//返回第一个结点
void *Fornt_linklist(linklist *ls);
//释放内存
void Free_space(linklist *ls);
//查找
int Find_linklist(linklist *ls, void *data);
//打印
void Printf_linklist(linklist *ls, PRINTLINKLIST print);

#endif