#include "ffc/types.h"

extern void func_02065874(void *p);
extern void func_ov008_021a571c(void *p);
extern void func_02052d3c(void *p, uint32_t v);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern void func_020695d0(void *p);

typedef struct {
    uint32_t pad0;
    void *f4;
    uint32_t f8;
    uint8_t fc;
} Sub;

void *func_ov008_021a582c(void *p0)
{
    Sub *s;
    func_02065874((uint8_t *)p0 + 0x124);
    func_ov008_021a571c((uint8_t *)p0 + 0x104);
    s = (Sub *)((uint8_t *)p0 + 0xbc);
    if (s->f4 != 0) {
        if (s->fc != 0) {
            func_02052d3c(s->f4, s->f8);
        }
        func_02052c04(s->f4);
    }
    func_02053290(s);
    func_020695d0(p0);
    return p0;
}
