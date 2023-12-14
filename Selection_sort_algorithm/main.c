#include <stdio.h>
#include <stdlib.h>

#define max_size 5

void print_array(unsigned int arr[] , unsigned int arr_size);
void Selection_sort(unsigned int arr[],unsigned int size);
void swap_func( unsigned int *P_num1, unsigned int *P_num2);
int main()
{
    unsigned int data[max_size] = {8,5,7,3,2};
    //unsigned int data[max_size] = {2,3,5,7,8};
    printf("unsorted array : ");
    print_array(data , max_size);
    Selection_sort(data , max_size);
    printf("sorted array after Selection sort: ");
    print_array(data , max_size);

    return 0;
}

void Selection_sort(unsigned int arr[],unsigned int size){

    unsigned int counter =0;
    unsigned int compared_counter =0;
    unsigned int minimun_index = 0;

    for( counter =0; counter<size -1 ; counter++){

            minimun_index = counter;

            for(compared_counter = counter+1 ;compared_counter<size;compared_counter++){

                    if(arr[compared_counter] < arr[minimun_index]){
                        minimun_index = compared_counter;
                    }
                    else{
                        /* Do Nothing */
                    }

            }

            swap_func(&arr[minimun_index],&arr[counter]);


    }


}

void print_array(unsigned int arr[] , unsigned int arr_size){

    unsigned int counter = 0;

    for(counter = 0;counter < arr_size;counter++){
        printf("%i\t",arr[counter]);
    }

    printf("\n");
}


void swap_func( unsigned int *P_num1, unsigned int *P_num2){

    unsigned int temp = *P_num1;
    *P_num1  = *P_num2;
    *P_num2  = temp;

}
