#include <stdio.h>
#include <conio.h>

int fun1();
int fun2();
int fun3();
int fun4();
int fun5();

int main()
{
    fun5();
    return 0;
}







int fun1()
{
    char str[20] = {'D', 'E', 'L', 'H', 'I'};

    for (int i = 0; str[i]; i++)
    {
        printf("%c", i);
    }
}


int fun2()
{
    // Finding length of string --->
    char str[10] = "BHOPAL";
    int t;
    for (t = 1; str[t]; t++)
    printf("%c", t);
}


int fun3(){
     char string[50] = {'M','A','D','H','Y','A',' ','P','R','A','D','E','S','H'};

    printf("%s\n",string);
    
    for(int i = 0; string[i]; i++){
        printf("%c",string[i]);
    }
}

int fun4(){
    char str[100];
    printf("Enter Your name - ");
    gets(str); // we will not use scanf() to take input as a string and  -- -- -- gets not supported formate specifier 
    // Generally we avoid by using gets() because it is not safe for runtime, 

    // it is unreliable because it accsess illegel memory

 
    
    printf("%s",str);    
}


int fun5(){
    /* We use fgets() istead of gets()*/  
    char strr[50];
    printf("Enter Your Name - ");
    fgets(strr,15,stdin);

    int i ;
    for( i = 0; strr[i]; i++);
    printf("Your name is %s and lemght is - %d",strr,i-1);
}