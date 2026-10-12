#include "ffc/types.h"
typedef struct { uint32_t a, b; } S2;

extern void *func_0203b688(void);
extern void *func_ov007_021aaf30(void *a, S2 b);
extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218ed2c(void *p, uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern S2 data_ov007_021c4e7c;
extern void *data_020b8e44;

void *func_ov007_021aaed4(void *a)
{
    void *obj;
    void *r6;
    void *node;

    obj = func_0203b688();
    r6 = func_ov007_021aaf30(a, data_ov007_021c4e7c);
    node = func_0205681c(0xb8);
    if (node != 0) {
        node = func_ov001_0218ed2c(node, *(uint32_t *)data_020b8e44, *(uint32_t *)((uint8_t *)a + 0xbc), (uint8_t *)a + 0xd4, 1, 0);
    }
    func_02056bc0(obj, node);
    func_02056bc0(obj, r6);
    return obj;
}
