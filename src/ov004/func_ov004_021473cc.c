#include "ffc/types.h"

extern void *func_0203b81c(uint32_t);
extern void *func_0205681c(uint32_t);
extern void func_020095b8(void *, void *);
extern void *func_0200d7bc(void *, void *, void *, uint32_t, uint32_t);
extern void *func_020059cc(void *);
extern uint32_t func_02064390(void *, uint32_t, uint32_t);
extern void func_0200d804(void *, void *);
extern void *func_02069210(void *);
extern void func_020695ec(void *, void *);
extern void func_02069320(void *, uint32_t);
extern void func_02056bc0(void *, void *);
extern void func_020697ac(void *, void *);
extern void func_02069700(void *, uint32_t, uint32_t);
extern uint32_t data_0209e08c[];
extern uint32_t data_ov004_02157d48[];

void func_ov004_021473cc(void *self0) {
    uint8_t *self = (uint8_t *)self0;
    uint8_t tmp[12];
    void *obj;
    void *n;
    uint32_t flag;
    uint32_t zero;
    uint32_t i;
    uint32_t *vt;

    *(void **)(self + 0xc8) = func_0203b81c(5);
    zero = 0;
    flag = 0;
    obj = func_0205681c(0x8c);
    if (obj != 0) {
        func_020095b8(tmp, self + 0xb8);
        flag = 1;
        obj = func_0200d7bc(obj, tmp, *(void **)(self + 0xc8), zero, flag);
    }
    *(void **)(self + 0xcc) = obj;
    if (flag) {
        func_020059cc(tmp);
    }
    func_02064390(*(void **)(self + 0xcc), 0x80, 0x60);
    for (i = 0; i < 5; i++) {
        func_0200d804(*(void **)(self + 0xcc), (void *)data_0209e08c[i]);
    }
    obj = *(void **)(self + 0xcc);
    vt = *(uint32_t **)obj;
    ((void (*)(void *))vt[0x28 / 4])(obj);
    obj = *(void **)(self + 0xcc);
    vt = *(uint32_t **)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(obj, 1, 0);
    *(uint8_t *)(self + 0xb5) = 1;

    n = func_0205681c(0x9c);
    if (n != 0) {
        void *x = *(void **)(self + 0xcc);
        func_02069210(n);
        *(void **)n = data_ov004_02157d48;
        *(void **)((uint8_t *)n + 0x94) = x;
        *(uint32_t *)((uint8_t *)n + 0x98) = 3;
    }
    *(void **)(self + 0xd0) = n;
    func_020695ec(self, n);

    n = func_0205681c(0x9c);
    if (n != 0) {
        void *x = *(void **)(self + 0xcc);
        func_02069210(n);
        *(void **)n = data_ov004_02157d48;
        *(void **)((uint8_t *)n + 0x94) = x;
        *(uint32_t *)((uint8_t *)n + 0x98) = 4;
    }
    *(void **)(self + 0xd4) = n;
    func_020695ec(self, n);
    func_02069320(*(void **)(self + 0xd4), 2);
    {
        void *c8 = *(void **)(self + 0xc8);
        uint8_t *d = self + 0x48;

        func_02056bc0(d, *(void **)(self + 0xcc));
        func_02056bc0(d, c8);
    }
    func_020697ac(self, *(void **)(self + 0xd4));
    func_02069700(self, 0, 0);
}
