#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern void *func_ov001_0218de3c(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov001_0218de9c(void *a, uint32_t b);
extern void *func_02056aec(void *a);
extern void *func_0205681c(uint32_t size);
extern void *func_02008ce8(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_ov001_0218b650(void *a, S b, uint32_t c);
extern S data_ov001_02194744;
extern void *data_020b93b8;

void func_ov001_0218b5a4(uint8_t *a) {
    uint8_t *b; void *q, *p, *x2, *r7, *r6, *r4;
    void *z = 0;

    r4 = func_ov001_0218de3c(a, 0x36, 1, (uint32_t)z, (uint32_t)z);
    func_02056bc0(a + 0x48, r4);
    p = func_ov001_0218de9c(a, 0);
    q = func_02056aec(r4);
    r6 = func_0205681c(0x94);
    if (r6) {
        r6 = func_02008ce8(r6, r4, *(uint32_t *)(a + 0x72c), (uint32_t)z);
    }
    r7 = func_ov001_0218b650(data_020b93b8, data_ov001_02194744, 1);
    x2 = func_0205681c(0x94);
    if (x2) {
        x2 = func_02008ce8(x2, r4, *(uint32_t *)(a + 0x72c), 0);
    }
    b = a + 0x14;
    func_02056bc0(b, x2);
    func_02056bc0(b, r7);
    func_02056bc0(b, r6);
    func_02056bc0(b, q);
    func_02056bc0(b, p);
}
