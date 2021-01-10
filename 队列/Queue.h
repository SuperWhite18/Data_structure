#pragma once

typedef int QDataType;
typedef struct QueueNode
{
	struct QueueNode* _next;
	QDataType _data;
}QueueNode;

typedef struct Queue
{
	QueueNode* _head;
	QueueNode* _tail;

}Queue;

//初始化
void QueueInit(Queue* pq);
//销毁
void QueueDestroy(Queue* pq);
//
void QueuePush(Queue* pq, QDataType x);
//
void QueuePop(Queue* pq);

QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);

//返回1是空，返回0是非空
int QueueEmpty(Queue* pq);

//返回1是空，返回0是非空
int QueueSize(Queue* pq);


