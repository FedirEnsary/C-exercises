#include <stdio.h>

main()
{
    int i = 1;
    int j;
    int limit;

    printf("Pick a number: \n");
    scanf(" %d", &limit);

    while(i < limit)
    {
        j = 0;
        while(j<i)
        {
            ((i+j)%2 == 1) || j==0 || j==i-1 ? printf("\[\]") : printf("  ");
            j++;
        }
        printf("\n");
        i++;
    }
    while(i > 0)
    {
        j = 0;
        while(j<i)
        {
            ((i+j)%2 == 1) || j==0 || j==i-1 ? printf("\[\]") : printf("  ");
            j++;
        }
        printf("\n");
        i--;
    }

}
