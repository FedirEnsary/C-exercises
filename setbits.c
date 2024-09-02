#include <stdio.h>

int setbits(int x, int p, int n, int y){
    for(int i = 0; i < n; i++){
        x -= 1 << (p-i);
    }
    int max = 1;
    for(int i = 0; i < p-n; i++){
        max += 2<<i;
    }
    while(y > max){
        y = y >> 1;
    }
    x += y;
    return x;
}

main(){
    int x;
    int p;
    int n;
    int y;
    printf("x\t");
    scanf("%d", &x);
    printf("p\t");
    scanf("%d", &p);
    printf("n\t");
    scanf("%d", &n);
    printf("y\t");
    scanf("%d", &y);

    x = setbits(x, p, n, y);
    printf("%d\t%d\t%d\t%d", x, p, n, y);
}
