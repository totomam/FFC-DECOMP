#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    void *vt;
    uint8_t pad[0x7c];
    Pair pair;
} Obj;

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t arg);
extern uint8_t data_020b1cf0[];
extern Pair data_020b2050;

void *func_0206ebe8(void) {
    Obj *p = (Obj *)func_0205681c(0x8c);
    if (p != 0) {
        func_02056c9c(p, 0);
        p->vt = (void *)data_020b1cf0;
        p->pair = data_020b2050;
    }
    return p;
}
