#include <stdio.h>
int main()
{
    int id;
    float hours ,rate ,salary;
    printf("enter employee id=");
    scanf("%d",&id);
    printf("enter hours worked=");
    scanf("%f",&hours);
    printf("enter pay per hour=");
    scanf("%f",&rate);
    salary=hours*rate;
    printf("Employee id=%d\n",id);
    printf("Salary=%.2f",salary);
    return 0;


}