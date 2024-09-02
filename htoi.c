#include <stdio.h>
#include <ctype.h>
int output = 0;

int htoi(char hex[]){
    int neg = 0;
    printf("%s", hex);
    int start = 0;
    int val = 0;
    if(hex[0] == '-'){
        neg = 1;
        start++;
        if(hex[1] == '0' && tolower(hex[2]) == 'x') start =+ 2;
    }
    else if(hex[0] == '0' && tolower(hex[1]) == 'x') start =+ 2;
    for(int i = 0; hex[i+start] != '\0'; i++){
        val *= 16;
        switch(tolower(hex[i+start])){
            case '0':
                val +=0;
                break;
            case '1':
                val +=1;
                break;
            case '2':
                val +=2;
                break;
            case '3':
                val +=3;
                break;
            case '4':
                val +=4;
                break;
            case '5':
                val +=5;
                break;
            case '6':
                val +=6;
                break;
            case '7':
                val +=7;
                break;
            case '8':
                val +=8;
                break;
            case '9':
                val +=9;
                break;
            case 'a':
                val +=10;
                break;
            case 'b':
                val +=11;
                break;
            case 'c':
                val +=12;
                break;
            case 'd':
                val +=13;
                break;
            case 'e':
                val +=14;
                break;
            case 'f':
                val +=15;
                break;
            defualt:
                return 1;
        }
    }
    if(neg) val = -1 * val;
    output = 1;
    return val;
}

main(){
    char hex[100];
    char c = getchar();
    int result;
    do{
        int i = 0;
        while(c != '\n' && c != EOF && i<100){
            hex[i] = c;
            i++;
            c = getchar();
        }
        hex[i] = '\0';
        result = htoi(hex);
            printf("\n%d", result);
    }while(!output);
}
