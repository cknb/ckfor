#include <stdio.h>
#include<string.h>
#define  BOOK "war and peace"
int main(void)
{
	char firstname[40];
	char lastname[40];
	printf("please enter you name:\n");
	scanf_s("%s", firstname,40);
	getchar();
	scanf_s("%s", lastname,40);
	getchar();
	printf("your name is %s,%s", firstname, lastname);
	
	getchar();
	return 0;
}


