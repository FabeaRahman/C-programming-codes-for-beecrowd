#include<stdio.h>
int main()
{
    char name[100];
    double fixed_salary,sales;
    scanf("%s %lf %lf",&name,&fixed_salary,&sales);
    double salary = fixed_salary + (sales*0.15);
    printf("TOTAL = R$ %.2lf\n",salary);
    return 0;
}

