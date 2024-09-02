#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000
#define SCREEN 80

int gline(char line[], int maxline);
//void copy(char to[], char from[]);

void main(){
    char line[MAXLINE];
    int len;
    while((len = gline(line, MAXLINE)) > 1)
    {
        int covered = 0;
        while((len - covered) > SCREEN){
            int i = covered;
            int space = covered + SCREEN;
            while(i < (covered + SCREEN)){
                if(line[i] == ' ' || line[i] == '\t'){
                    space = i;
                }
                i++;
            }
            for(int j = covered; j <= space; j++) putchar(line[j]);
            putchar('\n');
            covered = space;
        }
        while(line[covered] == ' ' || line[covered] == '\t') covered++;
        for(int j = covered; j <= len; j++) putchar(line[j]);
    }
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

