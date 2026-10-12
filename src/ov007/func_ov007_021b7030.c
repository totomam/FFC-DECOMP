#include "ffc/types.h"

extern void func_02021338(int x);
extern void *func_020655dc(void *obj, int kind, int flag);
extern void func_02056bc0(void *object, void *node);
extern void *func_020655b8(void *obj);

void func_ov007_021b7030(uint8_t *a, int b)
{
    void *o;
    void *r;

    if ((*(uint8_t **)(a + 0x94))[0x13c] == 0) {
        func_02021338(0xb9);
    }

    if (b != 0) {
        if ((*(uint8_t **)(a + 0x94))[0x12c] == 0) {
            o = *(void **)(a + 0x98);
            r = func_020655dc(o, 5, 1);
        } else {
            o = *(void **)(a + 0x98);
            r = func_020655dc(o, 6, 1);
        }
    } else {
        if ((*(uint8_t **)(a + 0x94))[0x12c] == 0) {
            o = *(void **)(a + 0x98);
            r = func_020655dc(o, 3, 1);
        } else {
            o = *(void **)(a + 0x98);
            r = func_020655dc(o, 4, 1);
        }
    }
    func_02056bc0(a + 0x14, r);
    r = func_020655b8(*(void **)(a + 0x98));
    func_02056bc0(a + 0x14, r);
}
