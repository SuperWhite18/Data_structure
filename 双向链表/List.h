#pragma once
typedef int LTDataType;
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>


typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}ListNode;

//初始化
ListNode* ListInit();
//clear链表
void ListClear(ListNode* phead);
//摧毁链表
void ListDestroy(ListNode** pphead);
//动态申请一个节点 并返回指针
ListNode* BuyListNode(LTDataType x);
//打印
void ListPrint(ListNode* phead);
//尾插
void ListPushBack(ListNode* phead, LTDataType x);
//尾删
void ListPopBack(ListNode* phead);
//头插
void ListPushFront(ListNode* phead, LTDataType x);
//头删
void ListPopFront(ListNode* phead);
//查找x 返回 节点的指针
ListNode* ListFind(ListNode* phead, LTDataType x);
//在pos前插入x
void ListInsert(ListNode* pos, LTDataType x);
//删除
void ListErase(ListNode* pos);
