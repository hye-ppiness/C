/*
-파일명:21720939_박근혜_2_1
-프로그램:10진수 숫자의 역순 출력
-produced by Geunhye Park
-2019.3.14*/
#include <stdio.h>

void main()
{
   long long int input;
   int count = 0;
   int reverse = 0;

   do
   {
      printf("Input positive decimal number (upto 10 digits) : ");
      scanf("%lld", &input);
   } while (0 > input || input > 9999999999);

   for (input; input > 0; input = input / 10)
   {
      reverse = input % 10;

      if (reverse == 0 && count == 0)
         continue;
      else
      {
         printf("%d", reverse);
         count++;
      }
   }
}