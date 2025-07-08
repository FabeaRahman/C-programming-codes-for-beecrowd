#include<stdio.h>
int main()
{
    int number,working_hour;
    float salary_per_hour,salary;
    scanf("%d %d %f",&number,&working_hour,&salary_per_hour);
    salary = working_hour*salary_per_hour;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;
}
