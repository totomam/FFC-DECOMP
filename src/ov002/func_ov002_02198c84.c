#include "ffc/types.h"

extern void func_02061344(void *p);
extern void func_02056844(void *p);
extern void func_02056c4c(void *p);
extern void func_02055a5c(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern uint8_t data_ov002_021d4918[];
extern uint8_t data_ov002_021d4934[];

uint8_t *func_ov002_02198c84(uint8_t *p)
{
    *(void **)(p + 0) = data_ov002_021d4918;
    *(void **)(p + 0x80) = data_ov002_021d4934;
    func_02061344(*(void **)(p + 0x110));
    func_02061344(*(void **)(p + 0x114));
    func_02061344(*(void **)(p + 0x118));
    func_02061344(*(void **)(p + 0x11c));
    if (*(void **)(p + 0xf4) != 0) {
        if (*(void **)(p + 0xf4) != 0) {
            func_02056844(*(void **)(p + 0xf4));
        }
        *(void **)(p + 0xf4) = 0;
    }
    func_02056c4c(p + 0x14);
    func_02056c4c(p + 0x48);
    func_02055a5c(p + 0xb8);
    func_020558d8(p + 0x80);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
