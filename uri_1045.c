#include<stdio.h>
void insertion_sort(double ara[], int n){
    int i,j;
    for(i = 1; i<n; i++){
        double item = ara[i];
        j = i - 1;
        while(j>=0 && ara[j]<item){
            ara[j+1] = ara[j];
            j = j-1;
        }
        ara[j+1] = item;
    }
}
int main(int argc, char const *argv[])
{
    double a,b,c;
    scanf("%lf %lf %lf",&a, &b, &c);
    double A[3] = {a,b,c};
    insertion_sort(A,3);
    a = A[0];
    b = A[1];
    c = A[2];
    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(a*a == b*b + c*c){
        printf("TRIANGULO RETANGULO\n");
    }
    else if((a*a > b*b + c*c)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(a*a < b*b + c*c){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a == b || b == c){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}