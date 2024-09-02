#include <stdio.h>
#define MAXLINE 1000

int gline(char line[], int maxline);
void copy(char to[], char from[]);

main(){
    int len;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while((len = gline(line, MAXLINE)) > 1)
    {
        if(len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) printf("The longest line was %d characters, \n%s", max , longest);
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
