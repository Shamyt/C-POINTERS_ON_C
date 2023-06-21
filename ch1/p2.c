#include <stdio.h>
#include <stdlib.h>
/*输入：
djsiajdlaisjdla
sdajisjdsioa
qwedgdsgdfsg
dfjiosjd
dsfqiodjkljmzl
*/
int main( void ){
    char *str = NULL;
    int cnt = 0;
    size_t len = 0;
    size_t nread;
    while( ( nread = getline( &str, &len, stdin ) ) != -1 ){
        //函数返回值 nread 是读取到的字符数（包括换行符）
        //ssize_t getline(char **lineptr, size_t *n, FILE *stream);
        //参数n根据输入字符串的长度不同而自动更新长度

        /*!=前面的赋值表达式一定要加括号，赋值操作的优先级低于不等于操作符，
        如果没有括号会导致 nread 的值实际上是 0 或 1，而不是 getline() 函数的返回值。*/

        str[nread-1] = '\0';    
        /*getline() 函数会将读取到的字符串末尾的换行符（'\n'）也存储在 str 指向的字符数组中，
        因此需要将其替换为字符串结束符（'\0'）*/
        
        printf( "#%d %s\n", cnt++, str );
    }

    free(str);
    return EXIT_SUCCESS;
}