#include "ffc/types.h"

extern void func_02062848(void *object);
extern void func_020095b8(void *a, void *b);
extern void func_020634e0(void *a, void *b, uint32_t c);
extern void *func_020059cc(void *object);
extern uint32_t func_02063578(const void *object);
extern void *func_0205f81c(void *a, void *b, uint32_t c);
extern void func_02063d00(void *a, uint32_t b);
extern uint8_t data_020b16d8[];

void *func_02063c28(void *p0, void *p1, void *p2, void *p3, uint32_t p5)
{
    uint8_t buf[12];
    uint8_t *self = (uint8_t *)p0;
    uint8_t *src = (uint8_t *)p2;

    func_02062848(self);
    *(void **)(self + 0x00) = data_020b16d8;
    *(uint32_t *)(self + 0x14) = *(uint32_t *)(src + 0x14);

    func_020095b8(buf, p1);
    func_020634e0(self + 0x18, buf, 0);
    func_020059cc(buf);

    *(void **)(self + 0x1c) = p2;
    *(void **)(self + 0x38) = p3;

    if (func_02063578(self + 0x18) != 0) {
        uint32_t v = func_02063578(self + 0x18);
        void *r = func_0205f81c(*(void **)(self + 0x1c), (void *)v, p5);
        *(void **)(self + 0x20) = r;
        *(uint32_t *)(self + 0x24) = *(uint32_t *)((uint8_t *)r + 4);
    }

    func_02063d00(self, p5);
    return self;
}
