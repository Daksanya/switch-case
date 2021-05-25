#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number 0 or 1:");
	scanf("%d",&a);
	switch (a)
	{
      case 0:
        printf("Your Choice is 0");
        break;
      case 1:
        printf("Your Choice is 1");
        break;
      default:
        printf("Invalid input, please enter 0 or 1");
	}
	return 0;
}
