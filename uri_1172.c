#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x[10];
    int i,j;
    for(i = 0; i<10; i++){
        scanf("%d",&x[i]);
        if(x[i] <= 0){
            x[i] = 1;
        }
        printf("X[%d] = %d\n",i,x[i]);
    }
    return 0;
}