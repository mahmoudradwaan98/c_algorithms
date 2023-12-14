#include <stdio.h>
#include <stdlib.h>

#define max_size 5

void print_array(unsigned int arr[] , unsigned int arr_size);
void Insertion_sort(unsigned int arr[],unsigned int size);

int main()
{
    unsigned int data[max_size] = {8,5,7,3,2};
    //unsigned int data[max_size] = {2,3,5,7,8};
    printf("unsorted array : ");
    print_array(data , max_size);
    Insertion_sort(data , max_size);
    printf("sorted array after insertion sort: ");
    print_array(data , max_size);

    return 0;
}

void Insertion_sort(unsigned int arr[],unsigned int size){

    unsigned int counter =0;
    unsigned int key = 0;
    signed int compared_index = 0;

    for(counter = 1 ; counter < size ; counter++){

            key = arr[counter];
            compared_index = counter -  1;

            while( (key < arr[compared_index]) && (compared_index >=0) ){

                 arr[compared_index+1]= arr[compared_index];
                 compared_index--;
            }

            arr[compared_index+1] = key;

    }
}

void print_array(unsigned int arr[] , unsigned int arr_size){

    unsigned int counter = 0;

    for(counter = 0;counter < arr_size;counter++){
        printf("%i\t",arr[counter]);
    }

    printf("\n");
}
