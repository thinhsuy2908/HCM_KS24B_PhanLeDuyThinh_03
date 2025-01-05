/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; 

    printf("hay nhap vao 1 chuoi bat ki: ");
    fgets(input, sizeof(input), stdin); 


    printf("chuoi ban vua nhap la: '%s'\n", input);

    printf("do dai cua chuoi la : %zu\n", strlen(input));

    return 0;
}