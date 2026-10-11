#include "ffc/types.h"

extern uint32_t data_ov000_0216ff6c[];
extern int func_02086fe4(void *obj);
extern void func_02086dcc(void *obj, void *cb, void *a2, void *a3, uint32_t a4, uint32_t a5);
extern void func_020870a0(void *object);
extern void func_ov000_021573a0(void);

void func_ov000_0215734c(void)
{
    uint8_t *base = (uint8_t *)data_ov000_0216ff6c[1];
    if (*(uint32_t *)(base + 0x1188) != 0) {
        if (func_02086fe4(base + 0x111c) == 0) {
            return;
        }
    }
    base = (uint8_t *)data_ov000_0216ff6c[1];
    func_02086dcc(base + 0x111c, func_ov000_021573a0, base, base + (1 << 12), 1 << 12, 0x10);
    func_020870a0((uint8_t *)data_ov000_0216ff6c[1] + 0x111c);
}
