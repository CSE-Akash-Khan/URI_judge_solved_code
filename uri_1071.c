#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,i,total = 0;
    scanf("%d%d",&x,&y);
    if(x == y){
        printf("0\n");
    }
    else{
        for(i = x-1; i>y; i--){
            if(i % 2 != 0){
                total += i;
            }
        }
        printf("%d\n",total);
    }
    return 0;
}