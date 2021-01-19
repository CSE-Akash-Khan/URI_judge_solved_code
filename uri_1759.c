#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    scanf("%d",&n);
    for(i = 1; i<=n; i++){
        if(i == n){
            printf("Ho!\n");
        }
        else{
            printf("Ho ");
        }
    }
    return 0;
}