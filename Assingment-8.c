#include <stdio.h>
#include <stdlib.h>
#include <conio.h>








//Call by Ref
int Fun(int *a, int *b) {

    printf("%d %d", *a+*b-*a , *a+*b-*b);

}


int m() {
    int x = 0,y = 0;

    printf("Enter Two Num's ");
    scanf("%d %d",&x , &y);

    Fun(&x, &y);
    return 0;
}








// Call By vcl


int Fun_2(int a , int b){
    printf("%d %d", a*b/a , a*b/b);

}

int callbyVal(){
    int  val1 = 0,  val2 = 0;

    printf("Enter Two Num's ");
    scanf("%d %d",&val1,&val2);

    Fun_2(val1,val2);

    return 0;
}

//






int arry(){
    
    // 1D

    int arry[6] = {6, 7, 4, 10, 5, 7}, arrylen = 0;

    for (int i = 0; i < sizeof(arry) / sizeof(arry[0]); i++)  
    {
        arrylen += arry[i];
    }
    // printf("Sum is %d\n\n", arrylen);



    // 2D

    int twarry[3][3] =  { {1,8,2} , {5,0,7} } ;
    int val = 0;


    for(int j = 0; j < 3; j ++){
        for(int k = 0; k < 3; k++ ){

            val += twarry[j][k];

        }
    }
        printf("Total - %d\n\n",val);



}






int len(){

    // Find length of given string
    char strg[] =  "Central University of Haryana";
    int len_strg = 0;

    for (int z = 0; strg[len_strg] != '\0'; z++){
        len_strg++;
    }

    printf("Total Length is -> %d",len_strg);

}

























int findMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 3, 45, 7, 19, 23, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, &min, &max);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
