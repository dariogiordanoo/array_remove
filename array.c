#include "array.h"

void array_remove(double *arr, size_t *pn, size_t pos) {
    if (pos >= *pn) {
        return;  // La posizione è fuori dai limiti, non facciamo nulla
    }

    // Spostiamo gli elementi successivi a sinistra
    for (size_t i = pos; i < *pn - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrementiamo la dimensione dell'array
    (*pn)--;
}
