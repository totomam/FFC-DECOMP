#include "ffc/types.h"

extern void *data_020b93b8;
extern uint32_t data_ov007_021c2e58[];

extern void func_0201af7c(void *a, uint32_t b, uint32_t *c);
extern void *func_0205681c(uint32_t size);
extern void *func_02069210(void *object);
extern void func_02069320(void *object, uint32_t value);
extern void func_020695ec(void *self, void *obj);
extern void func_020697ac(void *self, void *obj);

void func_ov007_0219e4c4(uint8_t *self)
{
    uint32_t buf[11];
    uint32_t i;
    void *p;

    *(uint32_t *)(self + 0xd0) = 0;
    *(uint8_t *)(self + 0xd4) = 1;

    for (i = 0; i < 2; i++) {
        func_0201af7c(data_020b93b8, i, buf);
        if (((buf[5] << 30) >> 31) != 0) {
            break;
        }
    }

    p = func_0205681c(0x94);
    if (p != 0) {
        func_02069210(p);
        *(uint32_t **)p = data_ov007_021c2e58;
        func_02069320(p, 8);
    }

    *(void **)(self + 0xc8) = p;
    func_020695ec(self, p);

    if (**(uint32_t ***)(self + 0xb8) == (uint32_t *)2) {
        func_020697ac(self, *(void **)(self + 0xc8));
    }
}
