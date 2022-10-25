#include <stdio.h>
#include <stdlib.h>

int main()
{
int angka;
scanf("%d", &angka);
  if ( angka <= 0 ){
    if ( angka == 0 ){
      printf("Nol");
    } else {
      printf("Negatif");
    }
  } else {
    printf("positif");
  }
  printf("\n");

main();
}
