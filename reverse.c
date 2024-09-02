#include <stdio.h>
#define MAXLINE 1000

int gline(char line[], int maxline);
void copy(char to[], char from[]);

main(){
    int len;
    char line[MAXLINE];
    char temp[MAXLINE];
    int count = 0;
    char * lines[100];

    while((len = gline(line, MAXLINE)) > 1)
    {
        lines[count] = malloc(sizeof(line));
        reverse(line, temp);
        copy(lines[count], line);
        count++;
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
    to[i] == '\0';
}

void reverse(char line[], char temp[])
{
    copy(temp, line);
    int i = 0;
    while(line[i] != '\0') i++;
    for(int j = 0; j < i; j++)
    {
    line[j] = temp[i-j-2];
    }
}
