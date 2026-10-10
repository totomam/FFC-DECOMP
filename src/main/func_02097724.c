#include "ffc/types.h"

extern void func_0209789c(void *p, int x);
extern uint8_t data_020b3634[];

typedef struct {
    void *vtbl;
    uint8_t pad[0x3a - 4];
    uint8_t flag;
    uint8_t pad2[0x3c - 0x3b];
    uint32_t val;
} Obj;

Obj *func_02097724(Obj *p, uint32_t b) {
    func_0209789c(p, 0);
    p->vtbl = data_020b3634;
    p->flag = 1;
    p->val = b;
    return p;
}
