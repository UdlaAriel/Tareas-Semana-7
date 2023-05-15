#include <stdio.h>
#include <conio.h>

int main ()
{
    int candidato[5] = 0;
    int voto;
    
    do
    {
        printf("\nDigite 0 para terminar");
        printf("\nIngrese el voto");
        scanf("%d", &voto);

        if(voto >= 1 || voto <= 5)
        {
            candidato[voto - 1] ++;
        }
        else
        {
            printf("\n\nOpcion Invalida");
        }
        

    } while(voto != 0);
    
    system("cls");
    printf("¡Gracias por su votacion!");
    return 0;
}