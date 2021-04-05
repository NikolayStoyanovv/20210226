/* Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип. */
#include<stdio.h>
typedef struct user{
    char name[80];
    int age;
    }t_user;
    typedef int*t_pointer;
int main(){
    int x=5;
    t_pointer b=&x;
    printf("The size of t_pointer:%ld\n",sizeof(*b));
   
    
    return 0;
}