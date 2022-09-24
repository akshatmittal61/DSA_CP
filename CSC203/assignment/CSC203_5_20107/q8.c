#include <stdio.h>
int isprime(int n) //function to check whether the number is prime or not
{
   int i, k = 0;
   for (i = 2; i < n; ++i)
   {
      if (n % i == 0)
         ++k; //if n is not divisible by any other number than 1 or itself k remains 0
   }
   if (k == 0)
      return 1; //return true if k==0 i.e.) n is not divisible by any other no.
   else
      return 0; //otherwise return false
}
int main()
{
   printf("\n\n\n");
   int a[100], i, j, k, n = 100;
   for (i = 0; i < n; ++i)
      a[i] = i + 1; //allot 1-100 to array
   printf("\n Before sorting: \n");
   for (i = 0; i < n; ++i)
      printf("%d  ", a[i]);
   printf("\n\n");
   for (i = 0; i < n; ++i)
   {
      if (isprime(a[i]))
      {
         for (j = i; j < n; ++j)
            a[j] = a[j + 1]; //if a[i] is prime replace the next element by the present element & continue until the end is reached
         n--;                //array size will be decreased by 1 after every one removal
      }
   }
   printf("\n After sorting: \n");
   for (i = 0; i < n; ++i)
      printf("%d \t", a[i]);
   printf("\n\n\n");
   return 0;
}