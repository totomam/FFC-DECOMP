#include "ffc/types.h"

extern void func_02056bf4(void *object);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0203bb94(void *object, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov011_021cb5c8[];

void func_ov011_021c52fc(uint8_t *r5)
{
    uint8_t buf[0x44];
    void *obj;
    void **vt;

    obj = *(void **)(r5 + 0xd8);
    if (obj != 0) {
        func_02056bf4(r5 + 0x48);
        obj = *(void **)(r5 + 0xd8);
        if (obj != 0) {
            vt = *(void ***)obj;
            ((void (*)(void *))vt[1])(obj);
        }
        *(void **)(r5 + 0xd8) = 0;
    }

    func_02091b10(buf, (uint32_t)data_ov011_021cb5c8, r5[0x117]);
    obj = func_0203bb94(buf, 0, 0, 0);
    *(void **)(r5 + 0xd8) = obj;

    vt = *(void ***)obj;
    ((void (*)(void *))vt[0x28 / 4])(obj);

    obj = *(void **)(r5 + 0xd8);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[0x20 / 4])(obj, 3);

    func_02056bc0(r5 + 0x48, *(void **)(r5 + 0xd8));
}
