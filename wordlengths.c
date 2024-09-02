#include <stdio.h>

main(){
    int length = -1;
    int c;
    while(c != EOF){
        if(c != ' ' && c != '\n'){
            length++;
        }
        else{
            printf("%d ", length);
            length = 0;
            if(c == '\n')
            {
            putchar('\n');
            }
        }
        c = getchar();
    }
}
