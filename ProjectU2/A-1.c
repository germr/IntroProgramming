#include <stdio.h>
#include <stdlib.h> 

int main (int argc, char *argv[]) 

{

printf ("Numero de argumentos pasados: %d\n",argc);
int suma = 0;

for (int i= 1; i < argc; i++)
{
    suma = suma + atoi(argv[i]);
    printf ("El argumento %d vale: %s\n",i, argv[i]);
}
printf ("La suma de los valores es: %d  \n", suma);
float promedio = (float)(suma) / (float)(argc - 1);
printf ("El promedio: %5.2f  \n", promedio);

return 0;
} 