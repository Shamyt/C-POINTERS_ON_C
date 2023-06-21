#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define     MAX_INPUT 1000


int main( void ){
    char str[MAX_INPUT], maxstr[MAX_INPUT];
    int maxlen = 0;
    while( fgets( str, MAX_INPUT, stdin ) != NULL ){
        int len = strlen( str );
        --len;      
        str[len] = '\0';        //删掉换行符
        if( len > maxlen ){
            maxlen = len;
            strcpy( maxstr, str );
        }
    }
    printf("%s\n", maxstr);


    return EXIT_SUCCESS;
}