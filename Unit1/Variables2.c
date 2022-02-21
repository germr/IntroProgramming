#include <stdio.h> //just coment

//datatype:
//enteros (int), decimales (float), caracteres (char), strings (char*)
//datatype varName; datatype varName = anyValue;
//definition, declaration, ejecution/llamado...

//declarar y definiendo un valor inicial;
// cada tipo de variable tiene un tipo de formato de texto
int temp = 30; // %i, %d
float pi = 3.1416; // %f
char initial = 'G'; // %c
char* name = "Gerardo Molina"; // %s
// otros formatos de texto//
// \n: salto de linea


int main(){
    //ejecution/llamado:
    printf("temperatura: %i, minombre es: %s\n", temp, name);
    temp = 15;
    printf("temperatura: %i, mi nombre es: %s\n", temp, name);
    return 0;
}