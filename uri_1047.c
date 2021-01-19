
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int h1,m1,h2,m2,hour = 0,minutes = 0;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    hour = h2 - h1;
    if(hour < 0){
        hour = 24 + (h2 - h1);
    }
    minutes = m2 - m1;
    if(minutes < 0){
        minutes = 60 + (m2 - m1);
        hour --;
    }
    if(h1 == h2 && m1 == m2){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minutes);
    }
    return 0;
}

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a,b,c,d,hour,minutes,duration,temp,temp2;
//     scanf("%d %d %d %d",&a,&b,&c,&d);
//     if(a>c && b>d){
//         temp = a - c;
//         hour = (24 - temp)-1;
//         temp2 = b - d;
//         minutes = 60 - temp2;
//         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minutes);
//     }
//     else if(a<c && b<d){
//         hour = c - a;
//         minutes = d - b;
//         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minutes);
//     }
//     else if(a < c && b > d){
//         hour = (c - a)-1;
//         temp2 = b - d;
//         minutes = 60 - temp2;
//         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minutes);
//     }
//     else if(a > c && b < d){
//         temp = a - c;
//         hour = 24 - temp;
//         minutes = d - b;
//         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minutes);
//     }
//     else if(a == c && b == d){
//         printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
//     }
//     return 0;
// }

