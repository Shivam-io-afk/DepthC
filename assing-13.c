#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>

// TAKE SOMETHING AND RETURN SOMETHING

int tsrs_areaofcircle(float res);
int tsrs_simpleintrest(float RES);
int tsrs_oddeven(int result);
void tsrn_NnaturalNumber();
void tsrn_oddNaturalNumber();
int tsrs_factorialofNumber(int fact);
int tsrs_combination(int resulty);
int tsrs_givendigit(int fin_resss);

int main()
{
    float val, s;
    /*  val = tsrs_areaofcircle(s);
      printf("Area is - %.2f\n",val); */

    /* val = tsrs_simpleintrest(s);
    printf("SI is - %.2f\n",val); */

    int balue, g;

    /* balue = tsrs_oddeven(g);
    printf("1 for Even , 0 for Odd --> ");
    printf(" %d",balue); */

    /*tsrn_NnaturalNumber();*/

    tsrn_oddNaturalNumber(); 

    int output;
    // tsrs_factorialofNumber(output);


    int combi, combi_res;
    /* combi = tsrs_combination(combi_res);
    printf("Result - %d ",combi); */


    int m,result;
    // m = tsrs_givendigit(result);
    // printf("%d",m);

    return 0;
}




int tsrs_areaofcircle(float result){
    int r;
    float output;

    printf("Enter The Radius - ");
    scanf("%d", &r);
    output = 3.14 * r * r;

    return output;
}





int tsrs_simpleintrest(float RES){
    int r, p, t;
    float output = 0;

    printf("Enter principle,rate and time - ");
    scanf("%d %d %d", &p, &r, &t);
    output = (p * r * t) / 100;

    return output;
}





int tsrs_oddeven(int result){
    int number, fin = -1;

    printf("Enter a number ");
    scanf("%d", &number);

    if (number % 2 == 0){
        // fin = 1;
        return 1;
    }
    else{
        // fin = 0;
        return 0;
    }
}







void tsrn_NnaturalNumber(){
    int priN = 0;
    printf("input the num, To print first N natural Number - ");
    scanf("%d", &priN);
    int l = 1;

    while (l <= priN){
        if (l == priN){
            printf("%d", l);
        }
        else{
            printf("%d, ", l);
        }
        l++;
    }

}






void tsrn_oddNaturalNumber(){
    int val, k, j;

    printf("Enter The value - ");
    scanf("%d", &val);

    for (k = 1; k <= val; k++){
        j = k;
        if (k == val){
            printf("%d", (j * 2) - 1);
        }
        else{
            printf("%d, ", (j * 2) - 1);
        }
    }
}




int tsrs_factorialofNumber(int fact)
{
    int inpvalue, i = 1, fin = 1;

    printf("Enter an Number - ");
    scanf("%d", &inpvalue);

    while (i <= inpvalue)
    {
        fin *= i;
        i++;
    }
    printf("Factorial of %d is %d", inpvalue, fin);
}




int tsrs_combination(int resulty)
{
    int n=1, nres = 1, r=1, rres = 1, finres = 0, n_sub_r = 0,n_sub_rres = 1;

    printf("Enter N and R - ");
    printf("\nEnter N item - ");
    scanf("%d",&n);

    printf("\nTo Select R Item - ");
    scanf("%d", &r);

    printf("\n");
    if (r <= n)
    {
        for (int i = 1; i <= n; i++){
            nres *= i;
        }
        for(int j = 1; j <= r; j++){
            rres *= j;
        }
        n_sub_r = n-r;
        for(int k = 1; k <= n_sub_r; k++){
            n_sub_rres *= k;
        }


    return (nres / (rres * n_sub_rres));
    }

    else{
        printf("Not Possible");
    }

}




int tsrs_givendigit(int fin_resss){
    int number,dif;
    printf("Enter Num  - ");
    scanf("%d",&number);


    int run = 0;
    while (run){
        break;
        if (dif == 0)
        {
            break;
        }
        else{
        dif = number / 10;
        }
        
    } 
    
    return dif;
}