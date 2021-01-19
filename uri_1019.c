#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,min,hour,sec,h1,final_min,s1,hour_to_sec,min_to_sec,final_sec;
    scanf("%d",&n);
    min = n / 60;
    hour = min / 60;//hour
    h1 = hour * 60;
    final_min = min - h1;//minute
    hour_to_sec = h1 * 60;
    min_to_sec = final_min * 60;
    final_sec = n - (hour_to_sec + min_to_sec);//second
    printf("%d:%d:%d\n",hour,final_min,final_sec);
    return 0;
}