#include<stdio.h>
#define school(x) (printf("%s",student##x))
int main()
{
   char student1[44] = "Yogesh";
   char student2[44] = "Bhupendra";
   school(2);
   return 0;
}