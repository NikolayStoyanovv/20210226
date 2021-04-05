/* Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте. */
#include<stdio.h>
#include<string.h>
typedef struct user{
    char name[80];
    int age;
    }t_user;
int main(){
    t_user u1;
    strcpy(u1.name,"Sam");
    
    u1.age=10;
    printf( "The user's name is: %s\n", u1.name);
    printf( "The user's age is : %d\n", u1.age);
    
    return 0;
}