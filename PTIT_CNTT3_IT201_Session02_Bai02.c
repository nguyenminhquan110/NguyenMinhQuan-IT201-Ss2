#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x;
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

    printf("Nhap so can dem: ");
    scanf("%d", &x);

    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            dem++;
        }
    }

    printf("So lan xuat hien cua %d trong mang la: %d\n", x, dem);

    free(a);

    return 0;
}
