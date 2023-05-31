#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Eşleşen elemanın dizideki konumunu döndürür
        }
    }
    return -1; // Eşleşen eleman bulunamazsa -1 döndürür
}

int main() {
    int n;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);

    int arr[n];
    printf("Dizinin elemanlarını girin:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Aranacak elemanı girin: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);
    if (result == -1) {
        printf("Aranan eleman dizide bulunamadı.\n");
    } else {
        printf("Aranan eleman dizinin %d. konumunda bulundu.\n", result + 1);
    }

    return 0;
}
