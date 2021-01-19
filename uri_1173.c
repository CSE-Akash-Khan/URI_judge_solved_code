#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N[10];
    int i,n,j;
    scanf("%d",&n);
    for(i = n,j = 0;j<10; i+=i,j++){
        N[j] = i;
        printf("N[%d] = %d\n",j,i);
    }
    return 0;
}