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

//��ʼ��
ListNode* ListInit();
//clear����
void ListClear(ListNode* phead);
//�ݻ�����
void ListDestroy(ListNode** pphead);
//��̬����һ���ڵ� ������ָ��
ListNode* BuyListNode(LTDataType x);
//��ӡ
void ListPrint(ListNode* phead);
//β��
void ListPushBack(ListNode* phead, LTDataType x);
//βɾ
void ListPopBack(ListNode* phead);
//ͷ��
void ListPushFront(ListNode* phead, LTDataType x);
//ͷɾ
void ListPopFront(ListNode* phead);
//����x ���� �ڵ��ָ��
ListNode* ListFind(ListNode* phead, LTDataType x);
//��posǰ����x
void ListInsert(ListNode* pos, LTDataType x);
//ɾ��
void ListErase(ListNode* pos);
