#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x1,x2,x3,i,j,t;
    scanf("%d %d %d",&x1, &x2, &x3);
    int A[3] = {x1, x2, x3};
    int B[3] = {x1, x2, x3};
    for(i = 0; i<3; i++){
        for(j = 0; j<2-i; j++){
            if(A[j] > A[j + 1]){
                t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
    for(i = 0; i<3; i++){
        printf("%d\n",A[i]);
    }
    printf("\n");
    for(i = 0; i<3; i++){
        printf("%d\n",B[i]);
    }
    return 0;
}
