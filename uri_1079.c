#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    float a,b,c,avarage;
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        scanf("%f %f %f",&a,&b,&c);
        avarage = (a*2 + b*3 + c*5) / 10;
        printf("%.1f\n",avarage);
    }
    return 0;
}