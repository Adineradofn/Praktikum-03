#include <stdio.h>
#include <stdlib.h>

int main()
{
int angka;
    scanf("%d", &angka);

if(angka >=1 && angka <=9 ){
    printf ("satuan");
}
   else if(angka >=10 && angka <=19){
    printf("Belasan");
   }
    else if (angka == 0){
    printf("Nol");
}
    else if (angka >= 20 && angka <= 99){
    printf("Puluhan");
}
    else if (angka >= 100){
        printf("Anda Menginput Melebihi Limit Bilangan");
    }


printf("\n");
main()
;}
