#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,A[1000],i,j;
    scanf("%d",&n);
    for(i = 0,j = 0; i<1000;i++,j++){
        printf("N[%d] = %d\n",i,j);
        if(j == n-1){
            j = 0-1;
        }
    }
    return 0;
}