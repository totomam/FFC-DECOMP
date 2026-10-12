#include "ffc/types.h"

extern uint32_t func_0203b6f0(void *x);
extern void *func_02056bc0(void *object, uint32_t node);
extern void func_02055ae8(void *a, void *b);
typedef struct { uint32_t a, b; } S;
extern uint32_t data_ov007_021c4124[2];

void func_ov007_021a2850(uint8_t *p) {
    uint32_t v;
    void *r;
    uint8_t *q;
    uint32_t *d;
    uint32_t a, b;
    v = func_0203b6f0(p);
    *(uint32_t *)(p + 0xec) = v;
    r = func_02056bc0(p + 0x48, v);
    v = func_0203b6f0(r);
    *(uint32_t *)(p + 0xf4) = v;
    r = func_02056bc0(p + 0x48, v);
    v = func_0203b6f0(r);
    *(uint32_t *)(p + 0xf8) = v;
    func_02056bc0(p + 0x48, v);
    q = p;
    if (p) {
        q = p + 0x80;
    }
    func_02055ae8(*(uint8_t **)(p + 0xcc) + 0x14, q);
    *(S *)(p + 0xb8) = *(S *)data_ov007_021c4124;
}
