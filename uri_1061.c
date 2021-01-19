#include<stdio.h>
int main(int argc, char const *argv[])
{
    int remain_sec,ds1,ds2,h1,m1,s1,h2,m2,s2,d1,d2,W,X,Y,Z;
    char name1[5], name2[5],del[5];
    scanf("%s %d",name1,&d1);
    scanf("%d %s %d %s %d",&h1,del,&m1,del,&s1);
    scanf("%s %d",name2,&d2);
    scanf("%d %s %d %s %d",&h2,del,&m2,del,&s2);
    ds1 = s1 + (m1 * 60) + (h1 * 60 * 60) + (d1 * 24 * 60 * 60);
    ds2 = s2 + (m2 * 60) + (h2 * 60 * 60) + (d2 * 24 * 60 * 60);
    remain_sec = ds2 - ds1;
    W = remain_sec / 86400;
    remain_sec = remain_sec % 86400;
    X = remain_sec / 3600;
    remain_sec = remain_sec % 3600;
    Y = remain_sec / 60;
    Z = remain_sec % 60;
    printf("%d dia(s)\n",W);
    printf("%d hora(s)\n",X);
    printf("%d minuto(s)\n",Y);
    printf("%d segundo(s)\n",Z);
    return 0;
}
//.........................................................
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int h1,m1,s1,h2,m2,s2,d1,d2,day,hour= 0,minutes = 0,second = 0;
//     char name1[5], name2[5],c1,c2,k1,k2;
//     scanf("%s %d",name1,&d1);
//     scanf("%d %c %d %c %d",&h1,&c1,&m1,&c2,&s1);
//     scanf("%s %d",name2,&d2);
//     scanf("%d %c %d %c %d",&h2,&k1,&m2,&k2,&s2);
//     day = d2 - d1;
//     if(h1 > h2){
//         h2 += 24;
//         hour = h2 - h1;
//         day --;
//         printf("%d dia(s)\n",day);
//     }
//     else{
//         hour = h2 - h1;
//         printf("%d dia(s)\n",day);
//     }
//     if(m1 > m2){
//         m2 += 60;
//         minutes = m2 - m1;
//         hour --;
//         printf("%d hora(s)\n",hour);
//     }
//     else{
//         minutes = m2 - m1;
//         printf("%d hora(s)\n",hour);
//     }
//     if(s1 > s2){
//         s2 += 60;
//         second = s2 - s1;
//         minutes --;
//         printf("%d minuto(s)\n",minutes);
//         printf("%d segundo(s)\n",second);
//     }
//     else{
//         second = s2 - s1;
//         printf("%d minuto(s)\n",minutes);
//         printf("%d segundo(s)\n",second);
//     }
//     return 0;
// }