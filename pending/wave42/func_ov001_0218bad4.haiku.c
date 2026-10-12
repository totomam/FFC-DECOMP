#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern void *func_ov001_0218de3c(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_ov001_0218de9c(void *obj, uint32_t a);
extern void *func_02056aec(void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_02008ce8(void *a, void *b, uint32_t c, void *d);
extern void *func_ov001_0218b650(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t data_ov001_021947f8[];
extern void *data_020b93b8;

void func_ov001_0218bad4(uint8_t *p) {
    void *r4;
    void *r6;
    void *r7;
    void *r1;
    void *s4;
    void *s8;

    r4 = func_ov001_0218de3c(p, 0x36, 1, 0, 0);
    func_02056bc0(p + 0x48, r4);
    s4 = func_ov001_0218de9c(p, 0);
    s8 = func_02056aec(r4);
    r6 = func_0205681c(0x94);
    r6 = r6 ? func_02008ce8(r6, r4, 0, *(void **)(p + 0x98)) : r6;
    r7 = func_ov001_0218b650(data_020b93b8, data_ov001_021947f8[0], data_ov001_021947f8[1], 1);
    r1 = func_0205681c(0x94);
    r1 = r1 ? func_02008ce8(r1, r4, 0, *(void **)(p + 0x98)) : r1;
    p += 0x14;
    func_02056bc0(p, r1);
    func_02056bc0(p, r7);
    func_02056bc0(p, r6);
    func_02056bc0(p, s8);
    func_02056bc0(p, s4);
}
