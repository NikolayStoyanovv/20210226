/* Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност. */
#include<stdio.h>
    typedef int*t_pointer(int *,int *);

    int print_to_n(int *a,int *b){
        
        return *a+*b;
    }
int main(){
   int a=5;
   int b=6;
   int  *ptr1=&a;
   int  *ptr2=&b;
   
     t_pointer *t=print_to_n(ptr1,ptr2);
    printf("The value of t_pointer:%ls\n",t(ptr1,ptr2));
    return 0;
}