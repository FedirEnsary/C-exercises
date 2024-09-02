#include <stdio.h>

main()
{
    int count, spaces, tabs, newlines;
        count = spaces = tabs = newlines = 0;
    char temp;
    while(count <= 100)
    {
        temp = getchar();
        count++;
        if (temp == ' ') spaces++;
        else if (temp == '\t') tabs++;
        else if (temp == '\n') newlines++;
    }
    printf("/n/n/nIn the past %d characters,\n%d were spaces,\n%d were tabs,\n%d were new lines.", count, spaces, tabs, newlines);
    return 0;
}
