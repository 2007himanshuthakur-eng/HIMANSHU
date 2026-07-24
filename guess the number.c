#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));
    printf("WELCOME TO THE WORLDING OF GUESSING NUMBERS\n");
    random = rand() % 100 +1;
    do{
        printf("\nPLEASE ENTER YOUR GUESS NUMBER BETWEEN(1 TO 100):");
        scanf("%d", &guess);
        no_of_guess++;
        if(guess<random){
            printf("GUESS LARGER NUMBER:\n");
        }
        else if(guess>random){
            printf("GUESS A SMALLER NUMBER:\n");
        }
        else{
            printf("CONGRATULATIONS!!! YOU HAVE SUCCESSFULLY GUESS THE NUMBER IN %d ATTEMPTS.", no_of_guess);
        }
    }while(guess!=random);
printf("\nBYE BYE, THANKS FOR PLAYING.");
}
