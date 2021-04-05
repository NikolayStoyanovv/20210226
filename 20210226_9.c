/* Задача 9. Изведете резултата от деленето на две цели
числа от тип int като double с преобразуване и без такова */
#include<stdio.h>
int main(){
    int iValue=5;
    int iDiv=3;
    double dfRes=0.0;
    dfRes=(double)iValue/iDiv;
    printf("The result is :%lf\n",dfRes);
    short b=13;
    int* ptr=(int*)&b;
    *ptr=31;

    return 0;
}