#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int STDataType;
//静态
//struct Stack
//{
//	int _a[N];
//	int _size;
//
//};

//动态
  typedef struct Stack
 {
	STDataType* _a;//数组  前杠意思:成员
	int _top;//栈顶下标
	int _capacity;
 }Stack;

 //初始化
 void StackInit(Stack* st);
 //销毁
 void StackDestroy(Stack* pst);
 //入栈
 void StackPush(Stack* pst, STDataType x);
 //弹栈
 void StackPop(Stack* pst);
 //获取数据个数
 int StackSize(Stack* pst);
 //返回1是空，返回0是非空
 int StackEmpty(Stack* pst);
 //获取栈顶的数据
 STDataType StackTop(Stack* pst);






