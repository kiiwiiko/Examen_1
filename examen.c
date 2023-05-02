#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n, sum, count = 0;
    do /*Este es el ciclo que se repetira hasta que el usuario ponga cero*/
    {
        for (int j = 0; j <= 0; j++)
        {
            count = count + 1;
            
            printf("Escribir el digito %d:", count);
            scanf("%i", &n);
        }
        
        for (int i = 0; i <= 0; i++) /*En este ciclo se realiza la operacion*/
        {
            sum = sum + n;
        }
    
    } while (n>0);
    printf("El total de la suma de los numeros es %i", sum);
    getch();
    return 0;
}