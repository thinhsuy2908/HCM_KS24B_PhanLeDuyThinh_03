#include <stdio.h>

int main() {
    char str[100];

    
    FILE *file = fopen("bt01.txt", "w");

    
    if (file == NULL) {
        printf("Ko the mo file.\n");
        return 1; 
    }

   
    printf("Nhap chuoi can ghi vào file: ");
    fgets(str, sizeof(str), stdin);

   
    fprintf(file, "%s", str);

    fclose(file);

    printf("Chuoi da ghi vao file bt01.txt.\n");

    return 0;
}

