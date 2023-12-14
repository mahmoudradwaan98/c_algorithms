#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

unsigned int ARR[MAX_SIZE] = {11,22,33,44,55,66,77,88,99,100};
unsigned int Linear_search_algorithm(unsigned int search_value, unsigned int arr[], unsigned int arr_length);
unsigned int Optimized_Linear_search_algorithm(unsigned int search_value, unsigned int arr[], unsigned int arr_length);

int main()
{
    unsigned int value1,value2 , result;
    printf("Enter search value 1:\n");
    scanf("%d",&value1);
    result = Linear_search_algorithm(value1 , ARR , MAX_SIZE);
    if(result == -1){
        printf("Value is not found\n");
    }
    else{
        printf("value %d is found in index %d\n",value1,result);
    }
    printf("+++++++++++++++++++++++++++++++++++++++++++++\n");

    printf("Enter search value 2:\n");
    scanf("%d",&value2);
    unsigned int result_new = Optimized_Linear_search_algorithm(value2 , ARR , MAX_SIZE);
    if(result_new == -1){
        printf("Value is not found\n");
    }
    else{
        printf("value %d is found in index %d\n",value2,result_new);
    }
    return 0;
}

unsigned int Linear_search_algorithm(unsigned int search_value, unsigned int arr[], unsigned int arr_length){

    int i;
    for(i=0;i<arr_length;i++){

        if(arr[i] == search_value){
            return i;
        }

    }
    return -1;

}

unsigned int Optimized_Linear_search_algorithm(unsigned int search_value, unsigned int arr[], unsigned int arr_length){

    unsigned int left_index = 0;

    unsigned int right_index = arr_length - 1;

    for(left_index=0;left_index<right_index;){

        if(arr[left_index] == search_value){
            return left_index;
        }
        else{
            /* Do Nothing*/
        }

        if(arr[right_index] == search_value){
            return right_index;
        }
        else{
            /* Do Nothing*/
        }
        left_index++;
        right_index--;

    }
    return -1;

}
