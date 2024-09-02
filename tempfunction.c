#include <stdio.h>

void toCelsius(i){
    printf("%7d %10.0f\n", i, ((i*1.00) * 9.0/5.0) + 32);
}

main(){
    printf("Celsius Fahrenheit\n");
    for(int i = -30; i < 200; i+= 10){
        toCelsius(i);
    }
}
