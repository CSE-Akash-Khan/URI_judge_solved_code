#include<stdio.h>
int main(int argc, char const *argv[])
{
    float i,j;
    for(i = 0.0; i<2.1; i+=.2){
        for(j = 1; j<=3; j++){
            if(i > 0.1 && i<0.9){
                printf("I=%.1f J=%.1f\n",i,j+i);
            }
            else if(i > 1.1 && i < 1.9){
                printf("I=%.1f J=%.1f\n",i,j+i);
            }
            else{
                printf("I=%.f J=%.f\n",i,j+i);
            }
        }
    }
    return 0;
}