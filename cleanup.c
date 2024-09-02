#include <stdio.h>
#define MAXLINE 1000

int gline(char line[], int maxline);
void copy(char to[], char from[]);
int clean(char line[]);

main(){
    int len;
    char line[MAXLINE];
    int count = 0;
    char * lines[100];

    while((len = gline(line, MAXLINE)) > 1)
    {
        if(clean(line)){
            lines[count] = malloc(sizeof(line));
            copy(lines[count], line);
            if (lines[count][0] != '\0') count++;
        }
    }
    if (count > 0) {
        for(int i = 0; i <count; i++){
        printf("%s\n", lines[i]);
        }
    }
    return 0;
}

int gline(char s[], int lim)
{
    int c, i;

    for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n'){
    s[i] =c;
    ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i=0;
    while((to[i] = from[i]) != '\0')
        ++i;
}

int clean(char line[]){
    int i = 0;
    while(line[i] != '\0') i++;

    for (i = i-1; i >= 0; i--){
        if(line[i] == ' ' || line[i] == '\t' || line[i] == '\n'){
            line[i] = '\0';
        }
        else break;
        }
    if (i == 0) return 0;
    else return 1;
}
