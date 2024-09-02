#include <stdio.h>

main(){
    int c = getchar();
    int quotes = 0;
    int quote = 0;
    int bracket = 0;
    int curlyBracket = 0;
    int elipses = 0;
    while(c != EOF){
        if(bracket < 0 || curlyBracket < 0 || elipses < 0){
            printf("Someones brackets arent balanced.");
            break;
        }
        else if(quotes == 0 && quote == 0){
            switch(c){
            case '{':
                curlyBracket++;
                break;
            case '}':
                curlyBracket--;
                break;
            case '[':
                bracket++;
                break;
            case ']':
                bracket--;
                break;
            case '(':
                elipses++;
                break;
            case ')':
                elipses--;
                break;
            case '"':
                quotes++;
                break;
            case '\'':
                quotes++;
                break;
            default:
                break;
            }
        }
        else if(quote > 0){
            if (c == '\'' && (quote == 1)){
                printf("you have an empty char.");
                break;
            }
            if (c == '\'' && (quote == 3 || quote > 5)){
                printf("Your char is funky.");
                break;
            }
            else if (c == '\'' && (quote == 2 || quote == 5)){
                quote = 0;
            }
            else if (c == '\\'){
                if(quote == 1){
                    quote = 4;
                }
                else if(quote == 4){
                    quote = 5;
                }
                else{
                printf("Something is wrong with your escape sequence.");
                break;
                }
            }
            else{
                quote++;
            }

        }

        if(quotes == 1 && c == '"'){
            quotes == 0;
        }
        c = getchar();

    }
    if(bracket > 0 || curlyBracket > 0 || elipses > 0){
        printf("Someones brackets arent balanced.");
    }
    if(quotes != 0){
        printf("Someones quotes arent balanced.");
    }
}
