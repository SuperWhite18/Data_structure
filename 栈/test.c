#include"Stack.h"

//ջ�����ã�
//1.����к���ȳ�������ĵط� �����Թ�����
//2.�ݹ�ĳɷǵݹ�

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