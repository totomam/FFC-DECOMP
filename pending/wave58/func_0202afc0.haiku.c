#include "ffc/types.h"

typedef struct {
    uint32_t w;
    uint32_t x;
    uint32_t y;
    uint8_t b;
} L;

extern void *func_0203b9a0(void);
extern void func_02005988(void *obj, uint8_t *s);
extern void func_02035b9c(void *obj, void *arg);
extern void func_02035be0(void *obj);
extern int func_02028f0c(void *a, void *b, void *c, void *d);
extern void func_02035c18(void *obj);
extern void func_020059cc(void *obj);
extern void func_0202b18c(void *obj);
extern void *func_0205681c(uint32_t size);
extern void *func_02023800(void *obj);
extern uint8_t *func_02092a54(uint8_t *s, int c);
extern void func_02092878(uint8_t *dst, uint8_t *src);
extern int func_02092948(void *a, uint8_t *b);
extern void func_02022e64(void *a, void *b);
extern void func_0202a3c0(void *a, void *b, void *c, void *d);
extern void func_02023e50(void *a, void *b);
extern void func_02023e70(void *a, int b, int c);
extern void func_0202b8ac(void *obj);
extern int data_0209e0a0;
extern uint32_t data_0209e0a8[];
extern uint32_t data_0209e0ac[];
extern uint8_t *data_021394dc;

void func_0202afc0(uint8_t *self, uint8_t *p1, void *p2, void *p3, void *p4)
{
    uint8_t *obj = *(uint8_t **)(self + 0x30);
    uint8_t b;
    
    L l;
    uint8_t buf[0x40];
    uint32_t s68[3];
    void *tmp;
    uint8_t *str6;
    int fA = 0;
    int fB = 0;
    int r4v;
    int count;
    int i;
    void *r4;

    l.b = obj[0x164];
    obj[0x164] = 0;

    tmp = *(void **)(self + 0x194);
    if (tmp != 0) {
        uint32_t *vt = *(uint32_t **)tmp;
        ((void (*)(void *))vt[1])(tmp);
        *(void **)(self + 0x194) = 0;
    }
    *(void **)(self + 0x194) = func_0203b9a0();
    func_02005988(s68, p1);

    if (p3 != 0) {
        r4 = &l.y;
        func_02035b9c(r4, p3);
        fA = 1;
    } else {
        r4 = &l.x;
        func_02035be0(r4);
        fB = 1;
    }
    l.w = *(uint32_t *)r4;

    r4v = (func_02028f0c(*(void **)(self + 0x194), s68, p4, &l) == 0);

    func_02035c18(&l);
    if (fB) {
        func_02035c18(&l.x);
    }
    if (fA) {
        func_02035c18(&l.y);
    }
    func_020059cc(s68);

    if (r4v) {
        func_0202b18c(self);
        *(uint8_t *)(self + 0x40) = 0;
        *(uint8_t *)(self + 0x70) = 0;
        *(uint8_t *)(self + 0x45) = 0;
        obj[0x164] = l.b;
        return;
    }

    tmp = func_0205681c(0x2e4);
    if (tmp != 0) {
        tmp = func_02023800(tmp);
    }
    *(void **)(self + 0x34) = tmp;

    {
        uint8_t *q = func_02092a54(p1, 0x2f);
        if (q != 0) {
            str6 = q + 1;
        } else {
            str6 = p1;
        }
    }

    if (str6 < func_02092a54(p1, 0x2e)) {
        func_02092878(buf, str6);
        *func_02092a54(buf, 0x2e) = 0;
        str6 = buf;
    }

    count = data_0209e0a0;
    for (i = 0; i < count; i++) {
        if (func_02092948((void *)data_0209e0a8[i * 2], str6) == 0) {
            uint8_t *q = data_021394dc + data_0209e0ac[i * 2] * 0x70;
            *(uint8_t **)((uint8_t *)tmp + 0x2d4) = q;
            *(uint8_t **)((uint8_t *)tmp + 0x2d8) = q + 0x30;
            break;
        }
    }

    func_02022e64(obj, *(void **)(self + 0x34));
    func_0202a3c0(*(void **)(self + 0x194), *(void **)(self + 0x34), p2, p3);
    func_02023e50(*(void **)(self + 0x34), *(void **)(self + 0x60));
    func_02023e70(*(void **)(self + 0x34), 0, 0);
    func_0202b8ac(self);
    *(uint8_t *)(self + 0x40) = 1;
    *(uint8_t *)(self + 0x70) = 1;
    *(uint8_t *)(self + 0x45) = 1;
    obj[0x164] = l.b;
}
