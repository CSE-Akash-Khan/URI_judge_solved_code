#include<stdio.h>
int main(int argc, char const *argv[])
{
    int spent_times,cars_speed;
    double litters_amount;
    scanf("%d %d",&spent_times, &cars_speed);
    litters_amount = (spent_times*cars_speed)/12.0;
    printf("%.3lf\n",litters_amount);
    return 0;
}