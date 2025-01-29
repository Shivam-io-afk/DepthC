#include <stdio.h>


void firstN(int);
void printRev(int);
void printOdd(int);
void printoddinRev(int);
void printEvenn(int);
void printEvennrev(int);
void squares(int u);
void binary(int num);
void printReverseNumber(int lol);
int sumofNnum(long int p);
int hcfofNum(int a ,int b);
void fibbo(int n);


int main(){
    int k,b;
    printf("Enter Num - ");
    scanf("%d",&k);
    // firstN(k);
    
    // printRev(k);

    // printOdd(k);

    // printoddinRev(k);

    // printEvenn(k);

    // printEvennrev(k);

    // squares(k);


/*---------------------*/ 
    // binary(k);
/*---------------------*/ 


    // printReverseNumber(k);





/* ----------------This is required for summation of n Num's-------------------------  */ 

    // int l;

    // printf("Enter - ");
    // scanf("%d",&l);
    // l = sumofNnum(l);

    // printf("%d",l);

/* ------------------------------------------ */ 






    /* ------------------------------------ */ 
    int res;
    // printf("Enter Num - ");
    // scanf("%d",&b);

    // res = hcfofNum(k,b);
    // printf("%d",res);

    /* ------------------------------------- */


    fibbo(k); 


    return 0;
}


int sumofNnum(long int l){
    if(l != 0){
        return l + sumofNnum(l - 1);
    }

}







void firstN(int n){
    if(n > 0){
        firstN(n - 1);
        printf("%d ",n);
    }
}


void printRev(int l){
    if(l > 0){
        printf("%d ",l);
        printRev((l - 1));
    }
}


void printOdd(int p){
    if(p > 0){
        printOdd(p - 1);
        printf("%d ", p*2 - 1);
    }
}


void printoddinRev(int a){
    if(a > 0){
        printf("%d ",a*2 - 1);
        printoddinRev( a - 1 );
    }
}


void printEvenn(int q){
    if(q > 0){
        printEvenn(q - 1);
        printf("%d ",q*2);
    }
}


void printEvennrev(int c){
    if(c > 0){
        printf("%d ",c*2);
        printEvenn(c - 1);
    }
}


void squares(int u){
    if(u > 0){
        squares(u - 1);
        printf("%d ",u*u);
    }
}







void convert(int num, int base) {
    if (num > 0) {
        convert(num / base, base); 
        if (base == 16)
            printf("%X", num % base); 
        else
            printf("%d", num % base); 
    }
}





void binary(int num) {
    int pos;

    printf("Enter an option between 1 to 3:\n");
    printf("1> For Binary\n");
    printf("2> For Octal\n");
    printf("3> For Hexadecimal\n");

    scanf("%d", &pos);

    switch (pos) {
        case 1:
            printf("Binary is: ");
            convert(num, 2); 
            break;
        case 2:
            printf("Octal is: ");
            convert(num, 8); 
            break;
        case 3:
            printf("Hexadecimal is: ");
            convert(num, 16); 
            break;
        default:
            printf("Invalid option selected.\n");
    }
    printf("\n"); 
}









void printReverseNumber(int lol){
    if(lol > 0){
        printf("%d",lol % 10);
        printReverseNumber( lol / 10 );

    }
}











//-------------------------------------------------//









int hcfofNum(int a, int b){
    if(a > b ){
        if(a % b == 0){
            return b; // if rem. b/w a to b is 0 then return b as a HCF ----->1
        }
        else{
           return hcfofNum(a%b, b); // continue's
        }
    }
    else{
        if(b%a == 0){
            return a; // same as 1
        }
        else{
           return hcfofNum(a,b%a);
        }
    }
}










/*------- main -------*/ 
void fibbo(int n){
    if(n == 0){
        printf("%d",n);
    }
    else{
        fibbo(n - 1);
        printf("%d ",fibSq(n));
    }
}

/*--- function to cal. preceeding terms ---*/
int fibSq(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibSq(n-1)+fibSq(n-2);
}















