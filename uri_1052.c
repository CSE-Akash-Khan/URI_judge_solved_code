#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    scanf("%d",&n);
    int number[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    char mounth[12][20] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    for(i = 0;i<12;i++){
        if(n == number[i]){
            printf("%s\n",mounth[i]);
        }
    }
    return 0;
}
