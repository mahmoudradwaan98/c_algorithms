#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef unsigned int u32;
typedef signed int   s32;

s32 Binary_search_algorithm(s32 value, s32 arr[] , s32 arr_length);
s32 Binary_search_algorithm_recursive(s32 REQ_value, s32 arr[] , s32 S_index , s32 E_index);

int main()
{

    s32 value , result;

    s32 ARR[MAX_SIZE] = {11,22,33,44,55,66,77,88,99,100};

    printf("Enter search value:\n");
    scanf("%d",&value);

    result = Binary_search_algorithm(value , ARR , MAX_SIZE);

    if(result == -1){
        printf("Value is not found\n");
    }
    else{
        printf("value %d is found in index %d\n",value,result);
    }


    s32 test ;

    test = Binary_search_algorithm_recursive(22,ARR,0,MAX_SIZE-1); //1
    printf("value %d is found in index %d\n",22,test);
    test = Binary_search_algorithm_recursive(77,ARR,0,MAX_SIZE-1); // 6
    printf("value %d is found in index %d\n",77,test);
    test = Binary_search_algorithm_recursive(105,ARR,0,MAX_SIZE-1); // -1
    printf("value %d is found in index %d\n",105,test);

    return 0;
}

s32 Binary_search_algorithm(s32 value, s32 arr[] , s32 arr_length){

    s32 start_index = 0;
    s32 end_index  = arr_length -1;
    s32 mid_index = 0;

    while(start_index <= end_index){

            mid_index = start_index + ( (end_index -start_index) / 2);
            if(value == arr[mid_index]){
                return mid_index;
            }
            else if(value > arr[mid_index]){
                start_index = mid_index +1;
            }
            else if(value < arr[mid_index]){
                end_index = mid_index -1;
            }

    }
    return -1;
}

s32 Binary_search_algorithm_recursive(s32 REQ_value, s32 arr[] , s32 S_index , s32 E_index){

    s32 M_index = 0;

    while(S_index <= E_index){

            M_index = S_index + ( (E_index -S_index) / 2);

            if(REQ_value == arr[M_index]){
                return M_index;
            }
            else if(REQ_value > arr[M_index]){

                return Binary_search_algorithm_recursive(REQ_value,arr,M_index+1,E_index);
            }
            else if(REQ_value < arr[M_index]){

                return Binary_search_algorithm_recursive(REQ_value,arr,S_index,M_index-1);

            }

    }
    return -1;
}
