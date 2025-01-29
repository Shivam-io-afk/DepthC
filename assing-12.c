#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>

void switch_1();
void switch_2();
void switch_3();
void switch_4();
void switch_5();

int main()
{
    switch_5();

    return 0;
}



void switch_1()
{
    int val = 0;

    while (1)
    {
        printf("\n");
        printf("\nEnter Number b/w 1 to 12 to know the days of the Month - ");
        scanf("%d", &val);
        printf("\n");

        switch (val)
        {
        case 1:
            printf("Jan - 31 Days");
            break;
        case 2:
            printf("Feb which is 28/29 Days");
            break;
        case 3:
            printf("Mar - 31 Days");
            break;
        case 4:
            printf("Apr - 30 Days");
            break;
        case 5:
            printf("May - 31 Days");
            break;
        case 6:
            printf("June is 30 Days");
            break;
        case 7:
            printf("July - 31 Days");
            break;
        case 8:
            printf("Aug - 31 Days");
            break;
        case 9:
            printf("Sep - 30 Days");
            break;
        case 10:
            printf("Oct - 31 Days");
            break;
        case 11:
            printf("Nov - 30 Days");
            break;
        case 12:
            printf("Dec - 31 Days");
            break;

        default:
            printf("Please Enter Valid Number");
            exit(0);
        }
    }
}







void switch_2()
{
    int option, val1, val2;

    while (1)
    {
        printf("-------------------\n");

        printf("Press 1 - Addition\n");
        printf("Press 2 - Subtraction\n");
        printf("Press 3 - Multiplication\n");
        printf("Press 4 - Devision\n");
        printf("Press 5 - Exit\n");

        printf("\n\n");
        printf("Enter - ");
        scanf("%d", &option);
        
        printf("\n");
        if(option == 1 || option == 2 || option == 3 || option == 4 || option == 5){
            printf("Enter values - ");
            scanf("%d %d",&val1,&val2);
        }

        switch (option)
        {
        case 1:
            printf("Additon is %d\n", val1 + val2);
            break;
        case 2:
            printf("Subtraction is %d\n", val1 - val2);
            break;
        case 3:
            printf("Multiplication is %d\n", val1 * val2);
            break;
        case 4:
            printf("Division is %d\n", val1 / val2);
            break;
        case 5:
            printf("Exited");
            exit(0);
            break;
        default:
            printf("Pls. Enter Valid Option");
            exit(0);
        }
    }
}








void switch_3(){
     int option, val1, val2, val3;

    while (1)
    {
        printf("\n-------------------\n");

        printf("Press 1 - To Check Isoceles Traingle\n");
        printf("Press 2 - To Check Right Triangle\n");
        printf("Press 3 - To chec Equilateral Trainglek\n");
        printf("Press 4 - Exit\n");

        printf("\n\n");
        printf("Enter - ");
        scanf("%d", &option);
        
        printf("\n");
        if(option == 1 || option == 2 || option == 3){
            printf("Enter values - ");
            scanf("%d %d %d",&val1,&val2,&val3);
        }

        switch (option)
        {
        case 1:
            if(val1 == val2 || val2 == val3 || val3 == val1){
                printf("It is Isoceles Traingle");
            }
            else{
                printf("It is Not Isoceles");
            }
            break;
        case 2:
            if((val1 + val2 > val3) || (val2 + val3 > val1) || (val3 + val1 > val2)){ // This Part Not working Properly
                printf("It is Right Triangle");
            }
            else{
                printf("It is Not Right Triangle");
            }
            break;
        case 3:
            if(val1 == val2 && val2 == val3 && val3 == val1){
                printf("It is Equilateral Triangle");
            }
            else{
                printf("It is Not Equilateral");
            }
            break;
        case 4:
            printf("Exited");
            exit(0);
            break;
        default:
            printf("Pls. Enter Valid Option");
            exit(0);
        }
    }
}







void switch_4(){

    int grade;
    while (1)
    {
        printf("\nEnter Your Marks - ");
        scanf("%d",&grade);
        printf("\n");
        switch(grade){
            case 90 ... 100:
                printf("A Grade");
                break;
            case 80 ... 89:
                printf("B Grade");
                break;
            case 70 ... 79:
                printf("C Grade");
                break;
            case 60 ... 69:
                printf("D Grade");
                break;
            case 50 ... 59:
                printf("E Grade");
                break;
            case 0 ... 49:
                printf("Fail");
                break;
            default:
                printf("Invalid Marks");
                exit(0);

        }
    }
    

}







void switch_5(){
    int opr = 0;
    int number = 0, option, l;
    float ara = 0;
    
    while (1)
    {
        printf("\n");
        printf("\nPress ->");
        printf("\n1 > Factorial of a Number");
        printf("\n2 > Check Even or Odd");
        printf("\n3 > Area of circle");
        printf("\n4 > Sum of First N natural number");
        printf("\n5 > Exit");
    
        printf("\n ==> ");
        scanf("%d",&option);
        printf("\n");

        if (option == 1 || option == 2 || option == 3 || option == 4)
        {
            printf("Enter Your Number - ");
            scanf("%d",&number);
        }
        else{
            printf("Exited");
            exit(0);
        }
        

        printf("\n");
        
        switch(option){
            case 1:
                opr = 1;
                for(l = number; l >= 1;l--){
                    opr = opr * l;         
                }
                printf("Factorial - %d",opr);
                break;
            case 2: 
                number % 2 == 0 ? printf("Even Number") : printf("Odd");
                break;
            case 3:
                ara = 3.14*(number*number);
                printf("Area is - %f",ara);
                break;
            case 4:
               for(l = 1; l <= number;l++){
                    opr += l;     
                }
                printf("Sum of first %d Number is - %d",number,opr);
                break;
        }
        ara = 0; opr = 0;
    }
    



}


