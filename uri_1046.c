#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,temp,duration;
    scanf("%d %d",&a,&b);
    if(a>b){
        temp = a - b;
        duration = 24 - temp;
        printf("O JOGO DUROU %d HORA(S)\n",duration);
    }
    else if(a < b){
        duration = b - a;
        printf("O JOGO DUROU %d HORA(S)\n",duration);
    }
    else if(a == b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}