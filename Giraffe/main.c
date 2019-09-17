#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* basic data types */
    int age = 40;
    double gpa = 3.6;
    char grade = 'A';
    char phrase[] = "Giraffe Academy";

    /* printf() */
    printf("Hello World!\n");
    printf("%d", 500);
    printf("\nMy favorite number is %d", 499);
    printf("\nMy second favorite %s is %d", "number", 499);
    printf("\nMy third favorite %s is %f", "number", 499.5678);
    int favNum = 90;
    printf("\nMy favorite number is %d", favNum);
    /* %c = char */

    /* working with numbers */
    printf("\n");
    printf("%f", 8.9);
    printf("\n");
    printf("%f", 5.0 + 4.5);
    printf("\n");
    printf("%d", 5/4);
    printf("\n");
    printf("%f", 5/4); /* unexpected output */
    printf("\n");

    printf("%f", pow(2, 3)); /* needs to be a float; returns a float */
    printf("\n");
    printf("Sample text %f", sqrt(36));
    printf("\n");
    printf("%f", ceil(36.656));
    printf("\n");
    printf("%f", floor(36.656));
    printf("\n");

    /* comments */

    /*
    multi-line comment
    line 2
    line 3
    */


    /* constants */
    /* type of variable that can not be modified */

    int num = 5;
    printf("%d\n", num);
    num = 8;
    printf("%d", num);

    const int constInt = 5; /* won't compile attempts to change value */
    printf("%d\n", num);
//    num = 8;
//    printf("%d", num);

    /* user input */

    int age2; /* age was not reusable as a variable, since it it was declared a const earlier in the program */
    printf("Enter your age: ");
    scanf("%d", &age2); /* >&var< = pointer */
    printf("You are %d years old", age2);

    /* floats in scanf */
    double gpa2;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa2);
    printf("Your gpa is %f\n", gpa2);

    /*chars in scanf */
    char grade2;
    printf("Enter your grade: \n");
    scanf("%c \n", &grade2);
    printf("Your grade is %c \n", grade2); /* there is an issue here, and it may be related to how pointers work in C. This requires further research. */


    return 0;
}
