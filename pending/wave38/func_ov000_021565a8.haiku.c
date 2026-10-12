#include "ffc/types.h"

extern void func_02087620(void *object);
extern int func_02086fe4(void *object);
extern void func_02086dcc(void *object, void *fn, void *a, void *b, uint32_t c, uint32_t d);
extern void func_020870a0(void *object);
extern void func_ov000_021567b4(void);
extern int data_ov000_0216ff68;

void func_ov000_021565a8(uint8_t *p, uint32_t arg)
{
    *(uint32_t *)(p + 0x1c4c) = 0;
    func_02087620(p + 0x1c34);
    func_02087620(p + 0x1a54);
    if (*(uint32_t *)(p + 0x1018) == 1) {
        data_ov000_0216ff68 = 1;
    } else {
        data_ov000_0216ff68 = 0;
    }
    if (*(uint32_t *)(p + 0x1be0) != 0) {
        if (func_02086fe4(p + 0x1b74) == 0) {
            return;
        }
    }
    func_02086dcc(p + 0x1b74, (void *)func_ov000_021567b4, p, p + 0x1000, 0x1000, arg);
    func_020870a0(p + 0x1b74);
}
