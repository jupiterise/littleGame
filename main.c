#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main () {
    time_t t;
    int randomNumber, guess, counter=1;

    srand((unsigned)time(&t));
    randomNumber=rand()%21;

    printf("This is a guessing game.\n");
    printf("I just chose about a number between 1 and 20 and you have to guess it.\n");
    printf("You have 5 tries.\n");
    printf("Please, enter the number that you think it is:\n");
    scanf("%d", &guess);

    while (guess!=randomNumber,counter<=5) {
        if (guess<0 || guess>20) 
            printf("I said \"BETWEEN 1 AND 20\"\n");
        else if (guess==randomNumber) {
            printf("YOU WON!!!\n");
            break;
        }
        else if (counter==5) {
            printf("YOU LOST. My number was %d \n :(\n", randomNumber);
            break;
        }
        if (guess<randomNumber) 
            printf("My number is higher.\n");
        else if (guess>randomNumber) 
            printf("My number is lower.\n");
        
        printf("You still have %d tr%s.\n", (5-counter), (5-counter)==1 ? "y" : "ies");
        counter++;
        scanf("%d", &guess);
    }
    printf("Game ended. xD\n");
}