/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;

typedef int(*calcFuncPtr)(int, int);

int plus(int first, int second);
int minus(int first, int second);
int multiple(int first, int second);
int division(int first, int second);
int calculator(int first, int second, calcFuncPtr func);

int main()
{
	calcFuncPtr calc = NULL;
	int a = 0, b = 0;
	char op = 0;
	int result = 0;

	scanf("%d %c %d", &a, &op, &b);

	switch (op)
	{
	case '+':
		calc = plus; // &을 붙여도 or 안붙여도 동작을 한다.
		break;
	case '-':
		calc = &minus;
		break;
	case '*':
		calc = &multiple;
		break;
	case '/':
		calc = &division;
		break;
	default:
		break;
	}

	//result = calculator(a, b, calc);
	result = calc(a, b);
	printf("result: %d", result);
	return 0;
}
int plus(int first, int second)
{
	return first + second;
}

int minus(int first, int second)
{
	return first + second;
}

int multiple(int first, int second)
{
	return first * second;
}

int division(int first, int second)
{
	return first / second;
}

int calculator(int first, int second, calcFuncPtr func)
{
	return func(first, second);
}*/