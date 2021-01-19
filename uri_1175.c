#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N[5],i,temp;
    for(i = 0; i<5; i++){
        scanf("%d",&N[i]);
    }
    for(i = 0; i<5/2; i++){
        temp = N[i];
        N[i] = N[4-i];
        N[4-i] = temp;
    }
    for(i = 0; i<5; i++){
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}