#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int *ptr = &n;

    printf("Nilai variabel = %d\n", n);
    printf("Alamat variabel = %p\n", (void *)&n);
    printf("Nilai melalui pointer = %d\n", *ptr);

    *ptr *= 2;

    printf("Nilai setelah diubah lewat pointer = %d\n", n);

    return 0;
}