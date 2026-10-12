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
    struct { uint8_t fl[4]; uint32_t sw[4]; uint32_t l14[0x25]; uint32_t pad; } L;
    int r6, r7;
    uint32_t bit;
    
    void *p;
    uint32_t *q, t1, t2, *s;
    uint16_t old;

    r7 = 0;
    r6 = 1;
    if (func_0201bd84(data_020b93b8, 0x50) != 0) {
        r7 = 1;
        r6 = 0;
    }
    func_0201cf34(data_020b93b8, L.l14);
    if (((L.l14[7] << 0x19) >> 0x1e) == 0 || func_020192f4(data_020b8e44, b) == 0) {
        r7 = 1;
        r6 = 0;
    }
    if (*(uint32_t *)(a + 0xcc) != ((L.l14[7] << 0x1b) >> 0x1f) || *(void **)(a + 0xd0) != b ||
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
    *(uint32_t *)(a + 0xcc) = (L.l14[7] << 0x1b) >> 0x1f;
    *(void **)(a + 0xd0) = b;
    *(uint32_t *)(a + 0xd4) = a[0xc8];
    switch ((L.l14[7] << 0x1b) >> 0x1f) {
    case 0:
        p = func_0205681c(0x4f8);
        if (p) {
            p = func_ov003_0214f81c(p, *(void **)(a + 0x9c), b, a[0xc8] == 1);
        }
        old = *(volatile uint16_t *)0x4000208;
        *(volatile uint16_t *)0x4000208 = 0;
        L.fl[1] = old != 0;
        func_02056bc0(*(void **)(a + 0xc4), p);
        *(void **)(a + 0xa0) = p;
        old = *(volatile uint16_t *)0x4000208;
        *(volatile uint16_t *)0x4000208 = L.fl[1];
        break;
    case 1:
        func_02018254(L.sw, data_020b8e44, b);
        q = func_02052d90((void *)L.sw[1], L.sw[2]);
        t2 = q[11];
        t1 = q[10];
        *(uint32_t *)(a + 0xa8) = t1;
        *(uint32_t *)(a + 0xac) = t2;
        q = func_02052d90((void *)L.sw[1], L.sw[2]);
        *(uint32_t *)(a + 0xb0) = q[5];
        q = func_02052d90((void *)L.sw[1], L.sw[2]);
        *(uint32_t *)(a + 0xb4) = q[6];
        p = func_0205681c(0xac);
        if (p) {
            p = func_ov003_02151a94(p, *(void **)(a + 0x9c), b, a[0xc8] == 1);
        }
        old = *(volatile uint16_t *)0x4000208;
        *(volatile uint16_t *)0x4000208 = 0;
        L.fl[0] = old != 0;
        func_02056bc0(*(void **)(a + 0xc4), p);
        *(void **)(a + 0xa4) = p;
        old = *(volatile uint16_t *)0x4000208;
        *(volatile uint16_t *)0x4000208 = L.fl[0];
        s = L.sw;
        if (L.sw[1]) {
            if (*((uint8_t *)&s[3])) {
                func_02052d3c((void *)s[1], s[2]);
            }
            func_02052c04((void *)s[1]);
        }
        func_02053290(s);
        break;
    }
}
