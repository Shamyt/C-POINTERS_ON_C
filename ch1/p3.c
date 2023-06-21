#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define     MAX_INPUT 1000


int main( void ){
    //不清楚题意是否是这样
    char ch;
    signed char checksum = -1;
    // while( ch = getchar() )checksum += ch;       //按ctrl+d或ctrl+z无法退出循环，原因未知
    while ( (ch = getchar()) != EOF && ch != '\0' ) checksum += ch;
    printf( "%d\n", checksum );
    return EXIT_SUCCESS;
}