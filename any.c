#include <stdio.h>
#include <string.h>

int any(char one[], char two[]){
    int i = 0;
    while(one[i] != '\0'){
        if(NULL == strchr(two, one[i])){
            i++;
        }
        else{
            return i;
        }
    }
    return -1;
}

main(){
    char c;
    char one[256];
    char two[256];
    int location;
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

    location = any(one, two);

    printf("%d", location);
    return 0;
}
