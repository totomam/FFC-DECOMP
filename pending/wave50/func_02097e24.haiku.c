#include "ffc/types.h"

extern void func_02098c30(void *dst, void *src);
extern void func_0209d27d_unk(void);
extern void func_0209cc64(void *p);
extern void func_0209710c(void *obj, void *arg);
extern void func_02098d4c(void *p);
extern uint8_t data_020b3178[];

uint32_t func_02097e24(void *p)
{
    uint8_t guard[0x20];
    uint8_t *self = (uint8_t *)p;
    int32_t found = 0;
    int32_t off;
    void *inner;
    int32_t res;

    func_02098c30(guard, p);
    guard[1] = 1;

    off = *(int32_t *)(*(uint32_t *)self - 12);
    inner = *(void **)(self + off + 0x20);
    if (inner != 0) {
        res = ((int32_t (*)(void *, void *))(*(void ***)inner)[5])(inner, guard);
        if (res == found - 1) {
            found = 1;
        }
    }

    if (found != 0) {
        uint8_t *o;
        o = self + *(int32_t *)(*(uint32_t *)self - 12);
        o[0x2e] |= 1;
        if (*(void **)(o + 0x20) == 0) {
            o[0x2e] |= 1;
        }
        if ((o[0x2e] & o[0x2f] & 1) != 0) {
            func_0209710c(o, data_020b3178);
        }
    }

    func_02098d4c(guard);
    return (uint32_t)(uintptr_t)p;
}
