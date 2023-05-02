#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n, sum;
    do /*Este es el ciclo que se repetira hasta que el usuario ponga cero*/
    {
        for (int i = 0; i <= 0; i++) /*En este ciclo se realiza la operacion*/
        {
            printf("Escribir el digito:");
            scanf("%i", &n);
            sum = sum + n;
        }
    
    } while (n>0);
    printf("El total de la suma de los numeros es %i", sum);
    getch();
    return 0;
}