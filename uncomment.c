#include <stdio.h>

main(){
    int c = getchar();
    int longComment = 0;
    int shortComment = 0;
    int count = 1;
    while(c != EOF){
        if(count <= 0){
            putchar('\n');
        }
        if(c == '*'){
            c = getchar();
            count++;
            if(c == '/'){
                longComment = 0;
                c = getchar();
                count++;
                }
            else{
                if(!longComment && !shortComment){
                    putchar('*');
                    putchar(c);
                    count-=2;
                }
                c = getchar();
                count++;
            }
        }
        else if(c == '/'){
            c = getchar();
            count++;
            if(c == '/'){
                shortComment = 1;
                c = getchar();
                count++;
            }
            else if(c == '*'){
                longComment = 1;
                c = getchar();
                count++;
            }
            else{
                if(!longComment && !shortComment){
                    putchar('/');
                    putchar(c);
                    count-=2;
                }
                c = getchar();
                count++;
            }
        }
        else if(c == '\n'){
            shortComment = 0;
            if(!longComment){
            putchar(c);
            count--;
            }
            c = getchar();
            count++;
        }
        else{
            if(!shortComment && !longComment){
                putchar(c);
                count--;
            }
            c = getchar();
            count++;
        }

    }
}
