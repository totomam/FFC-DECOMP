#include "ffc/types.h"

typedef struct Sub {
    void *vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t inner[3];
} Sub;

typedef struct Obj {
    void *vt0;
    uint32_t w04;
    uint32_t w08;
    uint32_t w0c;
    uint32_t w10;
    Sub sub;
    uint32_t w30;
    uint32_t w34;
    uint32_t w38;
    uint32_t w3c;
    uint32_t w40;
    uint8_t b44;
    uint8_t pad45[3];
    uint32_t w48;
    uint32_t w4c;
    uint32_t w50;
} Obj;

extern char data_020aadd0[];
extern char data_020b0688[];
extern char data_020b2634[];
extern char data_020b2648[];
extern Obj *data_0213e1f8;

extern void func_02087620(void *object);
extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_020748f0(uint32_t a, uint32_t b, uint32_t c);
extern void func_02075780(void *self, uint32_t x);

void *func_02075610(void *this_, uint32_t a, uint32_t b) {
    Obj *p = (Obj *)this_;
    Sub *s;
    uint32_t r;

    p->vt0 = data_020aadd0;
    p->w0c &= ~0xffu;
    s = &p->sub;
    s->w4 = 0;
    s->w8 = 0;
    s->wc = 0;
    s->vt = data_020b0688;
    func_02087620(s->inner);
    p->w48 = 0;
    p->vt0 = data_020b2634;
    p->w4c = 0;
    p->sub.vt = data_020b2648;
    p->b44 = 0;
    p->w50 = 0;
    data_0213e1f8 = p;
    r = func_0205681c(0x42f4);
    if (r != 0) {
        r = func_020748f0(r, a, b);
    }
    p->w40 = r;
    func_02075780(p, 0x4e20);
    return p;
}
