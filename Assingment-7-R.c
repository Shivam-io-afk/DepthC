#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Counting digits
int task_22()
{
    int i, r = 0, count;
    printf("\nEnter a N value - ");
    scanf("%d", &count);

    while (count)
    {
        count = count / 10;
        r++;
    }
    printf("%d", r);

    return 0;
}

// find weather given number is prime or not
int task_23()
{
    int a, value;
    printf("Enter number - ");
    scanf("%d", &value);

    for (a = 2; a <= value - 1; a++)
        if (value % a == 0)
            break;

    if (a == value)
        printf("Prime Number");
    else
        printf("Not prime");

    return 0;
}

// Find LCM of two given numbers -
int task_24()
{
    int a, b, i = 2, chkpnt = 0, val = 1;
    printf("Enter two Num's - ");
    scanf("%d %d", &a, &b);

    /* for (i = a > b ? a : b; i <= a*b; i++)
     {
         if (i % a == 0 && i % b == 0)
         {
             printf("LCM is %d", i);
             break;
         }

     } */

    while (a > 1 || b > 1)
    {
        if (a % i == 0)
        {
            a /= i;
            chkpnt = 1;
        }
        if (b % i == 0)
        {
            b /= i;
            chkpnt = 1;
        }
        if (chkpnt == 1)
        {
            val *= i;
            chkpnt = 0;
        }
        else
        {
            i++;
        }
    }

    printf("%d", val);

    return 0;
}

// find co=prime
int task_25()
{
    int i, num;
    printf("Enter - ");
    scanf("%d", &num);

    for (i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }

    if (i == num)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Co-Prime Number");
    }

    return 0;
}

// Based on Fibonacci series
int task_26()
{
    int prv_1 = -1, prv_2 = 1, res, i, n;

    printf("Enter Nth term - ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        res = prv_1 + prv_2;

        prv_1 = prv_2;
        prv_2 = res;

        printf("%d, ", res);
    }
    printf("\n");
    printf("%dth term is - %d", n, res);

    return 0;
}

// Check weather given number is in the fibonacci series or not
int task_27()
{
    int a = -1, b = 1, c, i, n;
    printf("Enter - ");
    scanf("%d", &n);

    for (i = 0;; i++)
    {
        c = a + b;

        a = b;
        b = c;

        if (c == n)
        {
            printf("Yes it is %d", c);
            break;
        }

        else if (c > n)
        {
            printf("No it is not !");
            break;
        }
    }

    return 0;
}

// Calculate HCF
int task_28()
{
    int valu_1, valu_2, i;
    printf("Enter Two num's - ");
    scanf("%d %d", &valu_1, &valu_2);

    for (i = valu_1 + valu_2; i >= 1; i--)
    {
        if (valu_1 % i == 0 && valu_2 % i == 0)
        {
            printf("HCF is %d", i);
            break;
        }
    }
}












// Prime Number from 1 to 100              < ------------------------------- IMPORTANT QUESTINOS from here ------------------------------- >
int task_29()
{
    int i, x, l = 2, u = 100;

    for (x = l; x <= u; x++)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
                break;
        }
        if (i == x)
        {
            printf("%d ", x);
        }
    }

    /*   for (i = 1; i <= 16; i++)
    {

        if ((6 * i - 1) % 5 == 0 && i > 1)
        {
            printf("%d, ", 6 * i + 1);
        }
        else if ((6 * i + 1) % 5 == 0)
        {
            printf("%d, ", 6 * i - 1);
        }
        else
        {
            printf("%d, %d, ", 6 * i - 1, 6 * i + 1);
        }
    } */

    return 0;
}




int task_30()
{
    int i, x, start, end;

    printf("Enter Two numbers - ");
    scanf("%d %d", &start, &end);

    for (x = start; x <= end; x++)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
                break;
        }
        if (i == x)
        {
            printf("%d ", x);
        }
    }
}



// Print Next Prime Number of a given Number -->
int task_31()
{
    int i, x, start;

    printf("Enter Two numbers - ");
    scanf("%d", &start);

    for (x = start + 1;; x++)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
                exit(0);
        }
        if (i == x)
        {
            printf("%d ", x);
            exit(0);
        }
    }
}




/* { Armstrong Number } -->
  X is a number with n digits and digits in X are D1,D2,D3,.....,Dn
  if (D1)^n,(D2)^n,(D3)^n,.....,(DN)^n = X
  then it is armstrong Number
*/

int task_32()
{
    int x, y, n = 0, sum = 0, d, p, i;

    printf("Enter a Number - ");
    scanf("%d", &x);
    y = x;

    while (y)
    {
        y = y / 10;
        n++;
    }
    for (y = x; y; y = y / 10)
    {
        d = y % 10;
        for (p = 1, i = 1; i <= n; i++)
        {
            p = p * d;
            sum = sum + p;
        }
    }
    if (sum == x)
        printf("%d - is Armstrong Number", x);
    else
        printf("%d - is not Armstrong Number", x);



    return 0;
}



// Print Armstrong Number From 1 to 1000

int task_33()
{

    int x, y, n = 0, sum = 0, d, p, i;

    for (x = 1; x <= 1000; x++)
    {
        y = x;
        n = 0;

        while (y)
        {
            y = y / 10;
            n++;
        }
        for (y = x, sum = 0; y; y = y / 10)
        {
            d = y % 10;
            for (p = 1, i = 1; i <= n; i++)
            {
                p = p * d;
                sum = sum + p;
            }
        }

        if (sum == x)
            printf("%d \t", x);
    }


return 0;

}



