#ifndef FILELIB_H
#define FILELIB_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

FILE *pt_file;
int open(char filename[], char option[]){
    pt_file = fopen(filename, option);
    
    if(pt_file == NULL){
        printf("Error to open file\n");
        return 1;
    }

    return 0;
    
}

void printer(char message[]){
    if(pt_file == NULL){
        printf("You must initilised file to puts\n");
        
    }
    fputs(message, pt_file);
}

int countFileLine(FILE* file){
 
    char chr;
    int count = 0;
    chr = getc(file);
 
    while (chr != EOF)
    {
        //Count whenever new line is encountered
        if (chr == '\n')
        {
            count = count + 1;
        }
        //take next character from file.
        chr = getc(file);
    }
 
    return count;
}

void getContent(){

    
    char buf[100];
    if(pt_file == NULL){
        printf("Error cannot open file\n");
    }
    printf("cursor position: %ld\n", ftell(pt_file));
 
    int line = countFileLine(pt_file);
    printf("nb lignes: %d\n", line);
 
    printf("cursor position: %ld\n", ftell(pt_file));
    rewind(pt_file);
 
 
    for (int i = 0; i < line; i++)
    {
 
        fgets(buf, 100, pt_file);
        printf("%s", buf);
 
    }

    
}



int close(){
    if(pt_file == NULL){
        printf("You must initilised file to close\n");
        return 1;
    }

    fclose(pt_file);
    return 0;
}


#endif