#include <stdio.h>

main()
{
    printf("Celsius  Fahrenheit | Celsius  Fahrenheit\n");
    for(float celsius = 300.0; celsius >= 100; celsius-=20)
    {
        printf("%7.0f%12.0f | %7.0f%12.0f\n", celsius, (celsius * 9.0/5.0) + 32, (celsius-200.0), ((celsius-200.0) * 9.0/5.0) + 32);
    }
    return 0;
}
