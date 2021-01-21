#include<stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("01");
		}
		printf(" ");
	}
  return 0;
}
