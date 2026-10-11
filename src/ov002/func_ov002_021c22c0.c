#include "ffc/types.h"

extern void func_0206bf5c(void *object);
extern uint32_t func_0206c090(void *object);
extern void *func_0206c030(void *object);
extern uint32_t data_ov002_021d79b4[];
extern uint8_t data_ov002_021d7990;

void func_ov002_021c22c0(void)
{
    uint32_t obj[2];
    int i;

    func_0206bf5c(obj);
    for (i = 0; i < 0x100; i++) {
        data_ov002_021d79b4[i] = func_0206c090(obj) & 0x7f;
    }
    data_ov002_021d7990 = 0;
    func_0206c030(obj);
}
