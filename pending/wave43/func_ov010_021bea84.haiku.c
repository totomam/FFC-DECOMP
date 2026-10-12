#include "ffc/types.h"

extern void func_0201cf34(uint32_t a, uint32_t *b);
extern void *func_0205681c(uint32_t size);
extern void *func_ov005_02195e78(void *p, void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void func_ov005_02196144(void *p, uint8_t v);
extern void func_ov005_021961ac(void *p, uint8_t v);
extern void func_ov010_021bf160(void *self);
extern void *func_ov005_021962f0(void *p, uint32_t a, uint32_t b, uint32_t c);

extern uint32_t data_020b93b8;
extern uint32_t data_ov010_021d173c[];
extern uint32_t data_ov010_021d174c[];

void func_ov010_021bea84(uint8_t *self)
{
    uint32_t buf[38];
    uint32_t *q;
    void *r;

    func_0201cf34(data_020b93b8, buf);
    r = func_0205681c(0xa0);
    if (r != 0) {
        q = data_ov010_021d173c;
        r = func_ov005_02195e78(r, *(void **)(self + 0xb8), *q++, *q, 1, 0);
    }
    *(void **)(self + 0x114) = r;
    func_02056bc0(self + 0x48, r);
    func_ov005_02196144(*(void **)(self + 0x114), (uint8_t)(*(uint32_t *)(self + 0xf8) + 1));
    func_ov005_021961ac(*(void **)(self + 0x114), (uint8_t)((buf[7] << 28) >> 28));
    func_ov010_021bf160(self);
    r = func_0205681c(0x8c);
    if (r != 0) {
        q = data_ov010_021d174c;
        r = func_ov005_021962f0(r, *q++, *q, 0);
    }
    *(void **)(self + 0x118) = r;
    func_02056bc0(self + 0x48, r);
}
