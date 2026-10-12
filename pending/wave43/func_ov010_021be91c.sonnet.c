#include "ffc/types.h"

extern void *func_0205681c(uint32_t a);
extern void *func_ov009_021a2f2c(void *a, void *b, int c, int d, int e);
extern void func_ov009_021a3150(void *a, void *b, int c);
extern void func_ov009_021a3370(void *a, int b, int c);
extern uint32_t func_020696e8(const void *object);
extern void func_ov009_021a3274(void *a, uint32_t b, void *c, void *d, int e, int f);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov009_021a39f4(void *a);

extern uint32_t data_ov010_021d2620[];
extern uint32_t data_0209dee0;
extern uint32_t data_0209dee4;
extern uint32_t data_0209dee8;
extern uint32_t data_ov010_021d1600[];
extern uint32_t data_ov010_021d2628[];
extern uint32_t data_ov010_021d1608[];
extern uint32_t data_ov010_021d1624[];
extern uint32_t data_ov010_021d0c54[];

void func_ov010_021be91c(void *obj)
{
    uint32_t f = data_ov010_021d2620[0];
    void *r;
    uint32_t g;
    uint32_t v;
    void *t;

    if (!(f & 1)) {
        data_ov010_021d1600[2] = data_0209dee0;
        data_ov010_021d1600[3] = data_0209dee4;
        data_ov010_021d1600[4] = data_0209dee8;
        data_ov010_021d2620[0] = f | 1;
    }

    r = func_0205681c(0x1cc);
    if (r != 0) {
        r = func_ov009_021a2f2c(r, data_ov010_021d2628, 3, 1, 0);
    }
    ((void **)obj)[0x49] = r;
    func_ov009_021a3150(((void **)obj)[0x49], data_ov010_021d1608, 11);
    func_ov009_021a3370(((void **)obj)[0x49], 1, 0);

    g = data_ov010_021d2620[1];
    if (!(g & 1)) {
        data_ov010_021d1600[9] = 0xb0;
        data_ov010_021d1600[10] = 0xa;
        data_ov010_021d1600[11] = 0xf0;
        data_ov010_021d1600[12] = 0x90;
        data_ov010_021d2620[1] = g | 1;
    }

    v = func_020696e8(obj);
    func_ov009_021a3274(((void **)obj)[0x49], v, data_ov010_021d1624, data_ov010_021d0c54, 0, 0);
    func_02056bc0((char *)obj + 0x48, ((void **)obj)[0x49]);
    t = func_ov009_021a39f4(((void **)obj)[0x49]);
    func_02056bc0((char *)obj + 0x14, t);
}
