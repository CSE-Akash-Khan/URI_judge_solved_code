#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,total = 0,cohela = 0,rato = 0, sapo = 0,x;
    char word;
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        scanf("%d %c",&x,&word);
        total += x;
        if(word == 'C'){
            cohela += x;
        }
        else if(word == 'R'){
            rato += x;
        }
        else if(word == 'S'){
            sapo += x;
        }
    }
    float c,r,s;
    c = cohela * 100.0/total;
    r = rato * 100.0/total;
    s = sapo * 100.0/total;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",cohela);
    printf("Total de ratos: %d\n",rato);
    printf("Total de sapos: %d\n",sapo);
    printf("Percentual de coelhos: %.2f %%\n",c);
    printf("Percentual de ratos: %.2f %%\n",r);
    printf("Percentual de sapos: %.2f %%\n",s);
    return 0;
}