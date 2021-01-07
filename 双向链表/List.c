#include"List.h"
//��̬����һ���ڵ�
ListNode* BuyListNode(LTDataType x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->next = NULL;
	node->prev = NULL;
	node->data = x;
	return node;
}
//��ʼ��
//ListInit(ListNode** pphead)
//{
//	*pphead = BuyListNode(0);
//	(*pphead)->next = *pphead;//����������Ϊ * �� -> ���ȼ������� ��Ҫ ��ִ�� *
//	(*pphead)->prev = *pphead;
//} 
  ListNode* ListInit()
  {
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
  }
  //�������� ͷ����ÿ�
  void ListDestroy(ListNode** pphead)
  {
	  assert(*pphead);
	  ListClear(*pphead);
	  free(*pphead);
	  **pphead = NULL;

  }
  //clear����:�������е����ݽڵ㣬����ͷ��㣬���Լ���ʹ��
  void ListClear(ListNode* phead)
  {
	  assert(phead);
	  ListNode* cur = phead;
	  while (cur != phead)
	  {
		  ListNode* next = cur->next;
		  free(cur);
		  cur = next;
	  }
	  phead->next = phead;//��֤�Լ�����ѭ��״̬
	  phead->prev = phead;
  }
//��ӡ
void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
//β��
void ListPushBack(ListNode* phead, LTDataType x)
{
	//��һ��
	//assert(phead);
	//ListNode* tail = phead->prev;
	//ListNode* newnode = BuyListNode(x);
	//tail->next = newnode;
	//newnode->prev = tail;
	//newnode->next = phead;
	//phead->prev = newnode;

	//������
	ListInsert(phead, x);
}
//βɾ
void ListPopBack(ListNode* phead, LTDataType x)
{
	//��һ��
	//assert(phead);
	//assert(phead->next != NULL);//��������Ƿ�Ϊ��
	//ListNode* tail = phead->prev;
	//ListNode* tailPrev = tail->prev;
	//tailPrev->next = phead;
	//phead->prev = tailPrev;
	//free(tail);
	//tail=NULL;

	//������
	ListErase(phead->prev);
}
//ͷ��
void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* first = phead->next;
	ListNode* newnode = BuyListNode(x);
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = first;
	first->prev = newnode;
}
//ͷɾ
void ListPopFront(ListNode* phead)
{
	//��һ��
	//assert(phead);
	//assert(phead->next != phead);//����
	//ListNode* first = phead->next;
	//ListNode* second = first->next;
	////phead first second 
	//phead->next = second;
	//second ->prev = phead;
	//free(first);
	//������
	ListErase(phead->next);
}
//����x ���� �ڵ��ָ��
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}

//��posǰ����x
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* newnode = BuyListNode(x);

	//posPrev newnode pos
	posPrev->next = newnode;
	newnode->prev = posPrev;
	newnode->next = pos;
	pos->prev = newnode;


}
//ɾ��
void ListErase(ListNode* pos)
{
	assert(pos);//pos������phead
	//assert(pos != phead);
	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;
	free(pos);
	posPrev->next = posNext;
	posNext->prev = posPrev;

}
