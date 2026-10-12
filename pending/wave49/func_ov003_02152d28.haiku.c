#include "ffc/types.h"

extern void *data_020b93b8;
extern void *data_020b8e44;
extern int func_0201bd84(void *obj, uint32_t n);
extern void func_0201cf34(void *obj, void *out);
extern int func_020192f4(void *obj, void *n);
extern void func_ov003_02152fdc(uint8_t *self, void *b);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_0214f81c(void *p, void *x, void *b, uint32_t flag);
extern void func_02056bc0(void *object, void *node);
extern void func_02018254(void *out, void *obj, void *b);
extern uint32_t *func_02052d90(void *mar, uint32_t index);
extern void *func_ov003_02151a94(void *p, void *x, void *b, uint32_t flag);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

struct Loc {
    uint8_t f;
    uint32_t x;
    uint32_t y;
    uint32_t z;
    uint8_t w;
};

void func_ov003_02152d28(uint8_t *a, void *b) {
    uint32_t sw[4];
    uint8_t sw_w;
    uint32_t l14[0x26];
    int r6, r7;
    uint32_t bit;
    uint8_t f1;
    void *p;
    uint32_t *q;
    uint16_t old;

    r7 = 0;
    r6 = 1;
    if (func_0201bd84(data_020b93b8, 0x50) != 0) {
        r7 = 1;
        r6 = 0;
    }
    func_0201cf34(data_020b93b8, l14);
    if (((l14[7] << 0x19) >> 0x1e) == 0 || func_020192f4(data_020b8e44, b) == 0) {
        r7 = 1;
        r6 = 0;
    }
    if (*(uint32_t *)(a + 0xcc) != ((l14[7] << 0x1b) >> 0x1f) || *(void **)(a + 0xd0) != b ||
        *(uint32_t *)(a + 0xd4) != a[0xc8]) {
        r7 = 1;
    }
    if (r7 == 0) {
        return;
    }
    func_ov003_02152fdc(a, b);
    if (r6 == 0) {
        *(uint32_t *)(a + 0xcc) = 2;
        *(void **)(a + 0xd0) = b;
        *(uint32_t *)(a + 0xd4) = 2;
        return;
    }
    *(uint32_t *)(a + 0xcc) = (l14[7] >> 4) & 1;
    *(void **)(a + 0xd0) = b;
    *(uint32_t *)(a + 0xd4) = a[0xc8];
    if (((l14[7] << 0x1b) >> 0x1f) == 0) {
        p = func_0205681c(0x4f8);
        if (p) {
            p = func_ov003_0214f81c(p, *(void **)(a + 0x9c), b, a[0xc8] == 1);
        }
        old = *(volatile uint16_t *)0x4000208;
        *(volatile uint16_t *)0x4000208 = 0;
        f1 = old != 0;
        func_02056bc0(*(void **)(a + 0xc4), p);
        *(void **)(a + 0xa0) = p;
        *(volatile uint16_t *)0x4000208 = f1;
    } else if (bit == 1) {
        func_02018254(&sw[1], data_020b8e44, b);
        q = func_02052d90((void *)sw[2], sw[3]);
        *(uint32_t *)(a + 0xa8) = q[10];
        *(uint32_t *)(a + 0xac) = q[11];
        q = func_02052d90((void *)sw[2], sw[3]);
        *(uint32_t *)(a + 0xb0) = q[5];
        q = func_02052d90((void *)sw[2], sw[3]);
        *(uint32_t *)(a + 0xb4) = q[6];
        p = func_0205681c(0xac);
        if (p) {
            p = func_ov003_02151a94(p, *(void **)(a + 0x9c), b, a[0xc8] == 1);
        }
        old = *(volatile uint16_t *)0x4000208;
        *(volatile uint16_t *)0x4000208 = 0;
        ((uint8_t *)sw)[0] = old != 0;
        func_02056bc0(*(void **)(a + 0xc4), p);
        *(void **)(a + 0xa4) = p;
        *(volatile uint16_t *)0x4000208 = ((uint8_t *)sw)[0];
        if (sw[2]) {
            if (sw_w) {
                func_02052d3c((void *)sw[2], sw[3]);
            }
            func_02052c04((void *)sw[2]);
        }
        func_02053290(&sw[1]);
    }
}
