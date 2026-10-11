#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern void func_02019d58(uint32_t x, void *p, void *q, uint32_t d);
extern void func_02056bc0(void *object, void *node);

void func_ov001_0218b420(uint8_t *a, uint32_t b, uint32_t c, uint32_t d) {
    uint32_t off = 0x72c;
    func_02019d58(data_020b8e44, a + off, a + (off + 4), d);
    uint32_t r4 = *(uint32_t *)(a + (off + 4));
    uint8_t *p = a + 0x48;
    void *r1 = *(void **)(a + off);
    func_02056bc0(p, r1);
    func_02056bc0(p, (void *)r4);
}
