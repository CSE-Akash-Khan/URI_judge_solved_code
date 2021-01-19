#include<stdio.h>
int main(int argc, char const *argv[])
{
    while(1){
        int n;
        scanf("%d",&n);
        if(n == 0){
            break;
        }
        else{
            int M[n][n],num = 1,i,j;
            for(i = 0; i < n; i++){
                for(j = i; j<n-i; j++){
                    M[i][j] = num;//first row
                    M[n - (i+1)][j] = num;//last row
                    M[j][i] = num;//frist colom
                    M[j][n - (i+1)] = num;//last colom
                }
                num++;
            }
            for(i = 0;i<n; i++){
                for(j = 0; j<n; j++){
                    if(j == 0){
                        printf("%3d",M[i][j]);
                    }
                    else{
                        printf(" %3d",M[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}