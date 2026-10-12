#include "ffc/types.h"

typedef struct {
    uint32_t a0;
    void *a4;
    void *a8;
    uint8_t b12;
} Tmp;

extern void func_02050bb0(void *p);
extern void func_ov003_021534e4(void *p);
extern void func_02018254(void *out, uint32_t v, uint32_t w);
extern void func_020532a4(void *p, void *q);
extern void func_02052d3c(void *p, void *q);
extern void func_02052c04(void *p);
extern void func_02052be0(void);
extern void func_02052d10(void *p, void *q);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

void func_ov003_02153d14(uint8_t *a)
{
    Tmp t;
    Tmp *p;
    Tmp *q;
    void *v;

    func_02050bb0(a + 0x80);
    if (a[0x1f0] == 0) {
        func_ov003_021534e4(a);
    } else {
        
        func_02018254(&t, data_020b8e44, *(uint32_t *)(a + 0x98));
        func_020532a4(a + 0xe0, &t);
        if (&t.a4 != &((Tmp *)(a + 0xe0))->a4) {
            if (((Tmp *)(a + 0xe0))->a4 != 0) {
                if (((Tmp *)(a + 0xe0))->b12 != 0) {
                    func_02052d3c(((Tmp *)(a + 0xe0))->a4, ((Tmp *)(a + 0xe0))->a8);
                }
                func_02052c04(((Tmp *)(a + 0xe0))->a4);
            }
            ((Tmp *)(a + 0xe0))->a4 = v = t.a4;
            ((Tmp *)(a + 0xe0))->a8 = t.a8;
            ((Tmp *)(a + 0xe0))->b12 = t.b12;
            if (v != 0) {
                func_02052be0();
                if (((Tmp *)(a + 0xe0))->b12 != 0) {
                    func_02052d10(((Tmp *)(a + 0xe0))->a4, ((Tmp *)(a + 0xe0))->a8);
                }
            }
        }
        q = &t;
        if (q->a4 != 0) {
            if (q->b12 != 0) {
                func_02052d3c(q->a4, q->a8);
            }
            func_02052c04(q->a4);
        }
        func_02053290(q);
    }
    a[0x1f0] = 0;
}
