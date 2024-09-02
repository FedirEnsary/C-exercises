#include <stdio.h>
#include <string.h>

main()
{
    char name[] = "Frederick";
    char month[10] = "May";
    char city[24];
    char home[] = "orphanarium";
    char floor[24];

    strcpy(city, "Boulder");

    floor[0] = 'f';
    floor[1] = 'i';
    floor[2] = 'f';
    floor[3] = 't';
    floor[4] = 'h';
    floor[5] = '\0';

    printf("%s was found in %s and lives on the %s floor of the largest %s in %s.", name, month, floor, home, city);

    return 0;
}
