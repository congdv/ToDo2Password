#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char getChar(char c){
    switch(c){
    case 'l':
        return '1';
    case 'o':
        return '0';
    case ' ':
        return '@';
    case 'g':
        return '9';
    case 'e':
        return '3';
    case 'i':
        return '!';
    default:
        return c;
    }
}

char *generate(const char *str){
    int lengthString = strlen(str) + 1;
    
    char *generateString = (char *)malloc(lengthString * sizeof(char));
    char *temp = NULL;
    temp = generateString;
    //generate string with format
    while(*str != '\0'){
        *generateString = getChar(*str);
        str++;
        generateString++;
    }
    *generateString = '\0';
    return temp;
}

int main(int argc, char **argv){
    if(argc == 2){
        char *generateString = generate(argv[1]);
        printf("Generate Password %s\n",generateString);
    }else {
        fprintf(stdout,"USAGE: %s string\n",argv[0]);
    }
    return 0;
}
