#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, vitri, giatri;
    int *a;

    do {
        printf("Nhap so luong phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    a = (int *)malloc((n + 1) * sizeof(int));
    if (a == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap vi tri muon chen (0 den %d): ", n);
    scanf("%d", &vitri);

    if (vitri < 0 || vitri > n) {
        printf("Khong hop le\n");
        free(a);
        return 0;
    }

    printf("Nhap gia tri muon chen: ");
    scanf("%d", &giatri);

    for (int i = n; i > vitri; i--) {
        a[i] = a[i - 1];
    }
    a[vitri] = giatri;
    n++;

    printf("Mang sau khi chen la:\n[");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");

    free(a);

    return 0;
}
