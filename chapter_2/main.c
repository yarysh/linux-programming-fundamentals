/*
 * Counting sys calls of read and write:
 *     strace -c -e trace=write,read ./main
 * */

#include <stdio.h>

int main() {
    char name[100];
    printf("What is your name? __");
    gets(name);
    return printf("Hello %s\n", name);
}