#include <stdio.h>
#include <stdlib.h>

int main()
{
int a, b;

scanf("%d\n", &a);
scanf("%d", &b);

if (a >= b)
    printf("%d, %d", b, a);
    else if (b >= a)
        printf("%d, %d", a, b);
    printf("\n");
main();
}
