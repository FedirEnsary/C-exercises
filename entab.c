#include <stdio.h>

void main(){

printf("Feel free to start typing, press enter when done:\n");
    int c;
    int spaces = 0;
    int pos = 0;
    c = getchar();
    while (c != EOF){
        if (c == ' '){
            spaces++;
        }
        else if(spaces != 0){
            while(spaces >= (8 - pos%8)){
                putchar('\t');
                spaces -= 8 - pos%8;
                pos += 8 - pos%8;
            }
            while(spaces>0){
                putchar(' ');
                spaces--;
                pos++;
            }
            putchar(c);
            pos++;
        }
        else{
            putchar(c);
            pos++;
        }
        if(c == '\n') pos = spaces = 0;
        c = getchar();
    }
}
