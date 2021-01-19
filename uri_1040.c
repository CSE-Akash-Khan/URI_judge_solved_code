#include<stdio.h>
int main(int argc, char const *argv[])
{
    float n1,n2,n3,n4,n5,sum_weight,average,re_average;
    scanf("%f %f %f %f",&n1, &n2, &n3, &n4);
    sum_weight = 10;
    average = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / sum_weight;
    printf("Media: %.1f\n",average);
    if(average >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(average < 5.0){
        printf("Aluno reprovado.\n");
    }
    else if(average >= 5.0 && average <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&n5);
        printf("Nota do exame: %.1f\n",n5);
        re_average = (average + n5) / 2;
        if(re_average >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else if(re_average <= 4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",re_average);
    }
    return 0;
}