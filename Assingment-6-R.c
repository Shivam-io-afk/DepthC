#include <stdio.h>
#include <conio.h>

int task_9()
{
    // Passing marks from 33 (5 Subjects)
    int p, q, x, y, z, total, minmarks;

    printf("Enter marks of 5 sunjects - ");
    scanf("%d %d %d %d %d", &p, &q, &x, &y, &z);

    if (x >= 33 && y >= 33 && z >= 33 && p >= 33 && q >= 33)
    {
        printf("Passed");
    }
    else
    {
        printf("Candidate is failed !");
    }
}

// Check enter input is what char,number,special character
int task_10()
{
    char a;

    printf("Enter here - ");
    scanf("%c", &a);

    if (a >= 65 && a <= 90)
    {
        printf("Char is in Uppercase");
    }
    else if (a >= 97 && a <= 122)
    {
        printf("Char is in Lowercase");
    }
    else if (a >= 48 && a <= 57)
    {
        printf("You have Entered Number");
    }
    else
    {
        printf("You have Entered Special Character");
    }

    return 0;
}

int task_11()
{
    int num;
    printf("Enter a number - ");
    scanf("%d", &num);

    if (num % 6 == 0)
    {
        printf("Number is div. by 2 and 3");
    }
    else
    {
        printf("Given number is not divisible by 2 and 3");
    }

    printf("\t");

    if (num % 7 == 0)
    {
        printf("Number is div. by 7");
    }
    else
    {
        printf("Number is div. by 3");
    }

    return 0;
}

// find that shape is triangle or not by 3 given sides
int task_12()
{
    int x, y, z;
    printf("Enter three sides of a triangle - ");
    scanf("%d %d %d", &x, &y, &z);

    printf(x + y > z && y + z > z && z + x > y ? "Yes it is Triangle" : "No it is not !");

    return 0;
}

/* Ask user for even number if it is then show YOU WIN and stop game immediately
 otherwise give 3 chance if still not given right answer then show GAME OVER */

int task_13()
{
    int evnnum, j = 0;

    while (j < 3)
    {
        printf("Please enter a even number - ");
        scanf("%d", &evnnum);
        if (evnnum % 2 == 0)
        {
            printf("\nYou win !");
            break;
        }
        else
        {
            j++;
            printf(j < 3 ? "\ntry again ! " : "\nGAME OVER !");
        }
    }

    return 0;
}

int main()
{
    int month;

    printf("Enter Digit between 1 to 4 - ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("Jan which is 31 Daya");
        break;
    case 2:
        printf("Feb which is 28/29 Days (if leap year)");
        break;

    case 3:
        printf("March - 31 Days");
        break;

    case 4:
        printf("Apr - 30 Days");
        break;

    default:
        printf("Enter a validf number");
        break;
    }
}

/*user can give input and add number any number of time but if he enters 0 as input
 then the addition stop and show the final addition result*/
int task_14()
{
    int old_Value = 0, new_value = 0;

    while (0 != 1)
    {
        printf("Enter a number  - ");
        scanf("%d", &new_value);

        if (new_value != 0)
        {
            old_Value = old_Value + new_value;
            // printf("Added Result - %d\n",old_Value);
        }
        else
        {
            printf("\nTotal Sum is - %d", old_Value);
            break;
        }
    }

    return 0;
}

// printing by using loop
int task_15()
{
    int i, condition, odd_even;

    printf("Enter '0' or '1' to print first 10 odd or even digit numbers - ");
    scanf("%d", &odd_even);
    printf("'0' for forward '1' for backwad - ");
    scanf("%d", &condition);

    if (odd_even == 0)
    {
        if (condition == 0)
        {
            for (i = 0; i < 20; i += 2)
            {
                printf("%d\n", i);
            }
        }
        else
        {
            for (i = 20; i >= 0; i -= 2)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        if (condition == 0)
        {
            for (i = 0; i <= 19; i++)
            {
                printf("%d\n", i += 1);
            }
        }
        else
        {
            for (i = 20; i >= 1; i--)
            {
                printf("%d\n", i -= 1);
            }
        }
    }

    return 0;
}

// same as task_22;
int task_16()
{
    int k = 0, j;

    while (k <= 10)
    {
        break;
        printf("%d,", k * k);
        printf("%d\t ", k * k * k);

        k++;
    }

    printf("\n\n");

    printf("Table from 1 to 20 -> \n");
    for (j = 1; j <= 20; j++)
    {
        printf("\n");
        for (k = 1; k <= 20; k++)
        {
            printf("\t %d ", j * k);
        }
    }
    return 0;
}

// Sum of value
int task_17()
{
    int k, r = 0, uptovalue;
    printf("Enter the total sum of a N numbers - ");
    scanf("%d", &uptovalue);
    uptovalue += 1;

    for (k = 1; k <= uptovalue; k++)
    {
        if (k == uptovalue)
        {
            printf("Sum is - %d", r);
            break;
        }
        else
        {
            r += k; // sum of first n natural number
            continue;
        }
    }
    return 0;
}

// Printing sum of N even Natural Number
int task_18()
{
    int i, r = 0, count;
    printf("Enter the total sum of a N even numbers - ");
    scanf("%d", &count);

    for (i = 0; i <= count; i++)
    {
        if (i == count)
        {
            printf("%d", r);
            break;
        }
        else
        {
            r = r + i * 2;
        }
    }

    return 0;
}

// Printing factorial of given number
int task_19()
{
    int i, r = 1, count;
    printf("Enter the total sum of a N even numbers - ");
    scanf("%d", &count);
    count += 1;

    for (i = 1; i <= count; i++)
    {
        if (i == count)
        {
            printf("%d", r);
        }
        else
        {
            r *= i;
        }
    }

    return 0;
}

// the sum of a square or cube of first N Natural numbers
int task_20()
{
    int i, r, p = 0, count;
    printf("the sum of a square or cube of first N Natural numbers - ");
    printf("\nEnter a N value - ");
    scanf("%d", &count);
    count += 1;

    for (i = 1; i <= count; i++)
    {
        if (i == count)
        {
            printf("Sum of first square of N Natural Number - %d", r);
            printf("\n\n");
            printf("Sum of first cubes of N Natural Number - %d", p);
        }
        else
        {
            r += i * i;
            p += i * i * i;
        }
    }

    return 0;
}

// Sum of odd no's
int task_21()
{
    int i, r, count;
    printf("the sum of a square or cube of first N Natural numbers - ");
    printf("\nEnter a N value - ");
    scanf("%d", &count);

    for (i = 1, r = 0; i <= count; i++)
    {
        r = r + 2 * i - 1;
    }
    printf("%d", r);

    return 0;
}
