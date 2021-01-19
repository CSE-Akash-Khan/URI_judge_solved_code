#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,i;
    scanf("%d %d",&x,&y);
    int code[5] = {1, 2, 3, 4, 5};
    float price[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    for(i = 0; i<5; i++){
        if(code[i] == x){
            printf("Total: R$ %.2f\n",price[i] * y);
        }
    }
    return 0;
}