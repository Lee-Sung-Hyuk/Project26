#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int intpow(int a, int b);
	int m, n;
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d%d", &m, &n);
	printf("�Լ��� ����� %d�Դϴ�.", intpow(m, n));
    
}

int intpow(int a, int b)
{
	int mn = 0;
	mn = a * b;
    return mn;
}
