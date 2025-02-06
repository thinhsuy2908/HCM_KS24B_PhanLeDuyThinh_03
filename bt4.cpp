#include <stdio.h>

int main() {
    char str[100];

    FILE *file = fopen("bt01.txt", "r");

    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    if (fgets(str, sizeof(str), file) != NULL) {
        printf("Dong dau tien trong file: %s", str);
    } else {
        printf("File trong hoac khong the doc duoc.\n");
    }

    fclose(file);

    return 0;
}

