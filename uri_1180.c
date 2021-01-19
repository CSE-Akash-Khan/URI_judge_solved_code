#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,k;
    scanf("%d",&n);
    int A[n];
    for(i = 0; i<n; i++){
        scanf("%d",&k);
        A[i] = k;
    }
    int item = A[0];
    int position = 0;
    for(i = 0; i<n; i++){
        if(A[i] < item){
            item = A[i];
            position = i;
        }
    }
    printf("Menor valor: %d\n",item);
    printf("Posicao: %d\n",position);
    return 0;
}