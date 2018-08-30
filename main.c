#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad ;
    scanf("%d",&edad);

    while(edad < 0 || edad > 100)
    {
        printf("La edad NO ES VALIDA");
        scanf("%d",&edad);
    }
    printf("La edad es: %d",edad);
    return 0;
}
