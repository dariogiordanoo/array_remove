#include <stdio.h>
#include "array.h"

int main() {
    size_t n = 5;
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};

    printf("Array prima della rimozione:\n");
    for (size_t i = 0; i < n; i++) {
        printf("%f ", arr[i]);
    }
    printf("\n");

    size_t pos = 2;  // Supponiamo di voler rimuovere l'elemento alla posizione 2 (il 3.0)

    array_remove(arr, &n, pos);

    printf("Array dopo la rimozione dell'elemento alla posizione %zu:\n", pos);
    for (size_t i = 0; i < n; i++) {
        printf("%f ", arr[i]);
    }
    printf("\n");

    return 0;
}
