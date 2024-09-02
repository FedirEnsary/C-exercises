#include <stdio.h>

void expand(char s1[], char s2[]){
    int i = 1;
    int j = 1;
    s1[0] = s2[0];
    while(s2[i] != '\0' && j != 1048){
        if(s2[i] == '-' && s2[i+1] != '\0' && s2[i-1] < s2[i+1]){
            i++;
            for(int k = s2[i-2] + 1; k < s2[i]; k++){
                s1[j++] = k;
            }
        }
        else s1[j++] = s2[i++];
    }
    s1[j++] = '\0';
}

int main(){
    char string[256];
    char expandedstring[1048];
    char c;
    int i = 0;
    int enter = 0;
        while((c = getchar()) != '\0' && i != 256){
        string[i] = c;
        i++;
        if(c == '\n') enter++;
        else enter = 0;
        if(enter == 2) break;
    }
    string[i] = '\0';
    expand(expandedstring, string);
    printf("%s\n", expandedstring);
    return 1;
}
