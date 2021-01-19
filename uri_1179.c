
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j = 0,k = 0,t;
    int even[5],odd[5];
    for(i = 0; i<15; i++){
        scanf("%d",&n);
        if(j > 4){
            for(t = 0; t<5; t++){
                printf("par[%d] = %d\n",t,even[t]);
            }
            j = 0;
        }
        if(n % 2 == 0){
            even[j] = n;
            j++;
        }
        if(k > 4){
            for(t = 0; t<5; t++){
                printf("impar[%d] = %d\n",t,odd[t]);
            }
            k = 0;
        }
        if(n % 2 != 0){
            odd[k] = n;
            k++;
        }
    }
    if(k > 0){
        for(i = 0; i<k; i++){
            printf("impar[%d] = %d\n",i,odd[i]);
        }
    }
    if(j > 0){
        for(i = 0; i<j; i++){
            printf("par[%d] = %d\n",i,even[i]);
        }
    }
    return 0;
}