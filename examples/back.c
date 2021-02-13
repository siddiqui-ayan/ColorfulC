#include <stdio.h>
#include <stdlib.h>
#include "colorfulC.h"


int main(){
    changeColor(cyanBack);
    printf("This is some cyan BG text!\n");
    resetColor();
    printf("Back to normal boi.\n");
    return 0;
}