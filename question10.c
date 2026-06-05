#include <stdio.h>
int main()
{
    float w1,w2,p1,p2,avg;
    printf("enter weight and purchase of item 1=");
    scanf("%f %f",&w1,&p1);
    printf("enter weight and purchase of item 2=");
    scanf("%f %f",&w2,&p2);
    avg=(w1*p1+w2*p2)/(p1+p2);
    printf("Average=%.2f",avg);
    return 0;
}