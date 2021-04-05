/* Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера. */
#include<stdio.h>
#include<string.h>
typedef long long int t_user;
int main(){
    t_user u1;
   
    printf( "The size of long long int is: %ld\n",sizeof(t_user));
    
    
    return 0;
}