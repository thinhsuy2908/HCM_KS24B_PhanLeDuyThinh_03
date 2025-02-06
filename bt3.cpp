#include <stdio.h>
int main() {
    char str[100];

    
    FILE *file = fopen("bt01.txt", "a");
    
    if (file == NULL) {
        printf("Ko the mo file.\n");
        return 1; 
    }
  
    printf("Nhap chuoi can ghi them vao file: ");
    fgets(str, sizeof(str), stdin);

   
    fprintf(file, "%s", str);

    fclose(file);

    printf("Chuoi da duoc them vao file bt01.txt.\n");

    return 0;
}

