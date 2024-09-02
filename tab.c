#include <stdio.h>

/*int gline(char line[], int maxline);
void copy(char to[], char from[]);

void main(){
    int len;
    char line[MAXLINE];
    char temp[MAXLINE];
    int count = 0;
    char * lines[100];

    while((len = gline(line, MAXLINE)) > 1)
    {
        lines[count] = malloc(sizeof(line));
        copy(lines[count], line);
        count++;
    }
    if (count > 0) {
        for(int i = 0; i <count; i++){
        int j = 0;
        int spaceoffset = 0;
            while(lines[i][j] != '\0')
            {
                if(lines[i][j] == '\t'){
                for(int k = 0; (j+spaceoffset)%8 != 0; k++){
                    putchar(' ');
                    spaceoffset++;
                }
                }
                else putchar(lines[i][j]);
                j++;
            }
        }
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

void copy(char to[], char from[])
{
    int i;

    i=0;
    while((to[i] = from[i]) != '\0')
        ++i;
    to[i] == '\0';
}*/

void main(){

printf("Feel free to start typing, press enter when done:\n");
    int c;
    int pos = 0;
    c = getchar();
    while (c != EOF){
        if (c == '\t'){
            putchar(' ');
            pos++;
            while((pos % 8) != 0){
            putchar(' ');
            pos++;
            }
        }
        else{
            putchar(c);
            pos++;
        }
        if(c == '\n') pos = 0;
        c = getchar();
    }
}
