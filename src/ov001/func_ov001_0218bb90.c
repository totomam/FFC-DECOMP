#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0203b688(void);
extern void *func_ov001_0218bc90(void *p, Pair s);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218ed2c(void *obj, void *b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void *func_ov001_0218bc50(void *p, Pair s);
extern uint32_t func_0203c250(void);
extern void *func_02061128(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0203c23c(void);
extern void *func_0203b6fc(void);
extern Pair data_ov001_02194800;
extern Pair data_ov001_02194808;
extern void *data_020b8e44;

void *func_ov001_0218bb90(uint8_t *p) {
    void *r5;
    void *n;
    void *a;
    void *r7;
    void *s8;
    void *r4;
    void *o;

    r5 = func_0203b688();
    func_02056bc0(r5, func_ov001_0218bc90(p, data_ov001_02194800));

    if (((void **)((uint8_t *)*(void **)data_020b8e44 + 0x88))[0] != 0) {
        a = func_0205681c(0xb8);
        n = a;
        if (a != 0) {
            n = func_ov001_0218ed2c(a, *(void **)data_020b8e44, *(uint32_t *)(p + 0x98), p + 0x72c, 1, 0);
        }
        func_02056bc0(r5, n);
    }

    r7 = func_ov001_0218bc50(p, data_ov001_02194808);
    s8 = func_02061128(func_0203c250(), 0x10, 0, 0);
    r4 = func_02061128(func_0203c23c(), 0x10, 0, 0);
    o = func_0203b6fc();
    func_02056bc0(o, r4);
    func_02056bc0(o, s8);
    func_02056bc0(r5, o);
    func_02056bc0(r5, r7);
    return r5;
}
