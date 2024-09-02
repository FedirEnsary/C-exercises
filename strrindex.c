#include <stdio.h>

int strrindex(char s[], char c){
    int i;
    int j = -1;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == c) j = i;
    }
    return j;
}

int main(){
    char str[100] = "No officer, I have not seen any of the children that dissapeared last week. Why do you ask?\0";
    char c;
    printf("%s", str);
    printf("\nWhat character's rightmost index would you like to find in the string above?\n");
    scanf (" %c", &c);
    printf("%d", strrindex(str, c));
    return 0;
}
