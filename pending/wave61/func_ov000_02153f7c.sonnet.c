#include "ffc/types.h"
extern void func_ov000_0215355c(void*);
extern uint8_t func_ov000_02154424(int);
typedef struct { uint8_t lo:4; uint8_t hi:4; } Nib;
int func_ov000_02153f7c(uint8_t *p) {
    Nib *n = (Nib*)(p + 0x14bb);
    uint8_t *q = p + 0x14c5;
    *q = 0;
    n->hi = n->lo + 1;
    func_ov000_0215355c(p);
    p[0x14c1] = func_ov000_02154424(1);
    return 3;
}
