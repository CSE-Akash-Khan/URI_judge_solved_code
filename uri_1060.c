#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a;
    int total = 0,i;
    for(i = 0; i<6; i++){
        scanf("%f",&a);
        if(a >= 0){
            total ++;
        }
    }
    printf("%d valores positivos\n",total);
    return 0;
}
