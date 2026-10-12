#include "ffc/types.h"

extern void func_0207578c(uint32_t v, void *fn, void *obj);
extern void *func_0205681c(uint32_t n);
extern void *func_0200d13c(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov001_0218e124(void *obj);
extern uint32_t func_02075bc8(uint32_t v);
extern void func_ov001_0218e6dc(void *obj);
extern void func_ov001_0218e72c(void);
extern void *data_020b8e44;

void func_ov001_0218b834(uint8_t *p)
{
    uint32_t v;
    void *node;

    v = *(uint32_t *)((uint8_t *)(*(void **)data_020b8e44) + 0x88);
    *(uint32_t *)(p + 0x734) = v;
    func_0207578c(v, (void *)func_ov001_0218e72c, p);
    node = func_0205681c(0x80);
    if (node != 0) {
        node = func_0200d13c();
    }
    func_02056bc0(p + 0x48, node);
    if (func_ov001_0218e124(p) == 0) {
        v = func_02075bc8(*(uint32_t *)((uint8_t *)(*(void **)data_020b8e44) + 0x88));
        if (v < 2) {
            func_ov001_0218e6dc(p);
        }
    }
}
