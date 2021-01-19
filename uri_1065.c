#include<stdio.h>
int main(int argc, char const *argv[])
{
    int total = 0,n,i;
    for(i = 0; i<5; i++){
        scanf("%d",&n);
        if(n % 2 == 0){
            total ++;
        }
    }
    printf("%d valores pares\n",total);
    return 0;
}