#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} DataPair;

extern void func_ov010_021c8cf4(void *p, uint8_t v);
extern void func_02021338(uint32_t v);
extern uint32_t func_ov010_021c8d58(void *p, uint32_t a, uint32_t b, int32_t c);
extern void *func_0203b72c(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov010_021c90b4(void *p);
extern void func_ov010_021c8da0(void *p, int32_t v);
extern DataPair data_ov010_021d1bc4;

void func_ov010_021c8cf8(void *p, int32_t n)
{
    uint8_t *base = (uint8_t *)p;
    uint32_t *slot;
    uint32_t r7;
    void *r0;
    uint8_t *node;
    DataPair *d;

    if (n > 4) {
        return;
    }
    slot = (uint32_t *)(base + 0x114);
    if (*slot == (uint32_t)n) {
        return;
    }
    *slot = n;
    func_ov010_021c8cf4(p, (uint8_t)n);
    func_02021338(0xb7);
    d = &data_ov010_021d1bc4;
    r7 = func_ov010_021c8d58(p, d->a, d->b, n);
    r0 = func_0203b72c();
    node = base + 0x14;
    func_02056bc0(node, r0);
    func_02056bc0(node, (void *)r7);
    func_ov010_021c90b4(p);
    func_ov010_021c8da0(p, n);
}
