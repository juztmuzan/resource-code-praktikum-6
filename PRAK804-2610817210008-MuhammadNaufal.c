#include <stdio.h>

struct Peserta {
    char nama[50];
    int umur;
    int skor;
};

int main() {
    int n;
    struct Peserta data[10];

    scanf("%d", &n);

    int idxTertinggi = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", data[i].nama, &data[i].umur, &data[i].skor);
        if (data[i].skor > data[idxTertinggi].skor) {
            idxTertinggi = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n", data[idxTertinggi].nama, data[idxTertinggi].skor);

    return 0;
}
