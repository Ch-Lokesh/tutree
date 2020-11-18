#include<iostream>
using namespace std;

//function prototypes
void printUpper(int n);
void printLower(int n);
void printPattern(int n);

int main(){

    int n = 7;
    //takes integer n as input and prints pattern of size 2*n - 1
    printPattern(n);
    
    return 0;
}

void printUpper(int n){
    
    //outer loop for printing number of rows
    for(int i = 0; i < n; i++){
        //loop for printing spaces
        for(int k = 0; k < i; k++){
            printf(" ");
        }
        for(int j = i + 1; j <= n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

void printLower(int n){

    //outer loop for printing number of rows
    for(int i = 1; i < n; i++){
        
        //loop for printing spaces
        for(int k = 0; k < n - 1 - i; k++){
            printf(" ");
        }
        for(int j = n-i; j <= n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

void printPattern(int n){
    printUpper(n);
    printLower(n);
    printf("\n");
}