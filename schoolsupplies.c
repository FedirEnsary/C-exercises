#include <stdio.h>

main(){
    char firstInitial, lastInitial;
    int pencil_count = 0;
    int notebook_count = 0;
    int pencils;
    int notebooks;
    float pencil = 0.23;
    float notebook = 2.89;
    float lunchbox = 4.99;

    //first kid
    firstInitial = 'J';
    lastInitial = 'R';

    printf("How many pencils does %c.%c. need?:\n", firstInitial, lastInitial);
    scanf(" %d", &pencils);
    printf("And how many notebooks?:\n");
    scanf(" %d", &notebooks);
    pencil_count += pencils;
    notebook_count += notebooks;

    //second kid
    firstInitial = 'L';
    lastInitial = 'M';

    printf("How many pencils does %c.%c. need?:\n", firstInitial, lastInitial);
    scanf(" %d", &pencils);
    printf("And how many notebooks?:\n");
    scanf(" %d", &notebooks);
    pencil_count += pencils;
    notebook_count += notebooks;

    //second kid
    firstInitial = 'M';
    lastInitial = 'M';

    printf("How many pencils does %c.%c. need?:\n", firstInitial, lastInitial);
    scanf(" %d", &pencils);
    printf("And how many notebooks?:\n");
    scanf(" %d", &notebooks);
    pencil_count += pencils;
    notebook_count += notebooks;

    printf("So a total cost of %.2f$.", pencil_count*pencil+notebook_count*notebook+lunchbox*3);

    return 0;
}
