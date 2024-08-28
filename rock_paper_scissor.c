
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <time.h>
#include <conio.h>

/*
1. Create computer rock paper scissor
2. Take user value 
3. compare both condition 
*/
char who_won(char user , char computer){
    if (user == computer){
        return 't';
    }
    else if ((user == 's' && computer == 'p') || (user=='p' && computer == 'r') || (user=='r' && computer == 's'))
    {
        return 'u';
    }
    else
    {
        return 'c';
    }
    

}
int main(){
    char computer;
    char user;
    int random ; 
    char ans[50];
    int user_score = 0;
    int computer_score = 0;

    for (int i = 0 ; i < 100 ; i++)
    {
            printf("\n\nPlease enter \t\t User:%d   Computer:%d\n r for rock \n p for paper \n s for scissor\n e for exit:\n",user_score,computer_score);
    scanf(" %c",&user);

    srand(time(NULL));
    random = rand() %(3)+1;
    if (user=='e'){
        printf("\n\nFINAL SCORE\nUser:%d\t\tComputer:%d",user_score,computer_score);
        return 0;
    }
    
    switch (random)
    {
    case 1:
        computer = 'r';
        printf("Computer chooses rock\n");
        break;
    case 2:
        computer = 'p';
        printf("Computer chooses paper\n");
        break;
    case 3:
        computer = 's';
        printf("Computer chooses scissor\n");
        break;
    
    default:
        break;
    }

    char result = who_won(user,computer);
    switch (result)
    {
    case 't':
        strcpy(ans,"It's a tie\n");
        break;
    case 'u':
        strcpy(ans,"User won\n");
        user_score++;
        break;
    case 'c':
        strcpy(ans,"Computer won\n");
        computer_score++;
        break;
    
    default:
        break;
    }
    printf("%s",ans);
    }

}
  
