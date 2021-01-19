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
    for(i = 1; i<12; i++){
        for(j = 11; j>=12-i; j--){
            sum += M[i][j];
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