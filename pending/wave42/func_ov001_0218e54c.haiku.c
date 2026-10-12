#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_ov001_0218dde0(void *obj, int idx);
extern uint32_t func_02056ac8(void *x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02056b34(void *x);
extern void func_ov001_0218e3b4(void *obj, int v);
extern void func_02075ae4(void *x);
extern uint32_t func_02056aa4(void *x);

void func_ov001_0218e54c(void *a) {
    uint8_t *p = (uint8_t *)a;
    if (*(void **)((uint8_t *)*(void **)*(void **)&data_020b8e44 + 0x88) == 0) {
        return;
    }
    func_02056bc0(p + 0x14, (void *)(uintptr_t)func_02056ac8(func_ov001_0218dde0(a, 1)));
    func_02056bc0(p + 0x14, (void *)(uintptr_t)func_02056b34(func_ov001_0218dde0(a, 0)));
    func_02056bc0(p + 0x14, (void *)(uintptr_t)func_02056b34(func_ov001_0218dde0(a, 2)));
    func_02056bc0(p + 0x14, (void *)(uintptr_t)func_02056b34(func_ov001_0218dde0(a, 3)));
    func_ov001_0218e3b4(a, 0);
    func_02075ae4(*(void **)((uint8_t *)*(void **)*(void **)&data_020b8e44 + 0x88));
    func_02056bc0(p + 0x14, (void *)(uintptr_t)func_02056aa4(func_ov001_0218dde0(a, 1)));
}
