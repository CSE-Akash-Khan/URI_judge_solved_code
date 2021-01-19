#include<stdio.h>
int lenHelper(int x)  
{ 
    if(x>=1000000000) return 10; 
    if(x>=100000000) return 9; 
    if(x>=10000000) return 8; 
    if(x>=1000000) return 7; 
    if(x>=100000) return 6; 
    if(x>=10000) return 5; 
    if(x>=1000) return 4; 
    if(x>=100) return 3; 
    if(x>=10) return 2; 
    return 1; 
}
int lenHelper(int x)
{
    int a=x,b=0;
    while(a)
    {
        a/=10;
        b++;
    }
    return b;
}
int main(int argc, char const *argv[])
{
    while(1){
        int n;
        scanf("%d",&n);
        if(n == 0){
            break;
        }
        else{
            int i,j,l,k,temp,r,s,e,f,T;
            int M[n][n];
            for(i = 0,l = 1; i<n; i++,l+=l){
                for(j = 0,k = l; j<n; j++,k+=k){
                    M[i][j] = k;
                }
            }
            e = lenHelper(M[i-1][j-1]);
            for(i = 0; i<n;i++){
                for(j = 0; j<n; j++){
                    f = lenHelper(M[i][j]);
                    T = e - f;
                    if(j == 0){

                        for(r = 0; r<T; r++){
                            printf(" ");
                        }
                        printf("%d",M[i][j]);
                    }
                    else{
                        for(s = 0;s<T; s++){
                            printf(" ");
                        }
                        printf(" %d",M[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}