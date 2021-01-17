#include<stdio.h>
int main()
{
	int a;
	printf("Select one option\n 1.Pizza, Rs 239\n 2.Pasta, Rs 179\n 3.Burger, Rs 129 \n 4.French Fries, Rs 99\n 5. Sandwich, Rs 149\n");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
			printf("Food Item - Pizza\n Price - Rs 239");
			break;
		case 2:
			printf("Food Item - Pasta\n Price - Rs 179");
			break;
		case 3:
			printf("Food Item - Burger\n Price - Rs 129");
			break;
		case 4:
			printf("Food Item - French Fries\n Price - Rs 99");
			break;
		case 5:
			printf("Food Item - Sandwich\n Price - Rs 149");
			break;
		default:
			printf("Please enter valid choice");
	}
	return 0;
}
