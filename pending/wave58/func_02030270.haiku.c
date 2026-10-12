#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_0202be9c(void *a, void *b, uint32_t c);
extern void func_02092878(void *a, void *b);
extern void func_02092924(void *a, void *b);
extern void func_0202afc0(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern void func_0202b24c(void *a, void *b);
extern void func_0202b240(void *a, void *b);
extern void func_0202b284(void *a, uint32_t b);
extern void func_0202b290(void *a, uint32_t b);
extern int func_0202e10c(void *a, void *b);
extern void func_02056b88(void *a, void *b);
extern void func_0202b7fc(void *a, void *b);
extern void func_0202e200(void *a, void *b, uint8_t c);
extern void func_0202a9ac(void *cursor);
extern void func_020257f4(void *a);
extern uint8_t data_020adf00[];
extern uint8_t data_020adf0c[];

uint32_t func_02030270(uint8_t *self, int p1, void *p2, void *p3, void *p5)
{
    void *obj;
    void *lst[3];
    void *cur;
    void *t;
    uint32_t flag;
    uint32_t v;
    int i;

    t = func_0205681c(0xb24);
    if (t != 0) {
        t = func_0202be9c(t, *(void **)(self + 0x98), 0x20);
    }
    *(void **)(self + 0x8c) = t;

    func_02092878(p3, p2);
    func_02092924(p3, self + 0x10a);

    func_0202afc0(*(void **)(self + 0x8c), p3, 0, 0, 0);

    obj = *(void **)(self + 0x8c);
    v = *(uint32_t *)((uint8_t *)obj + 0xc);
    v &= ~0xffu;
    *(uint32_t *)((uint8_t *)obj + 0xc) = v;
    *((uint8_t *)obj + 0x41) = *(uint8_t *)(self + 0xc0);

    func_0202b24c(obj, self + 0xac);
    func_0202b240(obj, self + 0xa0);
    func_0202b284(obj, *(uint32_t *)(self + 0xc4));

    flag = 0;
    if (*(uint32_t *)(self + 0xc8) != 0) {
        flag = 1;
    }
    obj = *(void **)(self + 0x8c);
    ((void (*)(void *, uint32_t))((*(void ***)obj)[3]))(obj, flag);

    func_0202b290(*(void **)(self + 0x8c), 0x7fff);

    *((uint8_t *)*(void **)(self + 0x8c) + 0x46) = 0;

    if (self[0x44a] == 1) {
        obj = *(void **)(self + 0x8c);
        *(int32_t *)((uint8_t *)obj + 0x18) = *(int32_t *)(self + 0x410) >> (p1 + 8);
        *(uint32_t *)((uint8_t *)obj + 0x1c) = 1u << 30;
    } else {
        obj = *(void **)(self + 0x8c);
        *(int32_t *)((uint8_t *)obj + 0x18) = p1;
        *(uint32_t *)((uint8_t *)obj + 0x1c) = 1u << 30;
    }

    for (i = 3; i < 6; i++) {
        if (self[0x3f8 + i] == 1) {
            uint32_t off = (uint32_t)i * 0x32;
            if (func_0202e10c(self + 0xd8 + off, data_020adf00) == 0) {
                obj = *(void **)(self + 0x8c);
                *(uint32_t *)((uint8_t *)obj + 0x198) = 1;
            }
            if (func_0202e10c(self + 0xd8 + off, data_020adf0c) == 0) {
                func_0202b290(*(void **)(self + 0x8c), *(uint16_t *)(self + 0xb8));
            }
        }
    }

    v = *(uint32_t *)(self + 0x480);
    v = v + (uint32_t)((int32_t)v >> 6);
    v &= 0x3f;
    obj = *(void **)(self + 0x8c);
    *(uint32_t *)((uint8_t *)obj + 0x2c) = v;
    *(uint32_t *)(self + 0x480) += 8;

    func_02056b88(self + 0x48, *(void **)(self + 0x8c));

    obj = *(void **)(self + 0x8c);
    func_0202b7fc(lst, obj);
    cur = lst[2];
    while (cur != (void *)&lst[1]) {
        func_0202e200(p5, obj, ((uint8_t *)cur)[0xc]);
        func_0202a9ac(&cur);
    }
    func_020257f4(lst);

    return 1;
}
