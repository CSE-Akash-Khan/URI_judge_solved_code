#include<stdio.h>
int main(int argc, char const *argv[])
{
    while(1){
        int a,b,c;
        scanf("%d",&a);
        if(a == 0){
            break;
        }
        else{           
            scanf("%d",&b);
            scanf("%d",&c);
            int result,x = 1;
            result = (a * b)*100 / c;
            while(x*x <= result){
                x++;
            }
            printf("%d\n",x - 1);
        }
    }
    return 0;
}