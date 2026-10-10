#include "ffc/types.h"

extern void func_0205f234(uint8_t *a, int b);

typedef struct {
    uint32_t f0;
    uint8_t *f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} Obj;

void func_0205f4d8(Obj *p, int x) {
    uint8_t *e = p->f4;
    uint32_t n = p->f10;
    while (n != 0) {
        func_0205f234(e, x);
        n--;
        e += 0x28;
    }
}
