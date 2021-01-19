#include<stdio.h>
int main(int argc, char const *argv[])
{
    int h1,h2,m1,m2,minutes,hour = 0;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if(m1>m2){
        m2 += 60;
        minutes = m2 - m1;
        h1++;
        hour = (h2 - h1);
    }
    else{
        minutes = m2 - m1;
        hour = h2 - h1;
    }
    if(hour == 0 && minutes == 0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(hour < 0){
        hour += 24;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minutes);
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minutes);
    }
    return 0;
}

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     float salary,incrase_amount,total_salary;
//     scanf("%f",&salary);
//     if(salary >= 0 && salary <= 400.00){
//         incrase_amount = (salary * 15) / 100;
//         total_salary = salary + incrase_amount;
//         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",total_salary,incrase_amount);
//     }
//     else if(salary >= 400.01 && salary <= 800.00){
//         incrase_amount = (salary * 12) / 100;
//         total_salary = salary + incrase_amount;
//         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",total_salary,incrase_amount);
//     }
//     else if(salary >= 800.01 && salary <= 1200.00){
//         incrase_amount = (salary * 10) / 100;
//         total_salary = salary + incrase_amount;
//         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",total_salary,incrase_amount);
//     }
//     else if(salary >= 1200.01 && salary <= 2000.00){
//         incrase_amount = (salary * 7) / 100;
//         total_salary = salary + incrase_amount;
//         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",total_salary,incrase_amount);
//     }
//     else if(salary >= 2000.01){
//         incrase_amount = (salary * 4) / 100;
//         total_salary = salary + incrase_amount;
//         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",total_salary,incrase_amount);
//     }
//     return 0;
// }