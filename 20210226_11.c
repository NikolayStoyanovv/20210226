/* Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин. */
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int x;
    struct node* ptr;
}node;

int main() {
    node a;
    a.x = 3;
    node* np = malloc(sizeof (node));
    np->x = 5;
    np->ptr = &a;
    printf("%d\n",np->x);
    printf("%d\n",np->ptr->x);
}