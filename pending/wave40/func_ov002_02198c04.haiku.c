#include "ffc/types.h"

extern void func_02061344(uint32_t v);
extern void func_02056844(uint32_t v);
extern void func_02056c4c(void *p);
extern void func_02055a5c(void *p);
extern void func_020558d8(void *p);
extern void func_02056db0(void *p);
extern uint8_t data_ov002_021d4918[];
extern uint8_t data_ov002_021d4934[];

void *func_ov002_02198c04(void *param_0)
{
    uint8_t *a = (uint8_t *)param_0;

    *(void **)(a + 0x00) = data_ov002_021d4918;
    *(void **)(a + 0x80) = data_ov002_021d4934;

    func_02061344(*(uint32_t *)(a + 0x110));
    func_02061344(*(uint32_t *)(a + 0x114));
    func_02061344(*(uint32_t *)(a + 0x118));
    func_02061344(*(uint32_t *)(a + 0x11c));

    if (*(uint32_t *)(a + 0xf4) != 0) {
        if (*(uint32_t *)(a + 0xf4) != 0) {
            func_02056844(*(uint32_t *)(a + 0xf4));
        }
        *(uint32_t *)(a + 0xf4) = 0;
    }

    func_02056c4c(a + 0x14);
    func_02056c4c(a + 0x48);
    func_02055a5c(a + 0xb8);
    func_020558d8(a + 0x80);
    func_02056db0(a);

    return a;
}
