#include<stdio.h>
int main()
{
    float r=6,pi=3.14;
    float area,peri;
    area=pi*r*r;
    peri=2*pi*r;
    printf("Area=%.2f\n",area);
    printf("perimeter=%.2f\n",peri);
    return 0;
}