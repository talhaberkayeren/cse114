#include <stdio.h>

double calculateDrugA(int age){
    if(age < 18) return 25;
    else if(18<=age && age<65) return 45;
    else return 30;
}

double calculateDrugB(int age, char gender){
    double A=calculateDrugA(age);
    if(age < 18){
        if(gender == 'M') return (9*A)/4;
        if(gender == 'F') return (13*A)/6;
        
    }
    else if(18<=age && age<65){
        if(gender == 'M') return (53*A)/10;
        if(gender == 'F') return (26*A)/5;
    }
    else {
        if(gender == 'M') return (67*A)/20;
        if(gender == 'F') return (97*A)/30;
    }
}

double calculateDrugC(int age, char gender){
    double A=calculateDrugA(age);
    double B=calculateDrugB(age, gender);
    if(age < 18) return 30 + B/2;
    else if(18<=age && age<65) return 40 + B/2;
    else return 35 + 4*A - B/2;
    
}

int main(){
    double medA, medB, medC;
    char gender;
    printf("Please enter your gender: ");scanf("%c",&gender);
    int age;
    printf("Please enter your age: ");scanf("%d",&age);
    
    medA=calculateDrugA(age);
    medB=calculateDrugB(age, gender);
    medC=calculateDrugC(age,gender);
    printf("You have to take drug A %lf mg, drug B %lf mg and drug C %lf mg.", medA, medB, medC);

    return 0;
}
