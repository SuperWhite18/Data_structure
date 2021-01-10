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

//��ʼ��
void QueueInit(Queue* pq);
//����
void QueueDestroy(Queue* pq);
//
void QueuePush(Queue* pq, QDataType x);
//
void QueuePop(Queue* pq);

QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);

//����1�ǿգ�����0�Ƿǿ�
int QueueEmpty(Queue* pq);

//����1�ǿգ�����0�Ƿǿ�
int QueueSize(Queue* pq);


