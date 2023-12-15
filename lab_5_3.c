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

int main(){
    int rotate_index;
    int array1[]={10, 9, 8, 15, 3};
    int sizeArray1 = sizeof(array1)/sizeof(array1[0]);
    int array2[]={2, 7, 4, 5, 11, 16};
    int sizeArray2 = sizeof(array2)/sizeof(array2[0]);
    printf("Array1: ");
    for(int i=0; i<sizeArray1; i++){
        printf("%d ",array1[i]);
     }
    printf("\n");
    printf("Array2: ");
    for(int i=0; i<sizeArray2; i++){
        printf("%d ",array2[i]);
    }
    printf("\n");
    printf("Enter the index to rotate the array: "); scanf("%d",&rotate_index);
    rotateArray(array1,sizeArray1,rotate_index);
    rotateArray(array2,sizeArray2,rotate_index);
    printf("Rotated array1: ");
    for(int i=0; i<sizeArray1; i++){
        printf("%d ",array1[i]);
    }
    printf("\n");
    printf("Rotated array2: ");
    for(int i=0; i<sizeArray2; i++){
        printf("%d ",array2[i]);
    }
    printf("\n");
    
    return 0;
}
