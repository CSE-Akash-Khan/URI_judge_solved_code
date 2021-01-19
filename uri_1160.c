#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,p1,p2,year;
    double g1,g2;
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        year = 0;
        scanf("%d %d %lf %lf",&p1,&p2,&g1,&g2);
        while(p1 <= p2){
            p1 += (p1 * g1) / 100;
            p2 += (p2 * g2) / 100;
            year++;
            if(year > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(year <= 100){
            printf("%d anos.\n",year);
        }
    }
    return 0;
}