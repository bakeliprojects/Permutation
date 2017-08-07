
#include <stdio.h>
void permute (int *x, int *y)
{
   int p = *x;
   *x = *y;
   *y = p;
}
int main (void)
{
   int a;
   int b;
   printf("choisie tes deux nombre\n");
   if (scanf ("%d%d", &a, &b))
   {
      printf ("avant permutation a = %d, b = %d\n", a, b);
      permute (&a, &b);
      printf ("apres permutation a = %d, b = %d\n", a, b);
   }
   return 0;
}
