#include <stdio.h>

main(){
    int c = getchar();
    while(c != '\n'){
    putchar(c);
    c = getchar();
    }
}
