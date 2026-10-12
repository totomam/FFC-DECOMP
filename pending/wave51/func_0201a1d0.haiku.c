#include "ffc/types.h"

typedef struct Obj {
    uint32_t w0;
    void *p4;
    uint32_t v8;
    uint8_t flag;
    uint8_t pad[3];
    uint32_t w10;
    uint32_t w14;
} Obj;

extern void func_020532a4(Obj *a);
extern void func_02052d3c(void *p, uint32_t v);
extern void func_02052c04(void *p);
extern void func_02052be0(void *p);
extern void func_02052d10(void *p, uint32_t v);
extern void func_0200b65c(Obj *a, Obj *b);

void func_0201a1d0(Obj *a, Obj *b)
{
    func_020532a4(a);
    if (&b->p4 != &a->p4) {
        if (a->p4 != 0) {
            if (a->flag != 0) {
                func_02052d3c(a->p4, a->v8);
            }
            func_02052c04(a->p4);
        }
        a->p4 = b->p4;
        a->v8 = b->v8;
        a->flag = b->flag;
        if (a->p4 != 0) {
            func_02052be0(a->p4);
            if (a->flag != 0) {
                func_02052d10(a->p4, a->v8);
            }
        }
    }
    a->w10 = b->w10;
    if (a->w14 == 0xffffffffu) {
        a->w14 = b->w14;
    }
    func_0200b65c(a + 1, b + 1);
}
