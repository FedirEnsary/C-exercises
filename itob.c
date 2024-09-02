#include <stdio.h>
#include <string.h>


void itob(int n, char s[], int b){
    int i = 0;
    int sign;
    if((sign = n) < 0) n = -n;
    char s[sizeof(s)];
    do{
        if(n%b < 10){
            s[i++] = n%b + '0';
        }
        else{
            s[i++] = n%b + 'A';
        }
    } while((n/= b) > 0);
    if(sign < 0) s[i++] = '-';
    s[i] = '\0';
    for(int j = 0; j < i; j++){
        rs[j] = s[i-j];
    }
    rs[i] = '\0';
    s = rs;
}

int main(){
    int n;
    char s[sizeof(int)*sizeof(char)];
    int b;
    printf("The integer: ");
    scanf(" %d", &n);
    printf("The base: ");
    scanf(" %d", &b);
    if (b > 36) printf("that base is too high.");
    else{
    itob(n, s, b);
    printf("%s", s);
    }
    return 1;
}
