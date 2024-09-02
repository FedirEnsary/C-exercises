#include <stdio.h>
#define MAXLINE 1000

int gline(char line[], int maxline);
void copy(char to[], char from[]);

main(){
    int len;
    int max = 0;
    int count = 0;
    char line[MAXLINE];
    char * lines[100];

    while((len = gline(line, MAXLINE)) > 1)
    {
        if(len > 80)
        {
            max = len;
            lines[count] = malloc(sizeof(line));
            copy(lines[count], line);
            count++;
        }
    }
    if (count > 0) {
        printf("%d lines were longer than 80 characters, they were as follows:\n", count);
        for(int i = 0; i <count; i++){
        printf("%s", lines[i]);
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
