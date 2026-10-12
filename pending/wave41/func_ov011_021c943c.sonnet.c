#include "ffc/types.h"

extern void func_02056bf4(void *object);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0203bb94(void *object, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov011_021cba84[];

typedef struct O { void **vt; } O;

void func_ov011_021c943c(uint8_t *self, uint32_t arg)
{
    uint8_t buf[0x44];
    O *obj;

    if (arg > 2) {
        return;
    }
    obj = *(O **)(self + 0xe0);
    if (obj != 0) {
        func_02056bf4(self + 0x48);
        obj = *(O **)(self + 0xe0);
        if (obj != 0) {
            if (obj != 0) {
                ((void (*)(void *))obj->vt[1])(obj);
            }
            *(void **)(self + 0xe0) = 0;
        }
    }
    func_02086ad4(buf, data_ov011_021cba84[3], arg);
    obj = (O *)func_0203bb94(buf, 1, 0, 0);
    *(O **)(self + 0xe0) = obj;
    ((void (*)(void *))obj->vt[10])(obj);
    obj = *(O **)(self + 0xe0);
    ((void (*)(void *, uint32_t))obj->vt[8])(obj, 3);
    func_02056bc0(self + 0x48, *(void **)(self + 0xe0));
}
