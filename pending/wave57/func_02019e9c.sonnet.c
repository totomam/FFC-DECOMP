#include "ffc/types.h"

typedef struct Elem {
    uint32_t w0;
    uint32_t w1;
    uint8_t type;
    uint8_t pad[7];
    uint16_t key;
} Elem;

typedef struct List {
    uint32_t w0;
    uint32_t count;
} List;

extern Elem *func_020197b4(void *a, int32_t idx);
extern uint32_t func_02019e1c(void *a);

int32_t func_02019e9c(void *a, List *p, uint32_t key, uint32_t val, uint8_t flag) {
    int32_t lo;
    int32_t hi;
    int32_t mid;
    int32_t i;
    Elem *e;

    if (key != 0) {
        lo = 0;
        hi = (int32_t)p->count - 1;
        while (hi - lo >= 1) {
            mid = (hi + lo) >> 1;
            e = func_020197b4(a, mid);
            if (e->key == 0 || e->key > key) {
                hi = mid;
            } else if (e->key < key) {
                lo = mid + 1;
            } else {
                i = mid;
                for (;;) {
                    e = func_020197b4(a, i);
                    if (e->key == key) {
                        if (e->type == 5 || func_02019e1c(a) == val) {
                            return i;
                        }
                        i--;
                    } else {
                        break;
                    }
                }
                i = mid + 1;
                for (;;) {
                    e = func_020197b4(a, i);
                    if (e->key == key) {
                        if (e->type == 5 || func_02019e1c(a) == val) {
                            return i;
                        }
                        i++;
                    } else {
                        break;
                    }
                }
                break;
            }
        }
        if (flag != 0) {
            return 0;
        }
    }

    if (p->count > 1) {
        for (i = 1; (uint32_t)i < p->count; i++) {
            e = func_020197b4(a, i);
            if (key == e->key) {
                if (e->type == 5 || func_02019e1c(a) == val) {
                    return i;
                }
            }
        }
    }
    return 0;
}
