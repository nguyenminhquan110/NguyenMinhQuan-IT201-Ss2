#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, vitri, giatri;
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

    printf("Nhap vi tri muon chinh sua (0 den %d): ", n - 1);
    scanf("%d", &vitri);

    if (vitri < 0 || vitri >= n) {
        printf("Vi tri khong hop le.\n");
        free(a);
        return 1;
    }

    printf("Nhap gia tri moi tai vi tri do: ");
    scanf("%d", &giatri);

    a[vitri] = giatri;

    printf("Mang sau khi chinh sua la:\n[");
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");

    free(a);

    return 0;
}
