#include "ffc/types.h"

extern void func_020704f8(void *inner);
extern void func_ov006_0219c6b8(uint32_t state);
extern void *func_02056aec(void *p);
extern void *func_0205681c(uint32_t size);
extern void func_02056bc0(void *object, void *node);
extern char data_020b2070[];

void func_02070564(uint8_t *p)
{
    uint8_t *inner = *(uint8_t **)(p + 0x80);
    uint32_t state;
    uint8_t *node;
    void *saved;
    uint32_t v;

    if (*(uint32_t *)(inner + 0x40) == 3) {
        v = *(uint32_t *)(p + 0xc);
        v &= ~0xffu;
        v |= 2;
        *(uint32_t *)(p + 0xc) = v;
        return;
    }

    func_020704f8(inner);

    inner = *(uint8_t **)(p + 0x80);
    state = *(uint32_t *)(inner + 0x40);
    if (state != 0) {
        func_ov006_0219c6b8(state);
    }

    saved = func_02056aec(p);
    node = (uint8_t *)func_0205681c(0x1c);
    if (node != 0) {
        inner = *(uint8_t **)(p + 0x80);
        v = *(uint32_t *)(node + 0xc);
        v &= ~0xffu;
        *(uint32_t *)(node + 0xc) = v;
        *(void **)node = data_020b2070;
        *(uint8_t **)(node + 0x14) = inner;
        *(uint32_t *)(node + 0x18) = 3;
    }

    {
        uint8_t *obj = p + 0x14;
        func_02056bc0(obj, node);
        func_02056bc0(obj, saved);
    }
}
