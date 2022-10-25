#include <stdio.h>
#include <stdlib.h>

int main()
{
int jam, menit, detik;
    scanf("%d", &detik);

jam = detik / (60*60);
detik = detik - ((60 * 60) * jam);
menit = detik / 60;
detik = detik - (menit * 60);

if (jam >= 24)
    printf("1 hari ");

printf("%d :", jam);
printf("%d :", menit);
printf("%d", detik);
printf("\n");
main()
;}
