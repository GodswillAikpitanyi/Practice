#include <stdio.h>

void f(int *b);

int main(void)
{
	int *k;
	int a[] = {8, 9, 50, 20};
	
	k = a;
	printf("a: %p\n", a);
	printf("&a[0]: %p\n", &a[0]);
	printf("k: %p\n", k);
	f(a);

	return (0);
}

void f(int *b)
{
	printf("b: %p\n", b);
	return;
}
