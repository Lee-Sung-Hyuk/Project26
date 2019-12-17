#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int intpow(int a, int b);
	int m, n;
	printf("두 개의 정수를 입력하시오: ");
	scanf("%d%d", &m, &n);
	printf("함수의 결과는 %d입니다.", intpow(m, n));
    
}

int intpow(int a, int b)
{
	int mn = 0;
	mn = a * b;
    return mn;
}
