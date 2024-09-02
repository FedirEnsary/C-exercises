#include <stdio.h>

double itof(char s[]){
    double total = 0.00;
    int index = 0;
    int negative = 0;
    //check if value is negative
    if(s[index] == '-'){
        negative++;
        index++;
    }
    //value before decimal
    while(s[index] >= '0' && s[index] <= '9'){
        total *= 10;
        total += s[index] - '0';
        index++;
    }
    //check for decimal
    if(s[index] == '.'){
        int decimal = 10;
        index++;

        //value after decimal
        while(s[index] >= '0' && s[index] <= '9'){
            total += (double)(s[index] - '0') / decimal;
            decimal *= 10;
            index++;
        }
    }
    //check for exponent
    if(s[index] == 'e' || s[index] == 'E'){
        index++;
        int expnegative;
        //check if exponent is negative
        if(s[index] == '-'){
            expnegative = 1;
            index++;
        }
        //value of exponent
        int exptotal = 0;
        while(s[index] >= '0' && s[index] <= '9'){
            exptotal *= 10;
            exptotal += s[index] - '0';
            index++;
        }
        //applying exponent
        if(expnegative){
            for(int i = 0; i < exptotal; i++){
                total /= 10;
            }
        }
        else{
            for(int i = 0; i < exptotal; i++){
                total *= 10;
            }
        }
    }
    //applying negative
    if(negative) total *= -1;
    return total;
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
    printf("14.5484\n%f\n", itof("14.5484"));
    printf("15.000\n%f\n", itof("15.000"));
    printf("5.674e-2\n%f\n", itof("5.674e-2"));
    printf("8.344e7\n%f\n", itof("8.344e7"));
    printf("-5\n%f\n", itof("-5"));
    return 1;
}
