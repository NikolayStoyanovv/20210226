/* Задача 10. Опитайте се да използвате колкото се може
повече неявни преобразувания на типове в С-и */
#include<stdio.h>
int main() {
    short int sivalue = 13; 
    int* ptrValue = (int*) &sivalue;
    *ptrValue = 31;
    printf("%d, %d\n", sivalue, *ptrValue);
    char chValue = 'a'; 
    double* ptrdValue = (double*) &chValue;
    *ptrdValue = 0.0; 
    printf("%c, %f\n", chValue, *ptrdValue);
}