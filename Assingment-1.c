#include <stdio.h>
#include <conio.h>

int ques_1()
{
    char a, b;

    a = 'n';
    b = 'r';
     printf("\\%c \\%c", a, b);
    printf("\\r \\n", a, b);
    // printf("%c",a);

    return 0;
}

int ques_2()
{
    char a;
    a = '"';
    // printf("%cTeacher's Day%c\t 'Teacher's Day'",a,a);
    printf("\"Welcome\"\n"); // By Escape Sequence
    printf("\'World\'\n");     // By Escape Sequence

    printf("\'Printing this using Escapes sequence\'");
    return 0;
}

int ques_3()
{
    int a;

    printf("Enter the Number you want sqaure of - ");
    scanf("%d", &a);
    printf("The square is - %d", a * a);

    return 0;
}

int ques_4()
{
    int C, D;

    printf("Enter the Number one at time - ");
    scanf("%d", &C);
    scanf("%d", &D);
    printf("Result is ,- %d", C + D);

    return 0;
}

int ques_5()
{
    int F, G;

    printf("Enter the Number one at time - ");
    scanf("%d", &F);
    scanf("%d", &G);
    printf("Area of rectangle is - %d", F * G);

    return 0;
}

int ques_6()
{
    float Area;
    int R;

    printf("Enter Radius - ");
    scanf("%d", &R);
    Area = 3.14 * (R * R);
    printf("Area of circle is %.2f having the radius %d", Area, R);

    return 0;
}

int ques_7()
{
    float a, b, c, Avg, SI;
    // a - principel, b-rate, c-time
    printf("Enter Your three Number one at a time -");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    Avg = (a + b + c) / 3;
    SI = (a * b * c) / 100;

    printf("Avg of Given Numbers is %0.2f\n - ", Avg);
    printf("SI is %.4f And total amount is %f ", SI, a + SI);

    return 0;
}

int ques_8()
{
    int radius;
    float result;
    printf("Enter radius -");
    scanf("%d", &radius);
    result = 2 * 3.14 * radius;

    printf("Circumradius is %.2f -", result);
    return 0;
}

int ques_9()
{
    char entr;
    int asc;

    printf("Enter a Character - ");
    scanf("%c", &entr);
    asc = entr;
    printf("Here is the ASC-II of %c is %d", entr, asc);

    return 0;
}


int ques_10()
{
    char A, B, C;
    int a, b, c;

    printf("Enter A character one at a time - ");
    // scanf("%c %c %c",&A,&B,&C);
    a = A;
    b = B;
    c = C;

    // printf("Result of %C is %d, %c is %d,%c is %d",A,a,B,b,C,c);

    // Take ASCII from user and print there character

    char val;

    printf("Enter A character - ");
    scanf("%c", &val);

    printf("%d",val);


    return 0;
}



// swapping two var. inputs without using third variable (I)
int ques_11()
{
    int a, b;
    printf("Enter value one at a time - ");
    scanf("%d %d", &a, &b);

    // printf("Swapped values are %d,%d\t", a * b / a, b * a / b);

    // Swapped without arithmetic operators by unsing bitwise operators
    printf("Swapped Result is %d,%d", a ^ (a ^ b), b ^ (a ^ b));   
}


