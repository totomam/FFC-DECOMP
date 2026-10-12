#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0206fb48(void *a);
extern void *func_020655b8(void *a);
extern void *func_020655dc(void *a, int b, int c);
extern void *func_02021610(int a, int b);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(int size);
extern void func_02087620(void *object);
extern char data_020b0b68[];
extern char data_020b0b54[];

void func_ov013_021bcc24(uint8_t *self, void *id)
{
    uint8_t *p;
    void *s4, *r5, *r6, *r7, *s0, *s8;
    uint8_t *obj;
    uint32_t m;

    p = self;
    if (id != *(void **)(p + 0xf4)) return;
    s0 = func_02056aec();
    s4 = func_0206fb48(*(void **)(p + 0xf0));
    r5 = *(void **)(p + 0xf4);
    s8 = func_020655b8(*(void **)((uint8_t *)r5 + 0x94));
    r7 = func_020655dc(*(void **)((uint8_t *)r5 + 0x94), 4, 0);
    r5 = func_02021610(0xce, 0);
    r6 = func_0203b688();
    func_02056bc0(r6, r5);
    func_02056bc0(r6, r7);
    func_02056bc0(r6, s8);
    obj = (uint8_t *)func_0205681c(0x34);
    m = 0xff;
    if (obj != 0) {
        *(uint32_t *)(obj + 0xc) &= ~m;
        *(void **)obj = (void *)data_020b0b68;
        func_02087620(obj + 0x1c);
        obj[0x10] = obj[0x10] & ~m;
        obj[0x11] = obj[0x11] & ~m;
        obj[0x12] = obj[0x12] & ~m;
        *(uint32_t *)(obj + 0x14) = 0;
        *(uint8_t **)(obj + 0x18) = obj + 0x14;
        *(void **)obj = (void *)data_020b0b54;
        obj[0x11] = (obj[0x11] & ~m) | 1;
    }
    func_02056bc0(obj, r6);
    func_02056bc0(obj, s4);
    p = p + 0x14;
    func_02056bc0(p, obj);
    func_02056bc0(p, s0);
}
