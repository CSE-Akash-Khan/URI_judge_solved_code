#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    while(scanf("%d",&n) != EOF){
        int M[n][n];
        for(i = 0; i<n; i++){
            for(j = 0; j<n; j++){
                if(j == (n-1) - i){
                    M[i][j] = 2;
                }
                else if(j == i){
                    M[i][j] = 1;
                }
                else{
                    M[i][j] = 3;
                }
            }
        }
        for(i = 0; i<n; i++){
            for(j = 0; j<n; j++){
                printf("%d",M[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}