#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,ara[100];
    int max = 0;
    int position = 0;
    for(i = 0; i<100; i++){
        scanf("%d",&n);
        ara[i] = n;
    }
    for(i = 0; i<100; i++){
        if(ara[i] > max){
            max = ara[i];
            position = i;
        }
    }
    printf("%d\n%d\n",max,position+1);
    return 0;
}