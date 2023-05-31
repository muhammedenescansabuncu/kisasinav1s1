#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // E�le�en eleman�n dizideki konumunu d�nd�r�r
        }
    }
    return -1; // E�le�en eleman bulunamazsa -1 d�nd�r�r
}

int main() {
    int n;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);

    int arr[n];
    printf("Dizinin elemanlar�n� girin:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Aranacak eleman� girin: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);
    if (result == -1) {
        printf("Aranan eleman dizide bulunamad�.\n");
    } else {
        printf("Aranan eleman dizinin %d. konumunda bulundu.\n", result + 1);
    }

    return 0;
}
