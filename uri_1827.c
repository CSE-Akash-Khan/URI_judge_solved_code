#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    while(scanf("%d",&n) != EOF){
        int M[n][n];
        int i,j;
        for(i = 0; i<n; i++){
            for(j = 0; j<n; j++){
                if(i == j){
                    M[i][j] = 2;
                }
                else if(j == (n-1) - i){
                    M[i][j] = 3;
                }
                else{
                    M[i][j] = 0;
                }
            }
        }
        int size = n / 3;
        for(i = size; i < n - size; i++){
            for(j = size; j < n - size; j++){
                M[i][j] = 1;
            }
        }
        int mid = n / 2;
        M[mid][mid] = 4;
        for(i = 0; i<n; i++){
            for(j = 0; j<n; j++){
                printf("%d",M[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
