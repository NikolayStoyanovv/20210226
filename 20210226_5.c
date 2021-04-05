/* Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата. */
#include <stdio.h>

typedef int twoInts[2];

  typedef int List[10];		

  List x;			
  List y;			

int main () {
    typedef char Name[20];	

    Name first="Zack", middle="LZ", last="Miller";
   printf("First name:%s\n",first);
   printf("SN :%s\n",middle);
   printf("Last name:%s\n",last);
    return 0;
}



