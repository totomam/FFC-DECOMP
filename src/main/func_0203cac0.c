#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern void *func_0203c710(void *self, int x);
extern void *func_0203b720(void *x);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02164db0(void *x);
extern void *func_ov003_0216602c(void *a, void *b, int c, int d, void *e, int f, int g);

void func_0203cac0(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    void *obj;
    void *node;

    if (!p[0xdc]) {
        return;
    }
    node = func_0203c710(a0, 0);
    func_02056bc0(p + 0x14, node);
    if (!*(void **)(p + 0xe0)) {
        return;
    }
    node = func_0203b720(*(void **)(p + 0xe0));
    func_02056bc0(p + 0x14, node);
    obj = func_0205681c(0x14);
    node = obj;
    if (obj) {
        node = func_ov003_02164db0(obj);
    }
    func_02056bc0(p + 0x14, node);
    obj = func_0205681c(0x9c);
    node = obj;
    if (obj) {
        node = func_ov003_0216602c(obj, *(void **)(p + 0x88), 2, 0, *(void **)(p + 0xe0), 1, 0);
    }
    func_02056bc0(p + 0x14, node);
}
