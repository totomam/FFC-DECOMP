#include "ffc/types.h"

extern void func_02037544(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021bce1c(void *a, void *b, void *c, void *d, uint32_t e);
extern void *func_ov001_0218dde0(void *p, int x);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern uint32_t data_ov001_02194884[2];

void func_ov001_0218c5fc(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    void *r6;
    void *o;
    uint32_t a, b;

    func_02037544(p);
    *(uint32_t *)(p + 0x6fc) = 0;
    r6 = func_0205681c(0x77 << 2);
    if (r6 != 0) {
        r6 = func_ov007_021bce1c(r6, p, (void *)((uint32_t *)data_020b8e44)[2], p + 0x6d4, 0);
    }
    o = func_ov001_0218dde0(p, 0);
    func_02056bc0(o, r6);
    a = data_ov001_02194884[0];
    b = data_ov001_02194884[1];
    *(uint32_t *)(p + 0xb0) = a;
    *(uint32_t *)(p + 0xb4) = b;
}
