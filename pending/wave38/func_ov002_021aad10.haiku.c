#include "ffc/types.h"

extern int func_ov002_021aadac(void *a, void *b, uint8_t c, uint8_t d);
extern void *func_02017734(void *a, void *b);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021aa778(const void *object);
extern void func_02055914(void *a, void *b);
extern void *data_020b8e44;
extern char data_020abb98[];

typedef struct {
    uint32_t w00;
    uint32_t w04;
    uint32_t w08;
    uint32_t w0c;
    uint32_t w10;
    void *f14;
    void *f18;
    uint8_t f1c;
    uint8_t pad1d[3];
    void *f20;
    uint32_t w24;
} Obj;

typedef struct {
    void *vt;
    uint32_t w04;
    uint32_t w08;
    uint32_t w0c;
    uint32_t w10;
    uint32_t w14;
} Node;

void func_ov002_021aad10(Obj *a)
{
    if (func_ov002_021aadac(a->f14, a->f18, a->f1c, *(uint8_t *)&a->w24) != 0) {
        uint8_t *r6 = (uint8_t *)func_02017734(data_020b8e44, a->f18);
        if (a->f20 != 0) {
            Node *r4 = (Node *)func_0205681c(0x18);
            if (r4 != 0) {
                uint8_t v = r6[1];
                uint32_t r0 = func_ov002_021aa778(a->f14);
                r4->w08 = 0;
                r4->w0c = 0x100f9;
                r4->vt = data_020abb98;
                r4->w10 = r0;
                r4->w14 = v;
            }
            func_02055914(a->f20, r4);
        }
    }
    a->w0c = (a->w0c & ~0xffu) | 2;
}
