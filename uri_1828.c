todo: 1828
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int n,i,j;
    scanf("%d",&n);
    for(i = 0;  i<n; i++){
        char first_input[20],second_input[20];
        scanf("%s %s",&first_input,&second_input);
        typedef struct
        {
            char *pos1,*p1_eng;
            char *pos2,*p2_eng;
            char *sheldon,*raj;
        }
        object;
        object obj; 
        obj.sheldon = first_input;
        obj.raj = second_input;
        char *possible_option[5] = {"pedra","papel","tesoura","lagarto","Spock"};
        char *option_english[5] = {"rock","paper","scissors","lizard","Spock"};
        char *rules[20] = {
            "scissors","paper",
            "paper","rock",
            "rock","lizard",
            "lizard","Spock",
            "Spock","scissors",
            "scissors","lizard",
            "lizard","paper",
            "paper","Spock",
            "Spock","rock",
            "rock","scissors"
        };
        for(j = 0; j<5; j++){
            if(strcmp(possible_option[j],obj.sheldon) == 0){
                obj.p1_eng = option_english[j];
            }
            if(strcmp(possible_option[j],obj.raj) == 0){
                obj.p2_eng = option_english[j];
            }
        }
        for(j = 0; j<20; j+=2){
            if(strcmp(obj.p1_eng,obj.p2_eng) == 0){
                printf("Caso #%d: De novo!\n",i+1);
                break;
            } 
            if((strcmp(rules[j],obj.p1_eng) == 0) && (strcmp(rules[j+1],obj.p2_eng) == 0)){
                printf("Caso #%d: Bazinga!\n",i+1);
                break;
            }
            if((strcmp(rules[j],obj.p2_eng) == 0) && (strcmp(rules[j+1],obj.p1_eng) == 0)){
                printf("Caso #%d: Raj trapaceou!\n",i+1);
                break;
            } 
        }
    }
    return 0;
}