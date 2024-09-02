#include <stdio.h>

int invert(int x, int p, int n){
    int temp1 = x + 0;
    for(int i = 0; i < n; i++){
        temp1 -= 1 << (p-i);
    }

    int temp2 = ~x;
    int temp3 = 0;
    for(int i = 0; i < p+1; i++){
        if(i < p && i >= p-n){
            temp3 += 2<<i;
        }
    }
    temp2 = temp2 & temp3;
    temp1 += temp2;
    return temp1;
}

main(){
    int x;
    int p;
    int n;
    printf("x\t");
    scanf("%d", &x);
    printf("p\t");
    scanf("%d", &p);
    printf("n\t");
    scanf("%d", &n);

    x = invert(x, p, n);
    printf("%d\t%d\t%d", x, p, n);
}
