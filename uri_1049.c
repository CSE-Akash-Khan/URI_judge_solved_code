#include <stdio.h>
#include<string.h>
int main()
{
    char first_clue[30],second_clue[30],third_clue[30];
    scanf("%s %s %s",first_clue,second_clue,third_clue);

    if(!strcmp(first_clue, "vertebrado") == 0){
        if(!strcmp(second_clue,"ave")){
            if(!strcmp(third_clue,"carnivoro")){
                printf("aguia\n");
            }
            else if(!strcmp(third_clue,"onivoro")){
                printf("pomba\n");
            }
        }
        
        else if(!strcmp(second_clue,"mamifero")){
            if(!strcmp(third_clue,"onivoro")){
                printf("homem\n");
            }
            else if(!strcmp(third_clue,"herbivoro")){
                printf("vaca\n");
            }
        }
        
    }
    else if(!strcmp(first_clue, "invertebrado")){
        if(!strcmp(second_clue,"inseto")){
            if(!strcmp(third_clue,"hematofago")){
                printf("pulga\n");
            }
            else if(!strcmp(third_clue,"herbivoro")){
                printf("lagarta\n");
            }
        }
        
        else if(!strcmp(second_clue,"anelideo")){
            if(!strcmp(third_clue,"hematofaga")){
                printf("sanguessuga\n");
            }
            else if(!strcmp(third_clue,"onivoro")){
                printf("minhoca\n");
            }
        }     
    }
    return 0;
}

// #include <stdio.h>
// #include<string.h>
// int main() {
//     char a[100],b[100],c[100];
//     scanf("%s%s%s",a,b,c);
//     if(strcmp(a,"vertebrado")==0)
//     {
//         if(strcmp(b,"ave")==0)
//         {
//             if(strcmp(c,"carnivoro")==0)
//             {
//                 printf("aguia\n");
//             }
//             else if(strcmp(c,"onivoro")==0)
//             {
//                 printf("pomba\n");
//             }
//         }
//         else if(strcmp(b,"mamifero")==0)
//         {
//             if(strcmp(c,"onivoro")==0)
//             {
//                 printf("homem\n");
//             }
//             else if(strcmp(c,"herbivoro")==0)
//             {
//                 printf("vaca\n");
//             }
//         }
//     }
//     else if(strcmp(a,"invertebrado")==0)
//     {
//         if(strcmp(b,"inseto")==0)
//         {
//             if(strcmp(c,"hematofago")==0)
//             {
//                 printf("pulga\n");
//             }
//             else if(strcmp(c,"herbivoro")==0)
//             {
//                 printf("lagarta\n");
//             }
//         }
//         else if(strcmp(b,"anelideo")==0)
//         {
//             if(strcmp(c,"hematofago")==0)
//             {
//                 printf("sanguessuga\n");
//             }
//             else if(strcmp(c,"onivoro")==0)
//             {
//                 printf("minhoca\n");
//             }
//         }
//     }
//     return 0;
// }