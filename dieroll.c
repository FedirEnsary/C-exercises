#include <stdio.h>
#include <math.h>

main(){
    int die1;
    int die2;
    char guess;
    int wins = 0;
    int rounds = 0;
    do{
        die1 = rand()% 6 + 1;
        die2 = rand()% 6 + 1;
        printf("The first die rolled a %d, what do you think the second one will roll?\n Press enter after you choose:\n (L)ower   (S)ame   (H)igher   (Q)uit\n", die1);
        guess = toupper(getchar());
        getchar();
        while (!(guess == 'L' || guess == 'S' || guess == 'H' || guess == 'Q')){
            printf("\nThats not a valid input, try again:\n");
            guess = toupper(getchar());
            getchar();
        }
        if(die1 == die2){
            if(guess == 'S'){
            printf("You were right! they\'re the same!");
            wins++;
            rounds++;
            }
            else if (guess != 'Q'){
            printf("Nope! %d is not the same as %d.", die1, die2);
            rounds++;
            }
        }
        else if(die1 < die2){
            if(guess == 'H'){
            printf("You were right! %d is higher!", die2);
            wins++;
            rounds++;
            }
            else if (guess != 'Q'){
            printf("Nope! %d is not higher than %d.", die2, die1);
            rounds++;
            }
        }
        else{
            if(guess == 'L'){
            printf("You were right! %d is lower!", die2);
            wins++;
            rounds++;
            }
            else if (guess != 'Q'){
            printf("Nope! %d is not lower than %d.", die2, die1);
            rounds++;
            }
        }
        printf("\n");
    } while (guess != 'Q');
    printf("Wow! you got %d out of %d rounds correct, thats %s", wins, rounds, (wins*2 > rounds) ? "better than average!" : "worse than average, you suck!");
    return 0;
}
