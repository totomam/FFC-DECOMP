#include "ffc/types.h"

extern void func_02054254(void);
extern void func_020543b8(void);
extern void *func_0205681c(uint32_t size);
extern void *func_0206c2b0(void *obj, uint32_t name, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0206cb24(void *obj, uint32_t v);
extern void func_0206cbbc(void *obj, uint32_t v);
extern void *func_0200d050(void *p);
extern void func_02056bc0(void *object, void *node);

void func_ov013_021bd36c(uint8_t *self)
{
    void *t;
    void *n;
    uint8_t *q;
    void **pf4;

    if (*(void **)(self + 0xf4) == 0) {
        func_02054254();
        func_020543b8();
        t = func_0205681c(0x3228);
        if (t != 0) {
            t = func_0206c2b0(t, *(uint8_t *)(*(uint8_t **)(self + 0xc8) + 0x5c) ? 0x401328 : 0x401327, 4, 9, 0x10000, 0x200, 0xc2, 3);
        }
        *(void **)(self + 0xf4) = t;
        func_0206cb24(*(void **)(self + 0xf4), 0x4b0);
        if (*(uint8_t *)(*(uint8_t **)(self + 0xc8) + 0x5c) != 0) {
            func_0206cbbc(*(void **)(self + 0xf4), 0x30);
        }
        n = func_0205681c(0x80);
        if (n != 0) {
            n = func_0200d050(n);
        }
        *(void **)(self + 0xf8) = n;
        q = self + 0x48;
        pf4 = (void **)(self + 0xf4);
        func_02056bc0(q, *pf4);
        func_02056bc0(q, n);
    }
}
