#include <stdio.h>

main(){
    int characters[95];
    for(int i = 0; i < 95; i++) characters[i] = 0;
    int c = getchar();
    while(c != EOF){
        characters[c-32]++;
        if(c == '\n') break;
        c = getchar();
    }
    int offset = 0;
    for(int i = 0; i < 95; i++){
    (characters[i] > 0 ? printf("%c: %4d  ", (i+32), characters[i]) : offset++);
    if((i-offset)%3 == 2 && characters[i] > 0) printf("\n");
    }
}
