#include <stdio.h>

int rightrot(int x, int n){
    int temp1 = x << n;
    int temp2 = x >> n;
    int temp3 = 1;
    while(temp3 < x){
        temp3 = temp3<<1;
        temp3++;
    }
    temp1 = temp1 & temp3;
    temp1 += temp2;
    return temp1;
}

main(){
    int x;
    int n;
    printf("x\t");
    scanf("%d", &x);
    printf("n\t");
    scanf("%d", &n);

    x = rightrot(x, n);
    printf("%d\t%d", x, n);
}
