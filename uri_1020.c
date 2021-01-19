#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year,remaining_day,mounth,day,n;
    scanf("%d",&n);
    year = n / 365;
    remaining_day = n - (365 * year);
    mounth = remaining_day / 30;
    day = remaining_day - (30 * mounth);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,mounth,day);
    return 0;
}