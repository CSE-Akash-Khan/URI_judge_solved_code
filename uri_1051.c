#include<stdio.h>
int main(int argc, char const *argv[])
{
    float n,total = 0,stor1;
    scanf("%f",&n);
    if((n >= 0.00 && n <= 2000.00) || n < 0){
        printf("Isento\n");
    }
    else if(n >= 2000.01 && n<=3000.00){
        stor1 = n - 2000;
        total += (stor1 * 8) / 100;
    }
    else if(n >= 3000.01 && n <= 4500.00){
        stor1 = n - 3000;
        total += (1000 * 8) / 100;
        total += (stor1 * 18) / 100;
    }
    else{
        stor1 = n - 4500;
        total += (1000*8) / 100;
        total += (1500*18) / 100;
        total += (stor1 * 28) / 100;
    }
    if(total > 0){
        printf("R$ %.2f\n",total);
    }
    return 0;
}