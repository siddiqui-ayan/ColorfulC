#include <stdio.h>
#include <stdlib.h>
#include "colorfulC.h"


int main(){
    changeColor(cyan);
    printf("This is some cyan text!\n");
    resetColor();
    printf("Back to normal boi.\n");
    return 0;
}