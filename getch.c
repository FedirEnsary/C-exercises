#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

main(){
    int choice;
    do
    {
        printf("Please select on of the following options: \n");
        printf(" 1.Eat egg\n 2.Touch egg\n 3.Hold egg\n 4.Smell egg\n 5.Throw egg\n 6.Break egg\n 7.Ignore egg\n 8.Rub egg\n 9.Pet the cat\n 0.Quit\n");
        choice = getchar();
        getchar();
        if (!isdigit(choice)){
            printf("Thats not a valid input.\n");
            continue;
        }
        switch(choice)
        {
        case ('1'): printf("\n You have chosen to eat the egg?\n\n");
        break;
        case ('2'): printf("\n You have chosen to touch the egg?\n\n");
        break;
        case ('3'): printf("\n You have chosen to hold the egg?\n\n");
        break;
        case ('4'): printf("\n You have chosen to smell the egg?\n\n");
        break;
        case ('5'): printf("\n You have chosen to throw the egg?\n\n");
        break;
        case ('6'): printf("\n You have chosen to break the egg?\n\n");
        break;
        case ('7'): printf("\n You have chosen to ignore the egg?\n\n");
        break;
        case ('8'): printf("\n You have chosen to rub the egg???\n\n");
        break;
        case ('9'): printf("\n You have chosen to pet the cat.\n\n");
        break;
        case ('0'): printf("\n Goodbye.");
        exit(0);
        defualt: printf("what did you even do?\n");
        break;
        }
    }
    while(choice != 9);
}
