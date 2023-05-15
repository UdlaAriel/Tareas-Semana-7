#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main ()
{
    int candidato[5] = {0,0,0,0,0};
    int voto;
    
    do
    {
        printf("\nDigite 0 para terminar");
        printf("\nIngrese el voto");
        scanf("%d", &voto);

        if(voto >= 1 && voto <= 5)
        {
            candidato[voto - 1] ++;
        }
        else
        {
            printf("\n\nOpcion Invalida");
            continue;
        }
        

    } while(voto != 0);
    
    for(int i = 0; i < 5; i++)
    {
        printf("\nCandidato %d tiene %d voto/s", i+1,candidato[i]);
    }

    printf("\n ¡Gracias por su votacion!");
    
    return 0;
}
    