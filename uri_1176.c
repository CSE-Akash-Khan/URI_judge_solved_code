#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,T;
    long long int A[60];
    A[0] = 0;
    A[1] = 1;
    for(i = 2; i<61; i++){
        A[i] = A[i - 1] + A[i - 2];
    }
    scanf("%d",&T);
    for(i = 0;i<T; i++){
        scanf("%d",&n);
        printf("Fib(%d) = %lld\n",n,A[n]);
    }
    return 0;
}