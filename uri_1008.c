#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number,worked_hour;
    float per_hour,salary;
    scanf("%d %d %f",&number, &worked_hour, &per_hour);
    salary = (worked_hour * per_hour);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",number,salary);
    return 0;
}
