#include "ffc/types.h"

extern void func_020095b8(void *dst, const void *src);
extern void func_0205d508(void *a, const void *b, uint32_t c);
extern void func_020059cc(void *object);
extern uint32_t func_0205db5c(const void *object);
extern uint32_t func_0205db6c(const void *object);
extern uint32_t func_0205db04(const void *object);
extern void *func_02056830(uint32_t size);
extern void func_0205da5c(const void *object);
extern uint32_t func_02085930(const void *object, uint32_t size, void *buf);
extern uint32_t func_0205db1c(const void *object);
extern void *func_0205da88(const void *object);
extern void func_020849c4(void *dst, const void *src, uint32_t n);
extern void func_ov013_021bedf4(void *base, const void *elem, uint32_t flag);
extern void *func_0205681c(uint32_t size);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_0206e288(void *a, void *b);
extern void func_0205d620(const void *object);
extern uint8_t data_020ac878[];

void func_ov013_021be7a0(uint8_t *self)
{
    uint32_t i;
    uint32_t flag;
    uint8_t objA[12];
    uint32_t elem[7];
    uint8_t objB[0x38];
    uint8_t objC[12];
    uint32_t sz;
    uint32_t r6;
    uint32_t n;
    uint32_t s;
    uint8_t *base;
    uint32_t *e;
    void *blk;
    void *mem;
    void *mem2;
    uint32_t k;

    for (i = 0; i < *(uint32_t *)(self + 0x10c); i++) {
        func_020095b8(objC, *(uint8_t **)(self + 0x108) + 12 * i);
        func_020095b8(objA, objC);
        func_0205d508(objB, objA, 0);
        func_020059cc(objA);
        r6 = func_0205db5c(objB) * func_0205db6c(objB);
        if (func_0205db04(objB) == 0) {
            r6 = r6 >> 1;
        }
        blk = func_02056830((r6 + 0x3ff) & 0xfffffc00);
        func_0205da5c(objB);
        sz = func_02085930(objB, r6, blk);
        elem[0] = func_0205db04(objB);
        elem[1] = func_0205db5c(objB);
        elem[2] = func_0205db6c(objB);
        elem[3] = func_0205db1c(objB);
        elem[4] = sz;
        mem = func_02056830(0x40);
        elem[5] = (uint32_t)mem;
        s = func_0205db1c(objB) << 5;
        func_020849c4(func_0205da88(objB), mem, s);
        elem[6] = (uint32_t)blk;

        n = *(uint32_t *)(self + 0x124);
        if (n < *(uint32_t *)(self + 0x128)) {
            *(uint32_t *)(self + 0x124) = n + 1;
            base = *(uint8_t **)(self + 0x120);
            e = (uint32_t *)(base + 0x1c * n);
            e[0] = elem[0];
            e[1] = elem[1];
            e[2] = elem[2];
            e[3] = elem[3];
            e[4] = elem[4];
            e[5] = elem[5];
            e[6] = elem[6];
        } else {
            flag = 0;
            func_ov013_021bedf4(self + 0x120, elem, *(uint8_t *)&flag);
        }

        mem2 = func_0205681c(0x64);
        if (mem2 != 0) {
            ((uint32_t *)mem2)[2] = 0;
            ((uint32_t *)mem2)[3] = 0x100ad;
            ((uint32_t *)mem2)[0] = (uint32_t)data_020ac878;
            ((uint32_t *)mem2)[4] = elem[0];
            ((uint32_t *)mem2)[5] = elem[1];
            ((uint32_t *)mem2)[6] = elem[2];
            ((uint32_t *)mem2)[7] = elem[3];
            func_02084ca4((uint8_t *)mem2 + 0x20, mem, 0x40);
            ((uint32_t *)mem2)[0x18] = elem[4];
        }
        func_0206e288(*(void **)(self + 0xfc), mem2);
        func_0205d620(objB);
        func_020059cc(objC);
    }
}
