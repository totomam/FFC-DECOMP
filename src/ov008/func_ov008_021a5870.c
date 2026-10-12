#include "ffc/types.h"

extern void func_02065874(void *p);
extern void func_ov008_021a571c(void *p);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_020695d0(void *p);
extern void func_02056844(void *p);

void *func_ov008_021a5870(void *p) {
    uint8_t *s = (uint8_t *)p;
    uint8_t *o;

    func_02065874(s + 0x124);
    func_ov008_021a571c(s + 0x104);
    o = s + 0xbc;
    if (*(void **)(o + 4) != 0) {
        if (o[0xc] != 0) {
            func_02052d3c(*(void **)(o + 4), *(uint32_t *)(o + 8));
        }
        func_02052c04(*(void **)(o + 4));
    }
    func_02053290(o);
    func_020695d0(s);
    func_02056844(s);
    return s;
}
