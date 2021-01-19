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
            int M[n][n],i,j,num = 1;
            for(i = 0; i<n;i++){
                for(j = 0;j<n-i; j++){
                    if(i == 0){
                        M[j][j] = num;
                    }
                    else{
                        M[j][i+j] = num;
                        M[i+j][j] = num;
                    }
                }
                num++;
            }
            for(i = 0; i<n; i++){
                for(j = 0; j<n; j++){
                    if(j == n-1)
                        printf("%3d",M[i][j]);
                    else printf("%3d ",M[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}
