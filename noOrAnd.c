#include <stdio.h>

main(){
    char c;
    int lim = 20;
    char s[lim];
    int i;
    for(i=0; (i<lim-1) + ((c=getchar())!=EOF) + (c!='\n') == 3; ++i) s[i+1] = c;
    s[i+1] = '\0';
    printf("\n%s", s);
}
