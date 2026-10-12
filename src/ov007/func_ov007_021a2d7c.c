#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02069210(void *object);
extern void *func_0203b81c(uint32_t v);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern void func_02056bc0(void *object, void *node);
extern void func_02069320(void *object, uint32_t value);
extern void func_020695ec(void *object, void *node);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_020697ac(void *object, void *node);
extern uint8_t data_ov007_021c4098[];
extern void *data_ov007_021c3bdc[];

void func_ov007_021a2d7c(void *s)
{
    uint8_t *p;
    void *r6;
    void *obj;
    void **vt;
    uint8_t *q;

    p = (uint8_t *)func_0205681c(0x98);
    if (p != 0) {
        func_02069210(p);
        *(void **)p = data_ov007_021c4098;
        r6 = func_0203b81c(1);
        *(void **)(p + 0x94) = func_0203b95c(data_ov007_021c3bdc[3], r6, 0, 1);
        obj = *(void **)(p + 0x94);
        vt = *(void ***)obj;
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 2, 0);
        obj = *(void **)(p + 0x94);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[10])(obj);
        func_02064390(*(void **)(p + 0x94), 0x80, 0x60);
        q = p + 0x48;
        func_02056bc0(q, *(void **)(p + 0x94));
        func_02056bc0(q, r6);
        func_02069320(p, 2);
    }
    *(void **)((uint8_t *)s + 0xb8) = p;
    func_020695ec(s, p);
    func_0205f2f0((void *)(uintptr_t)func_02064aa8(*(void **)(*(uint8_t **)((uint8_t *)s + 0xb8) + 0x94)), 1);
    func_020697ac(s, *(void **)((uint8_t *)s + 0xb8));
}
