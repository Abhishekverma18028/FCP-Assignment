//program to create an employee database using array 
#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int id;
    int salary;
} Employee;
 
int main()
{
    int n=2;

    Employee employees[n];
 
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        printf("id: ");
        scanf("%d",&employees[i].id);

        printf("Salary: ");
        scanf("%d",&employees[i].salary);

        char ch = getchar();
 
        printf("\n");
    }
 
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}