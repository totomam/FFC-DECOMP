#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_02091b10(void *object, void *first, ...);
extern void *func_0203bb94(void *object, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0201c9ac(uint32_t a, uint32_t b);
extern void *func_020159c8(uint32_t a, uint32_t b);
extern uint32_t func_02005efc(void *object, uint32_t first, ...);
extern uint32_t func_0203bf90(uint32_t a);
extern uint32_t func_0203bf7c(uint32_t a);
extern uint32_t func_020215cc(uint32_t a);
extern void *func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *a, void *b);
extern uint32_t func_0204f7ec(const void *object);
extern uint32_t func_02032d7c(void *o, uint32_t a, Pair p, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern void *func_ov009_0219d374(void);
extern void *func_02056aec(void *object);
extern uint8_t data_ov011_021cb12c[];
extern uint32_t data_020b93b8;
extern uint32_t data_ov011_021cad0c[];
extern uint32_t data_ov011_021cad10;
extern uint32_t data_020b8e44;
extern uint32_t data_0213df18;

void func_ov011_021c0abc(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint8_t buf[0x44];
    uint32_t arr[3];
    uint32_t sp2c[3];
    Pair pa;
    uint32_t v;
    uint32_t *vp;
    uint32_t c0c, c10, c14, i;
    uint32_t f78;
    uint32_t r4;
    uint32_t r7;
    void *obj, *o2, *o3, *t, *x;

    obj = *(void **)(s + 0x17c);
    ((void (*)(void *))(*(void ***)obj)[10])(obj);

    func_02091b10(buf, (void *)data_ov011_021cb12c, *(uint32_t *)(s + 0x2c4));
    o2 = func_0203bb94(buf, 1, 0, 0);
    *(void **)(s + 0x2b4) = o2;
    func_02056bc0(s + 0x48, o2);
    o2 = *(void **)(s + 0x2b4);
    ((void (*)(void *))(*(void ***)o2)[10])(o2);
    o2 = *(void **)(s + 0x2b4);
    ((void (*)(void *, uint32_t))(*(void ***)o2)[8])(o2, 2);
    pa.a = 0;
    pa.b = 0xa0;
    o2 = *(void **)(s + 0x2b4);
    ((void (*)(void *, Pair))(*(void ***)o2)[3])(o2, pa);

    if (*(uint32_t *)(s + 0x334) != 1) {
        return;
    }

    o3 = *(void **)(s + 0x32c);
    *(uint32_t *)((uint8_t *)o3 + 0x7c) = 0xffffffff;
    f78 = *(uint32_t *)((uint8_t *)(*(void **)(s + 0x32c)) + 0x78);
    v = f78 + func_0201c9ac(data_020b93b8, 4);
    vp = (v < data_ov011_021cad0c[1]) ? &v : &data_ov011_021cad10;
    r7 = *vp;

    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    c0c = 0;
    func_02005efc(arr, func_020159c8(data_020b8e44, 0xd4), f78, r7);

    c10 = func_0203bf90(0x1e);
    c14 = func_0203bf7c(0x1e);
    r4 = func_020215cc(0xf);
    t = func_0203b6fc();
    func_02056bc0(t, (void *)r4);
    func_02056bc0(t, (void *)c14);
    func_02056bc0(t, (void *)c10);

    r4 = (uint32_t)func_0205681c(0xb0);
    if (r4 != 0) {
        func_020095b8(sp2c, arr);
        c0c = 1;
        pa.a = 0x80;
        pa.b = 0x60;
        x = (void *)func_0204f7ec(&data_0213df18);
        r4 = func_02032d7c((void *)r4, (uint32_t)x, pa, sp2c, 4, 0);
    }

    func_02056bc0(s + 0x14, (void *)r4);
    func_02056bc0(s + 0x14, t);

    if (c0c != 0) {
        func_020059cc(sp2c);
    }
    if (*(void **)(s + 0x2b8) != 0) {
        x = func_ov009_0219d374();
        func_02056bc0(s + 0x14, x);
    }
    x = func_02056aec(s);
    func_02056bc0(s + 0x14, x);
    func_020059cc(arr);
}
