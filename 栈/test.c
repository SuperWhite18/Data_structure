#include"Stack.h"

//栈的作用：
//1.如果有后进先出的需求的地方 比如迷宫问题
//2.递归改成非递归

void TestStack()
{
	Stack st;
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);

	while (StackEmpty(&st))
	{
		printf("%d", StackTop(&st));
		StackPop(&st);
	}
	printf("\n");
	StackDestroy(&st);
}

int main()
{
	TestStack();

	return 0;
}