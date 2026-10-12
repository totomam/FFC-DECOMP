#include "ffc/types.h"

extern void func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *dst, void *src);
extern uint32_t func_0204f7ec(const void *object);
extern void func_ov003_02168040(void *obj, uint32_t v, void *b, int c);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern uint32_t func_0203b6f0(void);
extern uint8_t *func_0205681c(uint32_t size);
typedef struct { int32_t x, y; } V;
extern void func_02057210(void *obj, V a, V b);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void *func_02056aec(void *object);
extern uint32_t func_0203b75c(uint32_t x);
extern uint8_t data_ov003_0217b208;
extern uint8_t data_0213df18;
extern uint8_t data_ov003_0217a7dc;

void func_ov003_02167e34(uint8_t *p)
{
    V sm;
    V a1, b1, a0, b0;
    uint8_t b34[0xc];
    uint8_t b40[0x44];
    uint32_t *q;
    uint32_t *pc;
    uint32_t cnt;
    int mode;
    uint8_t *obj;
    uint8_t *n;
    uint8_t *st;
    uint8_t *r6;
    uint8_t flag;
    uint8_t set;

    mode = *(int *)(p + 0x88);
    cnt = *(uint32_t *)(p + 0x88) + 1;
    pc = (uint32_t *)(p + 0x88);
    *pc = cnt;

    switch (mode) {
    case 0:
        func_02086ad4(b40, (uint32_t)&data_ov003_0217b208, *(int *)(p + 0x84) - 1);
        func_02005988(b34, b40);
        func_02056bc0(p + 0x14, (void *)func_0204f7ec(&data_0213df18));
        return;
    case 1: {
        *(uint32_t *)(p + 0x98) = func_0203b6f0();
        func_02056bc0(p + 0x48, *(void **)(p + 0x98));
        obj = *(uint8_t **)(p + 0x8c);
        ((void (*)(void *, uint32_t, uint32_t))(*(uint32_t **)obj)[0x38 / 4])(obj, 0x100, 0);
        obj = *(uint8_t **)(p + 0x8c);
        ((void (*)(void *))(*(uint32_t **)obj)[0x28 / 4])(obj);
        func_02056bc0(p + 0x48, *(void **)(p + 0x8c));
        n = func_0205681c(0x54);
        if (n != 0) {
            a0.x = 0x20; a0.y = 0; b0.x = -0x20; b0.y = 0;
            func_02057210(n, a0, b0);
            *(uint32_t *)n = (uint32_t)&data_ov003_0217a7dc;
        }
        *(uint8_t **)(p + 0x90) = n;
        *(uint32_t *)(n + 0x24) = 0x78;
        if (n[0x15] != 0) {
            *(uint32_t *)(n + 0x1c) = 0x78 << 4;
        }
        n = func_0205681c(0x54);
        if (n != 0) {
            a1.x = 0xe0; a1.y = 0; b1.x = -0xe0; b1.y = 0;
            func_02057210(n, a1, b1);
            *(uint32_t *)n = (uint32_t)&data_ov003_0217a7dc;
        }
        *(uint8_t **)(p + 0x94) = n;
        *(uint32_t *)(n + 0x24) = 0x78;
        if (n[0x15] != 0) {
            *(uint32_t *)(n + 0x1c) = 0x78 << 4;
        }
        *(uint32_t *)(*(uint8_t **)(p + 0x94) + 0x30) = (uint32_t)~0xc;
        func_02056bc0(*(void **)(p + 0x98), *(void **)(p + 0x94));
        return;
    }
    case 2: {
        uint8_t *a, *b;
        
        *pc = cnt - 1;
        st = *(uint8_t **)(p + 0x98);
        set = st[0x12];
        r6 = st + 0x1c;
        if (set != 0) {
            func_0208763c(r6);
        }
        flag = (*(uint32_t *)(st + 0x14) == 0) ? 1 : 0;
        if (set != 0) {
            func_02087678(r6);
        }
        if (flag != 0) {
            obj = func_02056aec(p);
            n = (uint8_t *)func_0203b75c(1);
            func_02056bc0(p + 0x14, func_02056aec(*(void **)(p + 0x8c)));
            func_02056bc0(p + 0x14, n);
            func_02056bc0(p + 0x14, obj);
            return;
        }
        a = *(uint8_t **)(p + 0x90);
        b = *(uint8_t **)(p + 0x94);
        sm.x = *(uint32_t *)(a + 0x34) + *(uint32_t *)(b + 0x34);
        sm.y = *(uint32_t *)(a + 0x38) + *(uint32_t *)(b + 0x38);
        obj = *(uint8_t **)(p + 0x8c);
        ((void (*)(void *, uint32_t, uint32_t))(*(uint32_t **)obj)[0xc / 4])(obj, sm.x, sm.y);
    }
    }
}
