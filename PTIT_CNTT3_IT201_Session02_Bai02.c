#include <stdio.h>

int main() {
    int n, x;
    int a[100];

    do {
        printf("Nhap so luong phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

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

    return 0;
}
