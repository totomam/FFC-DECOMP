#include "ffc/types.h"

extern uint32_t func_02064aac(void *p, int x);
extern void *func_0205681c(uint32_t size);
extern void *func_02058724(void *obj, uint32_t a, int b, uint32_t c);
extern void *func_02058a6c(void *obj, int a, int b);
extern void *func_020639b8(void *p, int a, int b);
extern void func_02058840(void *obj, void *p);
extern void func_020588f0(void *obj, void *p, int a, int b);
extern void func_02058a08(void *obj);

void *func_ov002_021b0f70(uint8_t *arg0, int arg1, int arg2, int arg3, int arg4)
{
    uint8_t *base;
    uint8_t *p;
    uint8_t *obj;
    uint32_t t;

    base = *(uint8_t **)(arg0 + 0x128);
    p = base + 0x18;
    t = func_02064aac(base, 0);
    obj = func_0205681c(0x60);
    if (obj != 0) {
        obj = func_02058724(obj, t, 0, 0x7fff);
    }
    func_02058a6c(obj, 2, 0xfe);
    if (arg1 != 0) {
        func_02058840(obj, (uint8_t *)func_020639b8(p, 0, 0) + 4);
    }
    func_020588f0(obj, (uint8_t *)func_020639b8(p, 0, 0) + 4, arg2, arg3);
    func_02058a08(obj);
    *(int *)(obj + 0x24) = arg4;
    if (obj[0x15] != 0) {
        if (arg4 == 0) {
            *(int *)(obj + 0x1c) = 1;
        } else {
            *(int *)(obj + 0x1c) = arg4 << 4;
        }
    }
    return obj;
}
