#include <stdio.h>
#include <string.h>

// from Structure Pointer Leaved

struct employee{
    int empid;
    char name[50];
    int phno;
};


// function to structure
struct employee fnct1(){
    struct employee all;
    printf("Enter EmpID, Name and Contact - ");
    scanf("%d",&all.empid);
    fflush(stdin);
    fgets(all.name,20,stdin);
    scanf("%d",&all.phno);


    // all.name[strlen(all.name) - 1] = '\0';
}


void display(struct employee all){
    printf("%d %s %d",all.empid,all.name,all.phno);
    printf("\n");
}

int main(){
    struct employee E1 = {10,"Hooman",599310};
    struct employee E2;
    E2.empid = 31;
    strcpy(E2.name,"Waffry");
    E2.phno = 2991692;
    display(E1);        
    display(E2);




    // E2.name = 'joseph'; //// this gives error because assingment ke left side mai address nhi aaskta
    // strcpy(E2.name,'Joseph');   // strcpy(address,value);

    
    
}







