#include"List.h"
//动态申请一个节点
ListNode* BuyListNode(LTDataType x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->next = NULL;
	node->prev = NULL;
	node->data = x;
	return node;
}
//初始化
//ListInit(ListNode** pphead)
//{
//	*pphead = BuyListNode(0);
//	(*pphead)->next = *pphead;//加括号是因为 * 与 -> 优先级的问题 需要 先执行 *
//	(*pphead)->prev = *pphead;
//} 
  ListNode* ListInit()
  {
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
  }
  //销毁链表 头结点置空
  void ListDestroy(ListNode** pphead)
  {
	  assert(*pphead);
	  ListClear(*pphead);
	  free(*pphead);
	  **pphead = NULL;

  }
  //clear链表:清理所有的数据节点，保留头结点，可以继续使用
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
	  phead->next = phead;//保证自己处于循环状态
	  phead->prev = phead;
  }
//打印
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
//尾插
void ListPushBack(ListNode* phead, LTDataType x)
{
	//法一：
	//assert(phead);
	//ListNode* tail = phead->prev;
	//ListNode* newnode = BuyListNode(x);
	//tail->next = newnode;
	//newnode->prev = tail;
	//newnode->next = phead;
	//phead->prev = newnode;

	//法二：
	ListInsert(phead, x);
}
//尾删
void ListPopBack(ListNode* phead, LTDataType x)
{
	//法一：
	//assert(phead);
	//assert(phead->next != NULL);//检查链表是否为空
	//ListNode* tail = phead->prev;
	//ListNode* tailPrev = tail->prev;
	//tailPrev->next = phead;
	//phead->prev = tailPrev;
	//free(tail);
	//tail=NULL;

	//法二：
	ListErase(phead->prev);
}
//头插
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
//头删
void ListPopFront(ListNode* phead)
{
	//法一：
	//assert(phead);
	//assert(phead->next != phead);//断言
	//ListNode* first = phead->next;
	//ListNode* second = first->next;
	////phead first second 
	//phead->next = second;
	//second ->prev = phead;
	//free(first);
	//法二：
	ListErase(phead->next);
}
//查找x 返回 节点的指针
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

//在pos前插入x
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
//删除
void ListErase(ListNode* pos)
{
	assert(pos);//pos不能是phead
	//assert(pos != phead);
	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;
	free(pos);
	posPrev->next = posNext;
	posNext->prev = posPrev;

}
