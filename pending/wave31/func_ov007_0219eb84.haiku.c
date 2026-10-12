#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern uint8_t *func_0205681c(uint32_t size);
extern void func_02056c9c(uint8_t *obj, uint32_t x);
extern uint32_t func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern char data_ov007_021c3098[];

void func_ov007_0219eb84(uint8_t *p)
{
    uint8_t *n;
    void *r6;

    func_02021338(0xcf);
    *(p + 0xd0) = 1;
    n = func_0205681c(0x90);
    if (n != 0) {
        r6 = *(void **)(p + 0xb8);
        func_02056c9c(n, 0);
        *(char **)n = data_ov007_021c3098;
        *(uint8_t **)(n + 0x80) = p;
        *(void **)(n + 0x84) = r6;
        *(uint32_t *)(n + 0x88) = 0;
    }
    void *t = (void *)func_0203b708(0x1e);
    uint8_t *q = p + 0x14;
    func_02056bc0(q, t);
    func_02056bc0(q, n);
}
