#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern void *func_ov001_0218de3c(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_ov001_0218de9c(void *obj, uint32_t a);
extern void *func_02056aec(void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_02008ce8(void *a, void *b, uint32_t c, void *d);
typedef struct { uint32_t a, b; } S;
extern void *func_ov001_0218b650(void *a, S b, uint32_t d);
extern S data_ov001_021947f8;
extern void *data_020b93b8;

void func_ov001_0218bad4(uint8_t *p) {
    void *s8;
    void *s4;
    void *r4;
    void *r7;
    void *r6;
    void *r1;

    r4 = func_ov001_0218de3c(p, 0x36, 1, 0, 0);
    func_02056bc0(p + 0x48, r4);
    s4 = func_ov001_0218de9c(p, 0);
    s8 = func_02056aec(r4);
    r6 = func_0205681c(0x94);
    if (r6) r6 = func_02008ce8(r6, r4, 0, *(void **)(p + 0x98));
    r7 = func_ov001_0218b650(data_020b93b8, data_ov001_021947f8, 1);
    r1 = func_0205681c(0x94);
    if (r1) r1 = func_02008ce8(r1, r4, 0, *(void **)(p + 0x98));
    uint8_t *q = p + 0x14;
    func_02056bc0(q, r1);
    func_02056bc0(q, r7);
    func_02056bc0(q, r6);
    func_02056bc0(q, s8);
    func_02056bc0(q, s4);
}
