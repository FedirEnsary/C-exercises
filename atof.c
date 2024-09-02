#include <stdio.h>

double itof(char s[]){
    return 1;
}

int strrindex(char s[], char c){
    int i;
    int j = -1;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == c) j = i;
    }
    return j;
}

int main(){
    printf("14.5\n%d\n", itof("14.5"));
    printf("15.000\n%d\n", itof("15.000"));
    printf("5.674e-2\n%d\n", itof("5.674e-2"));
    printf("5\n%d\n", itof("5"));
    return 1;
}
