#include "ffc/types.h"

extern void *data_0213df18;
extern uint32_t data_0213df20;
extern void *data_020b93b8;
extern uint8_t data_ov003_0217b1c4[];

extern uint32_t func_0204f7ec(const void *object);
extern uint32_t func_0201bf6c(void *a, uint32_t b);
extern void func_0203919c(void *dst, uint32_t src);
extern void func_02050ea4(void *dst, void *src, uint32_t n);
extern void *func_020059cc(void *object);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, void *src);
extern void func_020095b8(void *dst, void *src);
extern void *func_020333ac(void *obj, uint32_t a, void *b, void *c, uint32_t d);
extern void *func_02033420(void *obj, void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern void func_0200958c(void *obj);
extern void func_0201bf5c(void *a, uint32_t b, uint32_t c);

#define FLD32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

void func_ov003_021663e4(uint8_t *p)
{
    uint8_t f[0x4c];
    uint32_t saved;
    uint32_t st;
    void *r7;

    st = FLD32(p, 0x8c);
    FLD32(p, 0x8c) = FLD32(p, 0x8c) + 1;
    switch (st) {
    case 0:
        return;
    case 1: {
        void *nm;
        int r6, r4;
        uint32_t v = func_0204f7ec(data_0213df18);
        saved = data_0213df20;
        data_0213df20 = v;
        FLD32(p, 0x90) = func_0201bf6c(data_020b93b8, FLD32(p, 0x84));
        func_0203919c(f + 0x34, FLD32(p, 0x88));
        func_02050ea4(f + 0x40, f + 0x34, 10);
        func_020059cc(f + 0x34);
        r6 = 0;
        r4 = 0;
        r7 = func_0205681c(0xb8);
        if (r7 != 0) {
            if (FLD32(f, 0x44) == 0) {
                nm = f + 0x28;
                func_02005988(nm, data_ov003_0217b1c4);
                r6 = 1;
            } else {
                nm = (void *)FLD32(f, 0x40);
            }
            func_020095b8(f + 0x1c, nm);
            r4 = 1;
            r7 = func_020333ac(r7, func_0204f7ec(data_0213df18), f + 0x1c, p + 0x90, 0);
        }
        if (r4 != 0) {
            func_020059cc(f + 0x1c);
        }
        if (r6 != 0) {
            func_020059cc(f + 0x28);
        }
        if (FLD32(f, 0x44) >= 3) {
            func_020095b8(f + 0x10, (uint8_t *)FLD32(f, 0x40) + 0xc);
            func_020095b8(f + 0x4, (uint8_t *)FLD32(f, 0x40) + 0x18);
            func_02033420(r7, f + 0x10, f + 0x4);
            func_020059cc(f + 0x4);
            func_020059cc(f + 0x10);
        }
        func_02056bc0(p + 0x14, r7);
        func_0200958c(f + 0x40);
        data_0213df20 = saved;
        return;
    }
    case 2: {
        uint32_t flag = (FLD32(p, 0x90) != 0);
        func_0201bf5c(data_020b93b8, FLD32(p, 0x84), flag);
        FLD32(p, 0xc) = (FLD32(p, 0xc) & ~0xffu) | 2;
    }
    }
}
