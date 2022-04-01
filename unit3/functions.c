#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isEvenFunct(int numberToTest);

int main(int argc, char** argv) {

    //par o impar
    bool isEven = isEvenFunct(2);
    printf("result = %d\n", isEven);
    
    return 0;
}

//define function

bool isEvenFunct(int numberToTest) {

    bool IsEven = (numberToTest % 2 == 0);

    if (IsEven) return true;

    return true;
}