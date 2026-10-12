#include "ffc/types.h"

extern void func_ov002_021c86bc(void *obj);
extern void func_02056844(void *obj);
extern void *func_0206c030(void *object);
extern void func_ov002_021c85bc(void *obj);
extern void func_0200d5ec(void *obj);
extern void func_02055a5c(void *obj);
extern void func_ov002_021a51fc(void *obj);
extern void func_020558d8(void *obj);
extern void func_02056db0(void *obj);
extern char data_ov002_021d51f4[];
extern char data_ov002_021d5210[];

void *func_ov002_021a1244(void *param)
{
    uint8_t *self;
    void *obj;

    self = (uint8_t *)param;
    *(void **)self = data_ov002_021d51f4;
    *(void **)(self + 0x80) = data_ov002_021d5210;

    obj = *(void **)(self + 0x180);
    if (obj != 0) {
        if (obj != 0) { func_ov002_021c86bc(obj);
        func_02056844(obj); }
        *(void **)(self + 0x180) = 0;
    }

    obj = *(void **)(self + 0x100);
    if (obj != 0) {
        if (obj != 0) { func_0206c030(obj);
        func_02056844(obj); }
        *(void **)(self + 0x100) = 0;
    }

    func_ov002_021c85bc(self + 0x144);
    func_0200d5ec(self + 0x11c);
    func_02055a5c(self + 0xc4);
    func_ov002_021a51fc(self + 0xb8);
    func_020558d8(self + 0x80);
    func_02056db0(self);
    func_02056844(self);
    return self;
}
