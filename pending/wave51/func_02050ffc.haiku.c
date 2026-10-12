#include "ffc/types.h"

extern void func_02009678(void *dst, void *elem);
extern void func_02037500(void *dst, uint32_t arg);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Elem;

typedef struct {
    Elem *begin;
    uint32_t count;
} Arr;

void func_02050ffc(uint32_t *out, Arr *arr, uint32_t arg) {
    uint32_t i;
    uint8_t *it;

    for (i = 0; i < 3; i++) {
        out[i] = 0;
    }
    it = (uint8_t *)arr->begin;
    while (it != (uint8_t *)arr->begin + arr->count * sizeof(Elem)) {
        func_02009678(out, it);
        if (it != (uint8_t *)arr->begin + arr->count * sizeof(Elem) - sizeof(Elem)) {
            func_02037500(out, arg);
        }
        it += sizeof(Elem);
    }
}
