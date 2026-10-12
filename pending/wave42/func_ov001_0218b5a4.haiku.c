#include "ffc/types.h"

extern void *func_ov001_0218de3c(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov001_0218de9c(void *a, uint32_t b);
extern void *func_02056aec(void *a);
extern void *func_0205681c(uint32_t size);
extern void *func_02008ce8(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_ov001_0218b650(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t data_ov001_02194744[2];
extern uint32_t data_020b93b8;

void func_ov001_0218b5a4(uint8_t *a) {
    void *r4, *r6, *r7, *x2;
    void *s[2];

    r7 = 0;
    r4 = func_ov001_0218de3c(a, 0x36, 1, 0, 0);
    func_02056bc0(a + 0x48, r4);
    s[0] = func_ov001_0218de9c(a, 0);
    s[1] = func_02056aec(r4);
    r6 = func_0205681c(0x94);
    if (r6) {
        r6 = func_02008ce8(r6, r4, *(uint32_t *)(a + 0x72c), (uint32_t)r7);
    }
    r7 = func_ov001_0218b650(data_020b93b8, data_ov001_02194744[0], data_ov001_02194744[1], 1);
    x2 = func_0205681c(0x94);
    if (x2) {
        x2 = func_02008ce8(x2, r4, *(uint32_t *)(a + 0x72c), 0);
    }
    func_02056bc0(a + 0x14, x2);
    func_02056bc0(a + 0x14, r7);
    func_02056bc0(a + 0x14, r6);
    func_02056bc0(a + 0x14, s[1]);
    func_02056bc0(a + 0x14, s[0]);
}
