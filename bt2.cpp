#include <stdio.h>

int main() {
    char a;

    FILE *file = fopen("bt01.txt", "r");

   
    if (file == NULL) {
        printf("ko the mo file.\n");
        return 1;
    }

    
    a = fgetc(file);

   
    if (a != EOF) {
        printf("Ky tu dau tien trong file: %c\n", a);
    } else {
        printf("File trong.\n");
    }

    fclose(file);

    return 0;
}

