#include <stdio.h>
#include <stdlib.h>

char black[10] = "\033[0;30m";
char red[10] = "\033[0;31m";
char green[10] = "\033[0;32m";
char yellow[10] = "\033[0;33m";
char blue[10] = "\033[0;34m";
char purple[10] = "\033[0;35m";
char cyan[10] = "\033[0;36m";
char white[10] = "\033[0;37m";
char gray[10] = "\033[0;90m";
char lightRed[10] = "\033[0;91m";
char lightGreen[10] = "\033[0;92m";
char lightYellow[10] = "\033[0;93m";
char lightBlue[10] = "\033[0;94m";
char lightPurple[10] = "\033[0;95m";
char lightCyan[10] = "\033[0;96m";
char redBack[10] = "\033[0;41m";
char greenBack[10] = "\033[0;42m";
char yellowBack[10] = "\033[0;43m";
char blueBack[10] = "\033[0;44m";
char purpleBack[10] = "\033[0;45m";
char cyanBack[10] = "\033[0;46m";
char whiteBack[10] = "\033[0;47m";
char grayBack[10] = "\033[0;100m";
char lightRedBack[10] = "\033[0;101m";
char lightGreenBack[10] = "\033[0;102m";
char lightYellowBack[10] = "\033[0;103m";
char lightBlueBack[10] = "\033[0;104m";
char lightPurpleBack[10] = "\033[0;105m";
char lightCyanBack[10] = "\033[0;106m";
char null[10] = "\033[0;0m";

void changeColor(char color[]){
    printf("%s",color);
}

void resetColor(){
    printf("%s",null);
}