#include "ffc/types.h"

extern void *func_0203b688(void);
extern void *func_ov007_021aaf30(void *a, uint32_t b, uint32_t c);
extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218ed2c(void *p, uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c4e7c[];
extern void *data_020b8e44;

void *func_ov007_021aaed4(void *a)
{
    void *obj;
    void *r6;
    void *node;
    const uint32_t *d;
    uint32_t x, y;

    obj = func_0203b688();
    d = data_ov007_021c4e7c;
    (void)0;
    x = *d;
    d++;
    y = *d;
    r6 = func_ov007_021aaf30(a, x, y);
    node = func_0205681c(0xb8);
    if (node != 0) {
        node = func_ov001_0218ed2c(node, *(uint32_t *)data_020b8e44, *(uint32_t *)((uint8_t *)a + 0xbc), (uint8_t *)a + 0xd4, 1, 0);
    }
    func_02056bc0(obj, node);
    func_02056bc0(obj, r6);
    return obj;
}
