#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,temp,range,n,value = 7;
    for(i = 1; i<10; i+=2){
        temp = value;
        range = temp - 2;
        for(j = temp; j>=range; j--){
            printf("I=%d J=%d\n",i,j);
        }
        value += 2;
    }
    return 0;
}