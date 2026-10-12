#include "ffc/types.h"

extern int32_t func_ov002_021c9000(void *p);
extern void func_ov002_021c9034(void *p, int32_t v);
extern int32_t func_ov002_021c8ff4(void *p);
extern void func_ov002_021c902c(void *p, int32_t v);
extern void func_02015e8c(void *out, uint32_t v);
extern void *func_02052d90(void *a, uint32_t b);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t fc;
} Tmp;

typedef struct { uint8_t pre[0x1c]; Tmp t; } Frame;

void func_ov002_021a0da8(void *a, void *p)
{
    Frame fr;
    Tmp *tp;
    int32_t s;
    int32_t v;
    void *obj;
    int32_t n;

    switch (func_ov002_021c9000(p)) {
    case 0:
        func_ov002_021c9034(p, 0);
        break;
    case 1:
        if (func_ov002_021c8ff4(p) > 1) {
            n = func_ov002_021c8ff4(p);
        } else {
            n = 1;
        }
        func_ov002_021c9034(p, n);
        func_ov002_021c902c(p, 0);
        break;
    case 2:
        s = func_ov002_021c8ff4(p) << 12;
        tp = &fr.t;
        func_02015e8c(tp, data_020b8e44);
        obj = func_02052d90(tp->f4, tp->f8);
        s = (int32_t)func_020817c8(s, *(uint32_t *)((uint8_t *)obj + 0x84));
        if (tp->f4 != 0) {
            if (tp->fc != 0) {
                func_02052d3c(tp->f4, tp->f8);
            }
            func_02052c04(tp->f4);
        }
        func_02053290(tp);
        v = s >> 12;
        if (v <= 1) {
            v = 1;
        }
        func_ov002_021c9034(p, v);
        break;
    }
}
