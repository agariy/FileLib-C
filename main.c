#include <stdlib.h>
#include <stdio.h>
#include "FileLib.h"
#include <string.h>

int main(){
    int file = open("test.txt", "a+");
    char variableBuf[100];

    printer("MDRRR");
    getContent();
    close();
    return 0;
}