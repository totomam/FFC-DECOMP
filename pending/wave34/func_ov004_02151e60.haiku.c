#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x36];
    uint8_t flag;
    uint8_t tail;
} Elem;

typedef struct {
    uint8_t pad[0x10C];
    Elem *arr;
    volatile uint32_t count;
} Owner;

uint32_t func_ov004_02151e60(Owner *o) {
    uint32_t n = 0;
    uint32_t i = 0;
    for (; i < o->count; i++) {
        if (o->arr[i].flag) {
            n++;
        }
    }
    return n;
}
