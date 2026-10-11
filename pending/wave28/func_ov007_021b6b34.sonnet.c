#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b5ae4(void *a, void *b);
extern void *func_ov001_0218dde0(void *obj, int x);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a, b; } P;
extern P data_ov007_021c6d6c;

typedef struct {
    uint8_t pad[0xb0];
    P w;
    uint8_t pad2[8];
    uint32_t c0;
    uint32_t c4;
} Obj;

void func_ov007_021b6b34(Obj *p)
{
    void *r5;
    void *q;
    P t;
    p->c0 = 0x5f5e100;
    p->c4 = 0;
    r5 = func_0205681c(0x140);
    if (r5 != 0) {
        r5 = func_ov007_021b5ae4(r5, &p->c0);
    }
    q = func_ov001_0218dde0(p, 1);
    func_02056bc0(q, r5);
    t = data_ov007_021c6d6c;
    p->w = t;
}
