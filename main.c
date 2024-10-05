#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("Is the temperature in F or C ?: ");
    scanf(" %c",&unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("The temp is currently C\n");
        printf("Enter the Celsius :");
        scanf("%f",&temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temp in Fahrenheit is: %.1f",temp);

    }
    else if(unit == 'F'){
        printf("The temp is currently F\n");
        printf("Enter the Fahrenheit :");
        scanf("%f",&temp);
        temp = (temp - 32) * 5 / 9;
        printf("The temp in Celsius is: %.1f",temp);
    }
    else{
        printf("Please enter valid unit --> F or C ");
    }

    return 0;
}
