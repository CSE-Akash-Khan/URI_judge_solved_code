#include<stdio.h>
int main(int argc, char const *argv[])
{
    double M[12][12];
    int i,j,count;
    double sum,avg;
    char ch;
    scanf("%c",&ch);
    for(i = 0; i<12; i++){
        for(j = 0; j<12; j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(i = 0; i<5; i++){
        for(j = i+1; j<12-(i+1); j++){
            sum += M[i][j];
            count++;
        }
    }
    if(ch == 'S'){
        printf("%.1lf\n",sum);
    }
    else{
        if(ch == 'M'){
            avg = sum / count;
            printf("%.1lf\n",avg);
        }
    }
    return 0;
}