#include "ffc/types.h"

extern void func_02056bf4(void *object);
extern uint32_t func_0204f7d4(const void *object);
extern void *func_0203bb08(uint32_t a, const void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov011_021cb884[];
extern uint8_t data_ov011_021cb89c[];
extern uint32_t data_0213df18;

void func_ov011_021c6344(uint8_t *p, int flag)
{
    void **o = *(void ***)(p + 0xc8);
    if (o != 0) {
        func_02056bf4(p + 0x48);
        o = *(void ***)(p + 0xc8);
        if (o != 0) {
            ((void (*)(void *))((void **)o[0])[1])(o);
        }
        *(void **)(p + 0xc8) = 0;
    }

    {
        void *r;
        void *n;
        if (flag != 0) {
            r = data_ov011_021cb884;
        } else {
            r = data_ov011_021cb89c;
        }
        n = func_0203bb08(func_0204f7d4(&data_0213df18), r, 1, 0, 0);
        *(void **)(p + 0xc8) = n;
        ((void (*)(void *))((void **)n)[0])[10](n);
        o = *(void ***)(p + 0xc8);
        ((void (*)(void *, uint32_t))((void **)o[0])[8])(o, 3);
        func_02056bc0(p + 0x48, *(void **)(p + 0xc8));
    }
}
