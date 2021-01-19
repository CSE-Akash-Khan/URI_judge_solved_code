#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,total = 0;
    float n,value = 0,result = 0;
    for(i = 0; i < 6; i++){
        scanf("%f",&n);
        if(n > 0){
            total ++;
            value += n;
        }
    }
    result = value / total;
    printf("%d valores positivos\n%.1f\n",total,result);
    return 0;
}