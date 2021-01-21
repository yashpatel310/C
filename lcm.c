#include<stdio.h>
int find_lcm(int a, int b)  // function definition
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}

int main()
{
    int a, b, lcm;
    printf("Input first number: ");
    scanf("%d", &a);
	printf("Input second number: ");
    scanf("%d", &b);
    lcm = find_lcm(a,b);
    printf("\n LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}
