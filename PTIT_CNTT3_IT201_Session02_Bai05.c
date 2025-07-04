#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, vitri;
    int *a;

    do {
        printf("Nhap so luong phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    a = (int *)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap vi tri muon xoa (0 den %d): ", n - 1);
    scanf("%d", &vitri);

    if (vitri < 0 || vitri >= n) {
        printf("Khong hop le\n");
        free(a);
        return 0;
    }

    for (int i = vitri; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;

    printf("Mang sau khi xoa la:\n[");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");

    free(a);

    return 0;
}
