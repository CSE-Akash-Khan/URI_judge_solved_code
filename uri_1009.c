#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[20];
    gets(name);
    double salary,value_sold,total;
    scanf("%lf %lf",&salary, &value_sold);
    total = (value_sold * 15) / 100;
    // printf("%s",name);
    printf("TOTAL = R$ %.2lf\n",salary+total);
    return 0;
}