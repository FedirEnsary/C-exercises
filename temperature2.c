#include <stdio.h>

main()
{
    float celsius, fahrenheit;
    int min, max, step;

    min = 0;
    max = 200;
    step = 20;
    celsius = min;

    printf("Celcius\tFahrenheit\n");
    while(celsius <= max){
        fahrenheit = (9.0/5.0) * (celsius) + 32.0;
        printf("%7.0f %10.0f\n", celsius, fahrenheit);
        celsius += step;
    }
    return 0;
}
