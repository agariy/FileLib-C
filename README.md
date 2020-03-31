# FileLib

This library simplifies the use of the FILE * pointer in C and allows beginners and those with large projects to work with files more quickly.


### Includes

Include the Header
```c
#include "FileLib.h"

int main(){
    printf("Hello world\n");
    return 0;
}
```

### Initialise file

```c
#include "FileLib.h"

int main(){
    int file = open("filename.txt", "a+");
    return 0;
}
```

the function open return int
    1 if open error
    0 if success

Content of Open function:
```c
int open(char filename[], char option[]){
    pt_file = fopen(filename, option);
    
    if(pt_file == NULL){
        printf("Error to open file\n");
        return 1;
    }

    return 0;
    
}

```
```c
FILE* pt_file;
```

## Print in file

```c
printer("MDRRR");
```

content of function printer
```c
void printer(char message[]){
    if(pt_file == NULL){
        printf("You must initilised file to puts\n");
        
    }
    fputs(message, pt_file);
}
```


## Read Content



```c
getContent();
```
return pointer



Content of getContent()

```c
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
```

## Close file

TO close your file use function close(void);

```c
close();
```

content of function close()
```c
int close(){
    if(pt_file == NULL){
        printf("You must initilised file to close\n");
        return 1;
    }

    fclose(pt_file);
    return 0;
}
```


## Authors

* **Agariy** - *Initial work* - [Agariy](https://github.com/agariy)
* **Security-Corp** - Corporaton - [Security-Corp](https://github.com/Security-corp)

