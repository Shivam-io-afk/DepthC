#include <stdio.h>
#include <conio.h>

// Increment and decrement
int task_1()
{
    int x, y;
    x = 6;

    y = x++; // post increment
    y = ++x; // pre increment

    printf("Values %d %d", x, y);
    return 0;
}

// use sizeof() operator

int main()
{
    int val;
    printf("%d %d %d %d",sizeof(int),sizeof(char),sizeof(float),sizeof(double));
    // Swapping Values Of two int.
    int x, y, z;
   /* printf("\nEnter Values - ");
    scanf("%d %d", &x, &y);
    z = x;
    x = y;
    y = z;

    printf("Swapped Values X = %d and Y = %d", x, y);
    return 0; */
}

// using conditinal operator
int task_3()
{
    int no;
    printf("Enter any number - ");
    scanf("%d", &no);

    if (no > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Non-positive");
    }

    no > 0 ? printf(" +ve ") : printf(" Non +ve");

    return 0;
}

// increment char constant value
int task_4()
{
    char A_cons = 'A';
    int integer = 1;
    printf("%d %d , ", sizeof(A_cons), sizeof(integer));

    // Const Change by incriment
    printf("%c -> ", A_cons);

    A_cons++;
    printf("%c", A_cons);

    return 0;
}


// printing last and first digut of an integer by / and % operator
int task_5()
{
    int val, res;
    printf("Enter Value - ");
    scanf("%d", &val);

    res = val % 10;
    printf("value %d ", res); // print Unit digit of the number

    res = val / 10;
    printf(", without last digit %d ", res); // print without last digit of the number

    return 0;
}


//swapping - 2 way two var.
int task_6()
{
    int a, b;
    printf("Enter values one at a time ");
    scanf("%d %d", &a, &b);

    printf("Swapped values - %d, %d ", a + b - a, b + a - b);

    char can;
    can = '+';
    printf("%d", can);

    return 0;
}

// Currency Converter 
int task_7()
{
    // { 1$ USD = 84.23 INR }
    float inr, usd;
    printf("Enter - ");
    scanf("%f", &inr);

    usd = inr / 84.23;
    printf("%.2f$", usd);
    return 0;
}


//input three digit number and sum of each digit 
int task_8()
{
    int x;

    printf("enter 3 digit number value");

    scanf("%d", &x);
    printf("Sum of each digits %d", x % 10 + x / 100 + x / 10 % 10); // Sum of Each digits
    printf(", Result, %d", x / 10 * 10);
    printf(", Shift Once Toward right in circular %d", x % 10 * 100 + x / 100 * 10 + x / 10 % 10); // ROtate digit towards right
}
