#include "ffc/types.h"

typedef void (*func_ptr_t)(int, void *, int);

typedef struct {
    void *a;
    void *b;
} Entry;

void func_ov000_0215716c(uint8_t *obj, Entry *arr, int n)
{
    func_ptr_t f = *(func_ptr_t *)(obj + 0x1014);
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i].a != 0) {
            f(0, arr[i].a, 0);
            arr[i].a = 0;
        }
        if (arr[i].b != 0) {
            f(0, arr[i].b, 0);
            arr[i].b = 0;
        }
    }
}
