#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x37];
    uint8_t flag;
} Elem;

typedef struct {
    uint8_t pad[0x10C];
    Elem *arr;
    volatile uint32_t count;
} Owner;

uint32_t func_ov004_0214fb28(Owner *o) {
    uint32_t n = 0;
    uint32_t i = 0;
    if (o->count) {
        Elem *arr = o->arr;
        do {
            if (arr[i].flag) {
                n++;
            }
            i++;
        } while (i < o->count);
    }
    return n;
}
