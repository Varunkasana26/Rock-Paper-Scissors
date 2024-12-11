#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int c=0,p=0;
int game(int player, int computer)
{
    int again;
    if (player == 0 && computer == 0)
    {
        printf("Tie\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("Computer win\n");
        c++;
    }
    else if (player == 0 && computer == 2)
    {
        printf("Player win\n");
        p++;
    }
    else if (player == 1 && computer == 0)
    {
        printf("Player win\n");
        p++;
    }
    else if (player == 1 && computer == 1)
    {
        printf("Tie\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("Computer win\n");
        c++;
    }
    else if (player == 2 && computer == 0)
    {
        printf("Computer win\n");
        c++;
    }
    else if (player == 2 && computer == 1)
    {
        printf("Player win\n");
        p++;
    }
    else if (player == 2 && computer == 2)
    {
        printf("Tie\n");
    }
    else
    {
        printf("Some error due to input value");
    }
    printf("You want to play again(1/0):- ");
    scanf("%d", &again);
    if (again == 1)
    {
        int player, computer = (rand() % 3) + 0;
        printf("Choose 0 --> rock; 1 --> paper; 2 --> scissor:- ");
        scanf("%d", &player);
        printf("Computer choose %d\n", computer);
        game(player, computer);
    }
    else
    {
        printf("%d computer's score\n",c);
        printf("%d player's score\n",p);
        if(c>p){
            printf("Final winner Computer\n");
        }
        else if(p>c){
            printf("Final winner PLayer\n");
        }
        else if(p==c){
            printf("Match tied");
        }
        printf("THANKS FOR PLAYING");
    }
}
int main()
{
    /*
    0-->rock
    1-->paper
    2-->scissor
    */
    int player, computer = (rand() % 3) + 0;
    printf("Choose 0 --> rock; 1 --> paper; 2 --> scissor:- ");
    scanf("%d", &player);
    printf("Computer choose %d\n", computer);
    game(player, computer);
    return 0;
}