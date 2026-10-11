#include "ffc/types.h"

extern void func_02088f30(uint32_t x);

typedef struct {
    uint8_t pad[0x38];
    uint16_t *tab;
} Obj;

void func_0201cde8(Obj *p, uint32_t idx, uint16_t val) {
    if (p->tab[idx]) {
        func_02088f30(p->tab[idx]);
    }
    p->tab[idx] = val;
}
