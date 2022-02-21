#include <stdio.h>

//DataType:
//Create a variable: dataType anyName 

int myInt = 24; //indica variable entera %d
float myFloat = 22.7; //variable punto deciamal %f
char mychar = '1'; //formato texto %c
int myarray [7] = {5, 27, 43, 12, 8, 7, 0}; //%ls
                 // 0 1 2 3 4 5 6 ...n
float myfloatarray [255] = {1.33, 2.55, 666.1};
char word [7] = {'G', 'E', 'R', 'A', 'R', 'D', 'O'};
char country [10] = "Mexico"; //%s
char aName [15] = "Gerardo";

int main(){
    printf("imprimir valor, myInt = %d\n", myInt);

    printf("imprimir valor, char = %c\n", mychar);

    printf("imprimir valor, myfloat = %f\n", myFloat);

    printf("imprimir valor, country = %s\n", country);

    printf("imprimir valor, myarray = %d\n", myarray[7]);

    printf("imprimir valor, word = %c\n", word[6]);

    printf("imprimir valor, *aName = %s\n", aName);

    printf("imprimir valor, myfloatarray = %f\n", myfloatarray[2]);
    

    return 0;
}