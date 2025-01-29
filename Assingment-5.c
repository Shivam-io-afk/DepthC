#include <stdio.h>
#include <conio.h>

int task_11()
{
    int a;
    printf("Input any number - ");
    scanf("%d", &a);

    if (a % 5 == 0)
        printf("Num Divisible by 5, \t");
    else
        printf("Not divisible by 5, \t");

    // check weather that Number is odd or Even
    if (a % 2 == 0)
    {
        printf("Num. is Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}


// Chech weather input number is 3 digit or not..
int task_12()
{
    int inp;

    printf("Enter Any number - ");
    scanf("%d", &inp);

    if (inp >= 100 && inp <= 999)
        printf("Entered Number is 3 Digit");
    else
        printf("Not a 3 digit number");

    return 0;
}


//check Greatest between two number
int task_13(){
    int intr1,intr2;
    printf("Enter numbers - ");
    scanf("%d %d",&intr1,&intr2);

    if (intr1 > intr2)
    {
        printf("%d is greatest",intr1);
    }
    else if(intr1 < intr2)
    {
        printf("%d is greatest",intr2);
    }
    else{
        printf("%d both are equal numbers",intr1);
    }

    return 0;
    
}


// Check Nature of quadratic equation
int task_14(){
    int a,b,c;
    
    printf("You have quadratic equation ax^2 + bx + c = 0 \n");
    printf("Enter B - ");
    scanf("%d",&b);
    printf("Enter A and C - ");
    scanf("%d %d",&a,&c);
    
    if (b*b == 4*a*c)
    {
        printf("Roots are real and equal");
    }
    else if (b*b > 4*a*c)
    {
        printf("Roots are real & distinct");
    }
    else
    {
        printf("Roots are imaginary");
    }
    
}


//Year is leap or not
int task_15(){
    int yr;
    printf("Input a year in YYYY format - ");
    scanf("%d",&yr);

    if(yr >= 1000 && yr <=9999){
        if(yr%4 == 0){
            printf("Year is Leap Year");
        }
        else{
            printf("Entered Year is Non-Leap Year");
        }
    }
    else{
        printf("Please Enter is right format !");
    }
}


//assingment 5,Q10 unclear question          <<<<<<<<<<---------------------------------------<<<<<<<<<<
int task_16(){
    int x,y,z;
    printf("Enter three num's - ");
    scanf("%d %d %d",&x,&y,&z);

    if (x && y > z){
        printf("x and y is Greatest");
    }
    else if(y && z > x){
        printf("y and z is Greatest");
    }
    else{
        printf("z is greatest");
    }
    
    return 0;
    
}


int task_17(){
    int val1,val2,val3;

    printf("Enter any Num's - ");
    scanf("%d %d %d",&val1,&val2,&val3);

    if(val1 > val2 && val1 > val3){
        printf("X is greatest");
    }
    else if(val2 > val3 && val2 > val1){
        printf("Y is greatest");
    }
    else{
        printf("Z is greatest");
    }

}



