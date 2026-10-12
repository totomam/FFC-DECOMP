#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern uint32_t func_020181ac(uint32_t a);
extern void func_02018c18(void *out, uint32_t a, uint32_t b);
extern void func_02039244(void *a, void *b, uint32_t c);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
} Loc;

void *func_0203919c(void *p, uint32_t q) {
    Loc v;
    Loc *vp;
    uint32_t t;

    t = func_020181ac(data_020b8e44);
    vp = &v;
    func_02018c18(vp, data_020b8e44, t);
    func_02039244(p, vp, q);
    if (vp->f4 != 0) {
        if (vp->fc != 0) {
            func_02052d3c(vp->f4, vp->f8);
        }
        func_02052c04(vp->f4);
    }
    return func_02053290(vp);
}
