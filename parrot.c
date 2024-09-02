#include <stdio.h>

main()
{
    printf("Feel free to start typing, press enter when done:\n");
    int c;

    c = getchar();
    while (c != EOF){
        if (c == 9){
            putchar(92);
            putchar(116);
        }
        else if(c == 8){
            putchar(92);
            putchar(98);
        }
        if (c == 92){
            putchar(92);
            putchar(92);
        }
        else{
            putchar(c);
        }
        c = getchar();
    }
    return 0;
}
