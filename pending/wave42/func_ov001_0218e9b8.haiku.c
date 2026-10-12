#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t w0; uint32_t w1; uint32_t w2; uint32_t w3; uint32_t w4; uint32_t w5; } Data;

extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218e804(void *p, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b81c(uint32_t x);
extern void func_02005988(uint32_t *out, uint32_t x);
extern void *func_ov001_0218ea60(void *a, void *b, uint32_t *c, Pair d);
extern void *func_020059cc(void *object);
extern void func_020695ec(void *self, void *x);
extern void func_020697ac(void *self, void *x);
extern Data data_ov001_021949f4;

void func_ov001_0218e9b8(uint8_t *self) {
    void *n;
    void *r6;
    void *r7;
    uint32_t buf[3];
    Pair t;
    int used = 0;
    uint32_t sz = 0x8c;

    n = func_0205681c(sz);
    if (n != 0) {
        sz += 0x7b;
        n = func_ov001_0218e804(n, sz);
    }
    func_02056bc0(self + 0x48, n);

    r7 = func_0203b81c(4);
    if (self[0xb5]) {
        used = 0;
        r6 = func_0205681c(0x98);
        if (r6 != 0) {
            func_02005988(buf, data_ov001_021949f4.w1);
            t = *(Pair *)&data_ov001_021949f4.w4;
            used = 1;
            r6 = func_ov001_0218ea60(r6, r7, buf, t);
        }
        *(void **)(self + 0xb8) = r6;
        if (used) {
            func_020059cc(buf);
        }
        func_020695ec(self, *(void **)(self + 0xb8));
        func_020697ac(self, *(void **)(self + 0xb8));
    }
    func_02056bc0(self + 0x48, r7);
}
