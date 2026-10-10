#include "ffc/types.h"

extern void func_02097b54(void *p, int x);
extern uint8_t data_020b36c4[];

typedef struct {
    void *vtbl;
    uint8_t pad[0x3a - 4];
    uint8_t flag;
    uint8_t pad2[0x3c - 0x3b];
    uint32_t val;
} Obj;

Obj *func_02097748(Obj *p, uint32_t b) {
    func_02097b54(p, 0);
    p->vtbl = data_020b36c4;
    p->flag = 1;
    p->val = b;
    return p;
}
