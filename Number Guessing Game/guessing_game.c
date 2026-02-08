#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing Numbers\n");
    random=rand()%100+1;//generating random number between 1 to 100
    printf("Number generated is %d",random);

    do{
        printf("\nPlease enter your Guess between 1to 100):");
        scanf("%d",&guess);
        no_of_guess++;

        if(guess<random){
            printf("Guess larger number,\n");
        }else if(guess>random){
            printf("Guess smaller number\n");
        }else{
            printf(" CONGRATULATIONS !!! You have successfully guessed the Number in %d attempts",no_of_guess);
        }

    }

    while(guess!=random);
    printf("\nBye Bye , Thanks for playing the game \n");
    printf("\nDeveloped by:Prachi Tiwari");


}