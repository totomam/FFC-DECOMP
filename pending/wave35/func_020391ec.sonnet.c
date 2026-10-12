#include "ffc/types.h"

extern void func_020095b8(void *a, void *b, uint32_t c);
extern void func_02018cf4(void *a, uint32_t b, void *c);
extern void *func_020059cc(void *object);
extern void func_02039244(void *a, void *b, uint32_t c);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint8_t flag;
} Obj;

void func_020391ec(void *a, void *b, uint32_t c) {
    Obj s2;
    Obj *p;
    uint8_t s1[12];

    func_020095b8(s1, b, c);
    p = &s2;
    func_02018cf4(p, data_020b8e44, s1);
    func_020059cc(s1);
    func_02039244(a, p, c);
    if (s2.w4 != 0) {
        if (p->flag != 0) {
            func_02052d3c(p->w4, p->w8);
        }
        func_02052c04(p->w4);
    }
    func_02053290(p);
}
