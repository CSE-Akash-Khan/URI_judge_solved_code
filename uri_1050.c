#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    if(n == 61){
        printf("Brasilia\n");
    }
    else if(n == 71){
        printf("Salvador\n");
    }
    else if(n == 11){
        printf("Sao Paulo\n");
    }
    else if(n == 21){
        printf("Rio de Janeiro\n");
    }
    else if(n == 32){
        printf("Juiz de Fora\n");
    }
    else if(n == 19){
        printf("Campinas\n");
    }
    else if(n == 27){
        printf("Vitoria\n");
    }
    else if(n == 31){
        printf("Belo Horizonte\n");
    }
    else{
        printf("DDD nao cadastrado\n");
    }
    return 0;
}

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     float n,total = 0,temp,temp2;
//     scanf("%f",&n);
//     if(n >= 0.00 && n <= 2000.00){
//         printf("Isento\n");
//     }
//     else{
//         total += (1000*8)/100;
//         temp = n-3000;
//         temp2 = temp - 1500;
//         if(temp2 >= 0){
//             total += (1500 * 18) / 100;
//             total += (temp2 * 28) / 100;
//         }
//         else{
//             total += (temp * 18) / 100;
//         }
//         printf("R$ %.2f\n",total);
//     }
//     return 0;
// }