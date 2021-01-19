#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,x;
    scanf("%d",&n);
    int ara[n];
    for(i = 0;i<n; i++){
        scanf("%d",&x);
        ara[i] = x;
    }
    for(i = 0; i<n; i++){
        if(ara[i] == 0){
            printf("NULL\n");
        }
        else if(ara[i] % 2 == 0 && ara[i] > 0){
            printf("EVEN POSITIVE\n");
        }
        else if(ara[i] % 2 == 0 && ara[i] < 0){
            printf("EVEN NEGATIVE\n");
        }
        else if(ara[i] % 2 != 0 && ara[i] > 0){
            printf("ODD POSITIVE\n");
        }
        else if(ara[i] % 2 != 0 && ara[i] < 0){
            printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int N,X,a;
//     scanf ("%d", &N);
//     for(a=1;a<=N;a++)
//     {
//         scanf ("%d",&X);
//         if(X==0)
//             printf("NULL\n");
//         else if(X<=0&&X%2==0)
//             printf ("EVEN NEGATIVE\n");
//         else if(X<=0&&X%2==-1)
//             printf ("ODD NEGATIVE\n");
//         else if(X>=0&&X%2==0)
//             printf ("EVEN POSITIVE\n");
//         else if(X>=0&&X%2==1)
//             printf ("ODD POSITIVE\n");
//     }
//     return 0;
// }