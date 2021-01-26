#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int age;
    int phone;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=3;
 
    Employee employees[n];

    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
		printf("Name: ");
        scanf("%s",employees[i].name);
		printf("Age: ");
        scanf("%d",&employees[i].age);
        printf("Phone number: ");
        scanf("%d",&employees[i].phone);
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }

 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s ",employees[i].name);
 		printf("Age \t: ");
        printf("%d ",employees[i].age);
        printf("Phone Number \t: ");
        printf("%d ",employees[i].phone); 
        printf("Salary \t: ");
        printf("%d ",employees[i].salary);
 
        printf("\n");
    }
 
	return 0;
 }
