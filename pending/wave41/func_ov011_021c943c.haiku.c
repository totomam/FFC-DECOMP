#include "ffc/types.h"

extern void func_02056bf4(void *object);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0203bb94(void *object, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov011_021cba84[];

void func_ov011_021c943c(uint8_t *self, uint32_t arg)
{
    uint8_t buf[0x44];
    void **obj;

    if (arg > 2) {
        return;
    }
    if (*(void **)(self + 0xe0) != 0) {
        func_02056bf4(self + 0x48);
        obj = *(void ***)(self + 0xe0);
        if (obj != 0) {
            ((void (*)(void *))((void **)*obj)[1])(obj);
            *(void **)(self + 0xe0) = 0;
        }
    }
    func_02086ad4(buf, data_ov011_021cba84[3], arg);
    *(void **)(self + 0xe0) = func_0203bb94(buf, 1, 0, 0);
    obj = *(void ***)(self + 0xe0);
    ((void (*)(void *))((void **)*obj)[10])(obj);
    obj = *(void ***)(self + 0xe0);
    ((void (*)(void *, uint32_t))((void **)*obj)[8])(obj, 3);
    func_02056bc0(self + 0x48, *(void **)(self + 0xe0));
}
