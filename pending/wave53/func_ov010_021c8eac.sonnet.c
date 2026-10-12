#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;
extern void func_ov005_02196144(uint32_t a, uint8_t b);
extern void func_ov009_0219c000(uint32_t a);
extern void func_02035f58(void *p);
extern void func_ov010_021c92bc(void *self, void *p);
extern void func_02035fd0(void *p);
extern void *func_02056b10(void *owner);
extern void func_02056bc0(void *object, void *node);
extern void func_ov010_021c90b4(void *self);
extern uint32_t func_ov010_021c8fa0(void *self, P a, P b);
extern char data_020ae644[];
extern char data_020ae654[];
extern P data_ov010_021d1bcc;

typedef struct {
    uint32_t v;
    void *p;
} Ent;

typedef struct {
    void *p;
    uint32_t x;
    uint32_t y;
} Tail;

typedef struct {
    P out;
    Ent e[4];
    uint32_t v4;
    Tail tl;
    uint16_t hdst[17];
    uint16_t pad1;
    uint32_t t[3];
    uint32_t a[12];
    uint16_t hsrc[17];
    uint16_t pad2;
    uint32_t t2[3];
} Frame;

void func_ov010_021c8eac(uint8_t *self)
{
    Frame f;
    uint32_t n;
    uint16_t *x;
    uint16_t *s;
    void *obj;
    Tail *tp;

    func_ov005_02196144(*(uint32_t *)(self + 0xec), (uint8_t)(*(uint32_t *)(self + 0x10c) + 1));
    func_ov009_0219c000(*(uint32_t *)(self + 0xe8));
    func_02035f58(f.a);

    f.e[0].p = data_020ae644;
    f.e[0].v = f.a[0];
    f.e[1].p = data_020ae644;
    f.e[1].v = f.a[2];
    f.e[2].p = data_020ae644;
    f.e[2].v = f.a[4];
    f.e[3].p = data_020ae644;
    f.e[3].v = f.a[6];
    f.v4 = f.a[8];
    tp = &f.tl;
    tp->x = f.a[10];
    tp->p = data_020ae654;
    tp->y = f.a[11];

    s = f.hsrc;
    x = f.hdst;
    n = 0x11;
    do {
        uint16_t v = *s;
        s++;
        *x = v;
        x++;
    } while (--n != 0);

    f.t[0] = f.t2[0];
    f.t[1] = f.t2[1];
    f.t[2] = f.t2[2];

    func_ov010_021c92bc(self, f.e);
    func_02035fd0(f.e);

    obj = func_02056b10(*(void **)(self + 0xe8) + 0x14);
    func_02056bc0(self + 0x14, obj);

    func_ov010_021c90b4(self);

    if (*(uint32_t *)(self + 0x114) - 1 <= 1) {
        obj = *(void **)(self + 0xe4);
        f.out = ((P (*)(void *))(*(void ***)obj)[4])(obj);
        func_02056bc0(self + 0x14, (void *)func_ov010_021c8fa0(self, data_ov010_021d1bcc, f.out));
    }

    func_02035fd0(f.a);
}
