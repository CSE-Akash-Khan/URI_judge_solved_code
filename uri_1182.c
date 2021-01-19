#include<stdio.h>
int main(int argc, char const *argv[])
{
    float M[12][12];
    int i,j,n;
    float sum,avg;
    char ch;
    scanf("%d %c",&n,&ch);
    for(i = 0; i<12; i++){
        for(j = 0; j<12; j++){
            scanf("%f",&M[i][j]);
        }
    }
    for(i = 0; i<12; i++){
        sum += M[i][n];
    }
    if(ch == 'S'){
        printf("%.1f\n",sum);
    }
    else{
        if(ch == 'M'){
            avg = sum / 12;
            printf("%.1f\n",avg);
        }
    }
    return 0;
}