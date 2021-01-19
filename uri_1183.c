#include<stdio.h>
int main(int argc, char const *argv[])
{
    float M[12][12];
    int i,j,count;
    float sum,avg;
    char ch;
    scanf("%c",&ch);
    for(i = 0; i<12; i++){
        for(j = 0; j<12; j++){
            scanf("%f",&M[i][j]);
        }
    }
    for(i = 0; i<11; i++){
        for(j = 0; j<12-(i+1); j++){
            sum += M[i][j+(i+1)];
            count++;
        }
    }
    if(ch == 'S'){
        printf("%.1f\n",sum);
    }
    else{
        if(ch == 'M'){
            avg = sum / count;
            printf("%.1f\n",avg);
        }
    }
    return 0;
}