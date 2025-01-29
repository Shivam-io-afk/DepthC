// RECURSION VDO PORTION ASSINGMENT - 11 -->
#include <stdio.h>


int numeric();

int main()
{
    // patterns();
    numeric();
    return 0;
}







int numeric(){
    int l,m;

    printf("\n");
    for(l = 1; l <= 5; l++){
        // break;
        for (m = 1; m <= 5; m++)
        {
            if(m <= l){
                printf("%d ",m);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n");




    for(l = 1; l <= 5; l++){
        // break;
        for (m = 1; m <= 5; m++)
        {
            if(m <= 6 - l){
                printf("%d ",m);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


  printf("\n\n");



    for(l = 1; l <= 5; l++){
        // break;
        for (m = 1; m <= 5; m++)
        {
            if(l >= 6 - m){
                printf("%d ",m);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

      printf("\n\n");





   int k;
   for(l = 1; l <= 4; l++){
     k = l; // THIS LINE IS CHANGED THE WHOLE PATTERN
    //  break;
        for (m = 1; m <= 4; m++)
        {
            if(m <= l){
                printf("%d ",k);
                k--;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


    printf("\n\n");
    
    for(l = 1; l <= 5; l++){
        // break;
        for (m = 1; m <= 5; m++)
        {
            if(m <= l){
                printf("%d ",k);
                k++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }





    printf("\n");




    
    for(l = 1; l <= 5; l++){
        // break;
        for (m = 1; m <= 5; m++)
        {
            if(l == 1  || l == 5 || m == 1 || m == 5){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }



}

























int patterns(){

    int i, j;


// Pattern - 3
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            if (j >= 6 - i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }


        printf("\n\n");



// Pattern - 2


    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            if (j <= i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }

        printf("\n");
    }


        printf("\n\n");




// Pattern - 3
for (i = 0; i <= 5; i++)
{
    for ( j = 0; j <= 5; j++)
    {
        if (j <= i)
        {
            printf("*");
        }
        else{
            printf(" ");
        }
    }
        printf("\n");   
    
}




printf("\n\n");



    // Pattern - 1
    for (i = 0; i <= 5; i++)
    {
        for ( j = 0; j <= 5; j++)
        {
            if (j <= 4-i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
            printf("\n");   
        
    }


}




































































































































































































































































int lowGraded()
{
    printf("\n");

    // Printing stars - 3
    for (int i = 6; i > 1; i--)
    {
        break;
        for (int j = i - 2; j >= 1; j--)
        {
            printf("* ");
        }
        printf("* \n");
    }

    printf("\n\n");








    // Printing stars - 2
    for (int i = 1; i < 6; i++)
    {
        break;

        for (int j = 1; j <= i - 1; j++)
        {
            printf("* ");
        }
        printf("* \n");
    }

    printf("\n");








    // Print Number - 1
    for (int i = 1; i < 6; i++)
    {
        break;
        for (int j = 1; j <= i - 1; j++)
        {
            printf("%d ", j);
        }
        printf("%d\n", i);
    }

    printf("\n\n");









    for (int i = 0; i < 5; i++)
    {
        break;
        printf("* \n");
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
            if (j == i - 3)
            {
                break;
            }
        }
    }

    return 0;



}
