#include <stdio.h>
#include <string.h>

void squeeze(char one[], char two[]){
    int i = 0;
    int j = 0;
    while(one[i] != '\0'){
        if(NULL != strchr(two, one[i])){
            i++;
        }
        else{
            one[j] = one[i];
            i++;
            j++;
        }
    }
    one[j] = '\0';
}

main(){
    char c;
    char one[256];
    char two[256];
    int i = 0;
    while((c = getchar()) != '\n' && i != 256){
        one[i] = c;
        i++;
    }
    one[i] = '\0';
    i = 0;
    while((c = getchar()) != '\n' && i != 256){
        two[i] = c;
        i++;
    }
    two[i] = '\0';

    squeeze(one, two);

    printf("%s", one);
    return 0;
}
