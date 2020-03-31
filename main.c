#include <stdlib.h>
#include <stdio.h>
#include "FileLib.h"
#include <string.h>

int main(){
    int file = open("test.txt", "a+"); //initialise var file
    

    printer("MDRRR"); //print in file
    getContent(); //getContent
    close(); //close file
    return 0;
}
