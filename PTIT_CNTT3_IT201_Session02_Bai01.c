#include <stdio.h>

int main() {
    int n;
    int a[100];

    do {
        printf("Nhap so luong phan tu (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("Gia tri lon nhat trong mang la: %d\n", max);

    return 0;
}
