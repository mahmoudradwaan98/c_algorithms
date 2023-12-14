/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Mahmoud Radwan
 * @brief          : Contains the functionality of Bubble sorting algorithm
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */
typedef unsigned char u8;
typedef unsigned int u16;
#define max_size 5
/* ********************** Macro Section End   ************************* */

/* ********************** Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Declaration Section Start ************* */

/* ********************** Global Declaration  Section End   ************ */

/* ********************** Sub-Program Declaration Section Start ******* */
void swap_func( u16 *P_num1, u16 *P_num2);
void Bubble_sort(u16 arr[] , u16 arr_size);
void print_array(u16 arr[] , u16 arr_size);
/* ********************** Sub-Program Declaration Section End ******* */

/* ********************** Sub-Program Section Start ************* */
void swap_func( u16 *P_num1, u16 *P_num2){

    u16 temp = *P_num1;
    *P_num1  = *P_num2;
    *P_num2  = temp;

}

void Bubble_sort(u16 arr[] , u16 arr_size){

    u16 i,j;
    u8 sort_flag = 0;
    for(i = 0 ; i < arr_size -1;i++){
        for(j=0;j < arr_size -1 - i ;j++){
            if(arr[j]>arr[j+1]){
                swap_func(&arr[j] , &arr[j+1]);
                sort_flag = 1;
            }
             print_array(arr , arr_size);
        }

        if(sort_flag == 0){
            return;
        }
       // print_array(arr , arr_size);
    }

}

void print_array(u16 arr[] , u16 arr_size){

    u16 counter = 0;

    for(counter = 0;counter < arr_size;counter++){
        printf("%i\t",arr[counter]);
    }

    printf("\n");
}
/* ********************** Sub-Program Section End ************* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
Mahmoud Radwan  05Dec2023            Task-1 Bubble sort implementation
*/


int main()
{
    u16 num1 = 5 ;
    u16 num2 = 14;

    swap_func(&num1 , &num2);
    printf("after swapping num1 = %d , num2 = %d\n",num1,num2);
    printf("after swapping num1 = %i , num2 = %i\n",num1,num2);

    u16 data[max_size] = {8,5,7,3,2};
    //u16 data1[max_size] = {2,3,5,7,8};

    Bubble_sort(data , max_size);

    //Bubble_sort(data1 , max_size);


    return 0;
}
