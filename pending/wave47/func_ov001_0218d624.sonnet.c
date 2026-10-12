#include "ffc/types.h"

extern void *func_ov001_0218de3c(void *self, int id, int flag, int r4val, int extra);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov001_0218de9c(void *self, int flag);
extern void *func_02056aec(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_02008ce8(void *p, void *node, int r2, uint32_t r3);
extern void *func_ov001_0218b650(uint32_t a, uint32_t b, uint32_t c, int d);
extern uint32_t data_ov001_0219491c[2];
extern uint32_t data_020b93b8;
extern uint32_t data_ov001_02194924[2];

void func_ov001_0218d624(uint8_t *self) {
    void *d, *c, *a, *e, *r7, *r6;
    int flag = 0;

    if (*(uint32_t *)(self + 0x66c) != 0) {
        flag = 1;
    }
    r6 = func_ov001_0218de3c(self, 0x36, 1, flag, 0);
    func_02056bc0(self + 0x48, r6);
    d = func_ov001_0218de9c(self, flag);
    c = func_02056aec(r6);
    r7 = func_0205681c(0x94);
    if (r7 != 0) {
        r7 = func_02008ce8(r7, r6, 0, *(uint32_t *)(self + 0x98));
    }
    a = func_ov001_0218b650(data_020b93b8, data_ov001_0219491c[0], data_ov001_0219491c[1], 1);
    e = func_0205681c(0x94);
    if (e != 0) {
        e = func_02008ce8(e, r6, 0, *(uint32_t *)(self + 0x98));
    }
    func_02056bc0(self + 0x14, e);
    func_02056bc0(self + 0x14, a);
    func_02056bc0(self + 0x14, r7);
    func_02056bc0(self + 0x14, c);
    func_02056bc0(self + 0x14, d);
    *(uint32_t *)(self + 0xb0) = data_ov001_02194924[0];
    *(uint32_t *)(self + 0xb4) = data_ov001_02194924[1];
}
