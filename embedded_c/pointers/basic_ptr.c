#include <stdio.h>

int main()
{

	printf("***Basic implementation***\n");
	int x = 10; 
	int *p = &x; 
	printf("*p = %d\n", *p);

	printf("\n***Reading Address of variables***\n");
	int y = 20;
	int *ptr; ptr = &y;
	printf("*ptr = %d\n", *ptr);

	printf("Address of x = %p\n", p);
	printf("Address of y = %p\n", ptr);

	printf("\nNote: k = j is not same as *k = *j\n");
	int b = 10;
	int *j, *k;

	j = &b;
	k = j;

	printf("*j = %d\n", *j);
	printf("*k = %d\n", *k);

	int a = 20; 
	b = 10;

        j = &a;
        k = &b;
        *k = *j;

        printf("\n*j = %d\n", *j);
        printf("*k = %d\n", *k);


	return(0);
}
