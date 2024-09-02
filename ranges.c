#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

main(){
    signed int shortex = pow(2, 8*sizeof(int));
    printf("Variable\tSigned min\tSigned max\tunsigned min\tunsigned max\n");
    printf("Char\t\t\b-128\t\t127\t\t0\t\t255\n");
    printf("Int\t\t\b-%ld\t%lu\t%d\t\t%lu\n", UINT_MAX/2, (UINT_MAX/2)-1, 0, UINT_MAX);
    printf("Short\t\t\b-%ld\t\t%lu\t\t%d\t\t%lu\n", USHRT_MAX/2, (USHRT_MAX/2)-1, 0, USHRT_MAX);
    printf("\nLong:\nsigned min: -%ld\nsigned max: %lu\nunsigned min: %d\nunsigned: %lu\n", ULONG_MAX/2, (ULONG_MAX/2)-1, 0, ULONG_MAX);
}
