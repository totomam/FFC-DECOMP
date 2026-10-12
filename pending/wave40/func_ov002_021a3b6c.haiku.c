#include "ffc/types.h"

typedef struct {
    uint8_t pad[8];
    uint32_t count;
    uint32_t off;
} Hdr;

extern uint32_t data_020b8e44;
extern Hdr *func_02017700(uint32_t);
extern uint32_t *func_02056830(uint32_t);
extern uint32_t func_ov002_021a1acc(uint32_t);
extern uint32_t func_0206c184(uint32_t first, uint32_t second);
extern void func_02056858(uint32_t *);

uint32_t func_ov002_021a3b6c(uint32_t a, uint32_t b) {
    Hdr *h;
    uint32_t *arr;
    uint32_t n;
    uint32_t i;
    uint32_t idx;
    uint32_t ret;

    h = func_02017700(data_020b8e44);
    n = 0;
    arr = func_02056830(h->count * 4);
    for (i = 0; i < h->count; i++) {
        if (b == *((uint8_t *)h + h->off + i * 12 + 8)) {
            arr[n] = i;
            n++;
        }
    }
    idx = func_0206c184(func_ov002_021a1acc(a), n);
    ret = arr[idx];
    if (arr != 0) {
        func_02056858(arr);
    }
    return ret;
}
