#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,sum = 0,n;
    scanf("%d",&n);
    printf("%d\n",n);
    int A[7] = {100, 50, 20, 10, 5, 2, 1};
    int B[7];
    for(i = 0; i<7; i++){
        for(j = i; n>= A[j]; n -= A[i]){
            sum ++;
        }
        B[i] = sum;
        sum = 0;
    }
    for(i = 0; i<7; i++){
        printf("%d nota(s) de R$ %d,00\n",B[i],A[i]);
    }

    // for(i = 0; i<7; i++){
    //     if(B[i] != 0){
    //         printf("%d nota(s) de R$ %d,00\n",B[i],A[i]);
    //     }
    // }
    return 0;
}