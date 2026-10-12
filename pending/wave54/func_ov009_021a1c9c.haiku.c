#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void *func_ov009_021a0a50(void *self, int x);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203bb94(void *a, int b, int c, int d);
extern void func_02060548(void *sys, int v);
extern void func_02060564(void *sys, int v, int w);
extern void func_02060574(void *sys, uint32_t v);
extern void func_02060584(void *sys, int v);
extern uint32_t func_ov009_0219e428(int v);
extern void *func_02060634(void *sys, int a, int b);
extern void *func_02062a78(void *obj, uint32_t a, uint32_t b, uint32_t c,
                           uint32_t d, uint32_t e, int32_t f, void *g);
extern void *func_0203b6fc(void);
extern void *func_02062a30(void *owner);

extern uint8_t data_ov009_021b068c[];
extern void *data_0213df20;
extern uint32_t data_ov009_021b0684[2];

void func_ov009_021a1c9c(uint8_t *self)
{
    uint32_t loc[4];
    uint32_t off;
    void *a;
    void *obj;
    void *sysp;
    void *s9c;
    void *r7;
    uint32_t vr;
    void **vt;

    off = 0x1f8;
    if (self[0x225] == 0) {
        func_02021338(0x23);
    } else {
        func_02021338(0x25);
    }
    a = func_ov009_021a0a50(self, 1);
    func_02056bc0(self + 0x14, a);
    *(void **)(self + off) = func_0203bb94(data_ov009_021b068c, 1, 0, 0);

    func_02060548(*(void **)((uint8_t *)data_0213df20 + 0x20), 3);
    func_02060564(*(void **)((uint8_t *)data_0213df20 + 0x20), 0x10, 0);

    sysp = *(void **)((uint8_t *)data_0213df20 + 0x20);
    obj = *(void **)(self + off);
    vt = *(void ***)obj;
    vr = ((uint32_t (*)(void *))vt[13])(obj);
    func_02060574(sysp, 0x3f ^ vr);
    func_02060584(*(void **)((uint8_t *)data_0213df20 + 0x20), 0x3f);

    func_02056bc0(self + 0x48, *(void **)(self + off));

    sysp = *(void **)((uint8_t *)data_0213df20 + 0x20);
    func_ov009_0219e428(0x3c);
    s9c = func_02060634(sysp, 0, 0x10);

    loc[0] = 0;
    loc[1] = 0;
    loc[2] = 0;
    loc[3] = 0xc0;
    obj = *(void **)(self + off);
    sysp = func_02062a78(obj, loc[2], loc[3], loc[0], loc[1],
                         func_ov009_0219e428(0x3c), -2, s9c);

    r7 = func_0203b6fc();
    func_02056bc0(r7, sysp);
    func_02056bc0(r7, s9c);
    {
        void *r1 = func_02062a30(*(void **)(self + off));
        func_02056bc0(self + 0x14, r1);
    }
    func_02056bc0(self + 0x14, r7);

    *(uint32_t *)(self + 0x80) = data_ov009_021b0684[0];
    *(uint32_t *)(self + 0x84) = data_ov009_021b0684[1];
}
