#include <stdio.h>

int main(){
    char c;
    int enter = 0;
    while((c = getchar()) != '\0'){
        (c >= 'A' && c <= 'Z') ? putchar(c + 32): putchar(c);
        if(c == '\n') enter++;
        else enter = 0;
        if(enter == 2) break;
    }
    return 1;
}
