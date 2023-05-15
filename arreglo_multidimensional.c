#include <stdio.h>
#include <string.h>

int main ()
{
    int X[3][2] = {0}; 
    int Y[3][2] = {0}; 
    int Z[3][2] = {0}; /*Definición de matrices*/
    
    for(int i = 0; i < 3; i++) /*Matriz X*/
    {
        for (int j = 0; j < 2; j++)
        {   
            printf("Ingrese el valor de la %d fila y %d columna para la matriz X: ", i+1,j+1);
            scanf("%d", &X[i][j]);
            puts(" ");
        }
        
    }

    for(int i = 0; i < 3; i++) /*Matriz Y*/
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Ingrese el valor de la %d fila y %d columna para la matriz Y: ", i+1,j+1);
            scanf("%d", &Y[i][j]);
            puts(" ");
        }
        
    }
    
    puts("RESULTADO: ");
    
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            Z[i][j] = X[i][j] + Y[i][j];
            printf("%d	" ,Z[i][j]);
            if(j == 1)
			{
				puts(" ");
			}
        }
        
    }

    return 0;
}