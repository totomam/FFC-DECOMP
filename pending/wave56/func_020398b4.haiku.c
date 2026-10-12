#include "ffc/types.h"

typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
    uint8_t f8;
    uint8_t f9;
    uint8_t fa;
    uint8_t fb;
    uint8_t fc;
} Obj;

extern void func_020375f4(uint32_t mask);
extern void func_0203be8c(void);
extern void func_0203bed8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern uint32_t data_0213df18;
extern void func_0204f550(uint32_t v);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern uint8_t func_ov010_021cac34(uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void *func_ov010_021c9630(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

void func_020398b4(uint8_t *p) {
    Obj *o;
    void *node;

    func_020375f4(0x31 << 6);
    func_0203be8c();
    func_0203bed8(5, 1, 4, 1, 0, 0);
    func_0203c33c();
    func_0203c264();
    func_0204f550(data_0213df18);
    func_0203c36c();
    func_0203c394();

    o = *(Obj **)(p + 0x88);
    if (o->f0 != 6) {
        o->f4 = *(uint32_t *)(p + 0x90);
        o = *(Obj **)(p + 0x88);
        if (o->f0 == 2) {
            if (o->f8 == 0) {
                uint8_t v = func_ov010_021cac34(*(uint32_t *)(p + 0x90));
                o = *(Obj **)(p + 0x88);
                o->fb = v;
            } else {
                uint8_t v = func_ov010_021cac34(*(uint32_t *)(p + 0x90));
                o = *(Obj **)(p + 0x88);
                o->fc = v;
            }
        }
    }

    node = func_0205681c(0x2CC);
    if (node != 0) {
        node = func_ov010_021c9630(node, *(void **)(p + 0x88));
    }
    func_02056bc0(p + 0x14, node);
}
