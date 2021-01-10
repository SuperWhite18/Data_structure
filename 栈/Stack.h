#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int STDataType;
//��̬
//struct Stack
//{
//	int _a[N];
//	int _size;
//
//};

//��̬
  typedef struct Stack
 {
	STDataType* _a;//����  ǰ����˼:��Ա
	int _top;//ջ���±�
	int _capacity;
 }Stack;

 //��ʼ��
 void StackInit(Stack* st);
 //����
 void StackDestroy(Stack* pst);
 //��ջ
 void StackPush(Stack* pst, STDataType x);
 //��ջ
 void StackPop(Stack* pst);
 //��ȡ���ݸ���
 int StackSize(Stack* pst);
 //����1�ǿգ�����0�Ƿǿ�
 int StackEmpty(Stack* pst);
 //��ȡջ��������
 STDataType StackTop(Stack* pst);






