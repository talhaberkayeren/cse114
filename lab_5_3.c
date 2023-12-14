#include <stdio.h>


void rotateArray(int A[], int size, int index){
    int temp[size];
    for(int i = 0; i<size - index - 1; i++){
        temp [i] = A[index + 1 + i];
    }
    for(int j=0; j<index + 1; j++){
        temp[size - 1 - index + j ]= A[j];
    }
    for(int n=0; n<size; n++){
        A[n]=temp[n];
    }
}

void appendArrays(int array1[], int array2[],int size1, int size2, int index){
    size2=size1 + size2;
    for(int i=0; i<size1; i++){
        array2[index + 1+ i] = array1[i]; //ikinci array in son elemanı kayboluyor
    }
}

int main()
{
    int my_array1[]={10, 9, 8, 15, 3};
    int size1=sizeof(my_array1)/sizeof(my_array1[0]);
    int rotate_index=2;
    rotateArray(my_array1,size1,rotate_index);
    for(int i=0; i < size1; i++){
        printf("%d ", my_array1[i]);
    }
    printf("\n");
    
    
    int rotated_array1[]={15, 3, 10, 9, 8};
    int size_a1=sizeof(rotated_array1)/sizeof(rotated_array1[0]);
    int rotated_array2[]={5, 11, 2, 7, 4, 16};
    int size_a2=sizeof(rotated_array2)/sizeof(rotated_array2[0]);
    int rotated_index=4;
    appendArrays(rotated_array1,rotated_array2,size_a1,size_a2,rotated_index);
    for(int i=0; i < size_a1+size_a1; i++){
        printf("%d ", rotated_array2[i]);
    }
    printf("\n");

    return 0;
}
