#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    scanf("%d",&n);
    i = 1;
    while(i <= 6){
        if(n % 2 != 0){
            printf("%d\n",n);
            i++;
        }
        n++;
    }
    return 0;
}