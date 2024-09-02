#include <stdio.h>

void escape(char s[], char t[]){
    int i = 0;
    int j = 0;
    while(t[i] != '\0'){
        switch(t[i]){
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        case '\a':
            s[j++] = '\\';
            s[j++] = 'a';
            break;
        case '\b':
            s[j++] = '\\';
            s[j++] = 'b';
            break;
        case '\\':
            s[j++] = '\\';
            s[j++] = '\\';
            break;
        case '\'':
            s[j++] = '\\';
            s[j++] = '\'';
            break;
        case '\"':
            s[j++] = '\\';
            s[j++] = '\"';
            break;
        default:
            s[j++] = t[i];
            break;
        }
        i++;
    }
    s[j] = '\0';
}

void unescape(char s[], char t[]){
    int i = 0;
    int j = 0;
    while(t[i] != '\0'){
        if(t[i] == '\\'){
            switch(t[i+1]){
                case '\\':
                    s[j++] = '\\';
                    break;
                case 't':
                    s[j++] = '\t';
                    break;
                case 'a':
                    s[j++] = '\a';
                    break;
                case 'b':
                    s[j++] = '\b';
                    break;
                case 'n':
                    s[j++] = '\n';
                    break;
                case '\'':
                    s[j++] = '\'';
                    break;
                case '\"':
                    s[j++] = '\"';
                    break;
                case '\0':
                    s[j++] = '\\';
                    break;
                default:
                    s[j++] = t[i];
                    break;
            }
            i+= 2;
        }
        else s[j++] = t[i++];
    }
    s[j] = '\0';
}

int main(){
    char string[256];
    char escapedstring[512];
    char unescapedstring[256];
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
    escape(escapedstring, string);
    printf("%s\n", escapedstring);
    unescape(unescapedstring, escapedstring);
    printf("%s", unescapedstring);
    return 1;
}
