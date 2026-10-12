#include "ffc/types.h"

extern void func_02056c9c(void *self, uint32_t zero);
extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void func_02056bc0(void *object, void *node);
extern char data_020b26f8[];
extern char data_020b0b68[];
extern char data_020b0b54[];
extern void *data_0213e1fc;

void *func_02076180(uint8_t *self, uint32_t a, uint32_t b) {
    uint8_t *obj;
    uint32_t t;

    func_02056c9c(self, 0);
    *(void **)self = data_020b26f8;
    *(uint32_t *)(self + 0x80) = a;
    *(uint32_t *)(self + 0x84) = b;
    *(uint32_t *)(self + 0x88) = 0;

    obj = (uint8_t *)func_0205681c(0x34);
    if (obj != 0) {
        t = *(uint32_t *)(obj + 0xc);
        t &= ~0xffu;
        *(uint32_t *)(obj + 0xc) = t;
        *(void **)obj = data_020b0b68;
        func_02087620(obj + 0x1c);
        t = obj[0x10];
        t &= ~0xffu;
        obj[0x10] = t;
        t = obj[0x11];
        t &= ~0xffu;
        obj[0x11] = t;
        t = obj[0x12];
        t &= ~0xffu;
        obj[0x12] = t;
        *(uint32_t *)(obj + 0x14) = 0;
        *(void **)(obj + 0x18) = obj + 0x14;
        *(void **)obj = data_020b0b54;
        t = obj[0x11];
        t &= ~0xffu;
        obj[0x11] = t;
    }

    *(uint8_t **)(self + 0x8c) = obj;
    func_02056bc0(self + 0x48, obj);
    data_0213e1fc = self;
    return self;
}
