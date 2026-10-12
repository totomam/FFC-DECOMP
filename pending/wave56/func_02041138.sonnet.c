#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct {
    uint8_t pad0[0xc]; uint32_t w0c; uint8_t pad1[0x14-0x10]; uint8_t list[0x80-0x14];
    Pair pr; uint32_t f88; uint8_t pad2[0x1a0-0x8c]; uint32_t f1a0; uint8_t pad3[0x1c0-0x1a4]; uint32_t f1c0;
} S;
typedef struct { uint32_t vt; uint8_t pad[0x7c]; uint32_t f80; uint32_t f84; } O;
extern void *func_02056aec(void);
extern O *func_0205681c(uint32_t size);
extern void func_02056c9c(O *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020af340;
extern uint32_t data_020af210[];
extern Pair data_020af348;

void func_02041138(S *p) {
    O *r4; uint32_t r6;
    if (p->f1c0 != 0) {
        p->w0c = (p->w0c & ~0xffu) | 2;
        return;
    }
    if (p->f1a0 == 0) { p->pr = data_020af340; return; }
    if (p->f1a0 == 3) {
        void *r7 = func_02056aec();
        r4 = func_0205681c(0x88);
        if (r4) { r6 = p->f88; func_02056c9c(r4, 0); r4->vt=(uint32_t)data_020af210; r4->f80=r6; r4->f84=0; }
        func_02056bc0(p->list, r4);
        func_02056bc0(p->list, r7);
        return;
    }
    {
        uint32_t z = 0;
        r4 = func_0205681c(0x88);
        if (r4) { r6 = p->f88; func_02056c9c(r4, 0); r4->vt=(uint32_t)data_020af210; r4->f80=r6; r4->f84=z; }
        func_02056bc0(p->list, r4);
        p->pr = data_020af348;
    }
}
