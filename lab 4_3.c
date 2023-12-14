#include <stdio.h>

void print_multiplication_table(int num){
    for(int i=1; i<=10;i++){
        printf("%d x %d = %d\n",i,num,i*num);
    }
}

void print_pascal_triangle_pattern(int rows){
    int factorial(int num){
        int result=1;
        for(int i=1; i<=num; i++){
            result = result * i;
        }
        return result;
    }
    int combination(int n, int k){ // n= row number, k = column number
        return factorial(n)/(factorial(k) * factorial(n - k));
    }
    for(int i=0; i < rows; i++){
        for(int j=0; j<= i; j++){
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }
}

void print_arrow_pattern(int rows){
    for(int i=0; i< rows; i++){
        for(int j=0; j<=i;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    for(int i=rows; i>1; i--){
        for(int j=i; j>1 ;j--){
            printf("%c",'*');
        }
        printf("\n");
    }
}

int main(){
    char type_of_pattern;
    printf("Enter the type of pattern: ");
    while(type_of_pattern!='m' && type_of_pattern!='p' && type_of_pattern!='a'){
        scanf("%c",&type_of_pattern);
        int num;
        if(type_of_pattern == 'm'){
            printf("please enter a number: ");scanf("%d",&num);
            print_multiplication_table(num);
        }
        if(type_of_pattern == 'p'){
            printf("please enter the rows number: ");scanf("%d",&num);
            print_pascal_triangle_pattern(num);
        }
        if(type_of_pattern == 'a'){
            printf("please enter the rows number: ");scanf("%d",&num);
            print_arrow_pattern(num);
        }

        printf("Invalid pattern type\n");
        printf("please enter the type of pattern: ");
        scanf("%c",&type_of_pattern);
    }
    return 0;
}
