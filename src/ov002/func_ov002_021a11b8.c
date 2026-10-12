#include "ffc/types.h"

extern void func_ov002_021c86bc(void *p);
extern void func_02056844(void *p);
extern void func_0206c030(void *p);
extern void func_ov002_021c85bc(void *p);
extern void func_0200d5ec(void *p);
extern void func_02055a5c(void *p);
extern void func_ov002_021a51fc(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern char data_ov002_021d51f4[];
extern char data_ov002_021d5210[];

void *func_ov002_021a11b8(void *obj)
{
    void *p;

    *(void **)obj = data_ov002_021d51f4;
    *(void **)((uint8_t *)obj + 0x80) = data_ov002_021d5210;

    p = *(void **)((uint8_t *)obj + 0x180);
    if (p != 0) {
        if (p != 0) {
            func_ov002_021c86bc(p);
            func_02056844(p);
        }
        *(void **)((uint8_t *)obj + 0x180) = 0;
    }

    p = *(void **)((uint8_t *)obj + 0x100);
    if (p != 0) {
        if (p != 0) {
            func_0206c030(p);
            func_02056844(p);
        }
        *(void **)((uint8_t *)obj + 0x100) = 0;
    }

    func_ov002_021c85bc((uint8_t *)obj + 0x144);
    func_0200d5ec((uint8_t *)obj + 0x11c);
    func_02055a5c((uint8_t *)obj + 0xc4);
    func_ov002_021a51fc((uint8_t *)obj + 0xb8);
    func_020558d8((uint8_t *)obj + 0x80);
    func_02056db0(obj);
    return obj;
}
