#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        int j,k;
        scanf("%d %d",&j,&k);
        printf("%d\n",j + k);
    }
    return 0;
}