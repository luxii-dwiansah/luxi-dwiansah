/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
  double a = 1; /* Menginisialisasi bilangan yang akan dibagi (pembilang) */
  double b;   /* Variabel penampung nilai pembagi (penyebut) */

  /* Memaksa proses pengulangan */
  while (TRUE)
  {
    printf("Masukkan bilangan pembagi : ");
    scanf("%lf", &b);

    if (b == 0)
    {
      continue; /* Apabila pembagi 0,
             maka lanjutkan pengulangan */
    }
  }
}