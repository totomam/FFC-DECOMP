#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b5ae4(void *a, void *b);
extern void *func_ov001_0218dde0(void *obj, int x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c6d6c[2];

typedef struct {
    uint8_t pad[0xb0];
    uint32_t w0;
    uint32_t w1;
    uint8_t pad2[8];
    uint32_t c0;
    uint32_t c4;
} Obj;

void func_ov007_021b6b34(void *obj)
{
    Obj *p = (Obj *)obj;
    void *r5;
    void *q;
    uint32_t a;
    uint32_t b;

    p->c0 = 0x5f5e100;
    p->c4 = 0;
    r5 = func_0205681c(0x140);
    if (r5 != 0) {
        r5 = func_ov007_021b5ae4(r5, &p->c0);
    }
    q = func_ov001_0218dde0(p, 1);
    func_02056bc0(q, r5);
    a = data_ov007_021c6d6c[0];
    b = data_ov007_021c6d6c[1];
    p->w0 = a;
    p->w1 = b;
}
