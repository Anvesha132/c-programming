#include <stdio.h>
int main()
{
    int days,years,weeks,rem;
    printf("Enter no  of days:");
    scanf("%d",&days);
    years=days / 365;
    rem=days % 365;
    weeks=rem / 7;
    days=rem % 7;
    printf("years = %d\nWeeks = %d\nDays = %d",years,weeks,days);
    return 0;
}