#include "ffc/types.h"

extern void func_02056c4c(void *obj);
extern void func_ov009_0219da5c(void *a, uint32_t b);
extern void func_ov009_0219cf28(void *obj, int n);
extern void func_ov009_0219b6a8(void *obj, int n);
extern void func_ov009_0219d2fc(void *obj, void *p, int n);
extern void func_ov009_0219a8f4(void *a);
extern void func_ov009_0219b660(void *obj);
extern void *func_0203b688(void);
extern void *func_0203b720(void);
extern uint32_t func_ov009_0219d2bc(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_ov009_0219d17c(void *obj, uint32_t a, uint32_t b, void *c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_02035fd0(void *object);

extern char *data_0213df18;
extern uint32_t data_0213df20;
extern uint32_t data_ov009_021aff98[];
extern uint32_t data_ov009_021affa0[];
extern char data_020ae644[];
extern char data_020ae654[];
extern uint32_t data_ov009_021affa8[];

typedef struct { uint32_t a, b; } Pair;

typedef struct {
    uint32_t a04, a08, a0c, a10, a14, a18, a1c, a20, a24, a28, a2c, a30;
    uint16_t hw[17];
    uint32_t a58, a5c, a60;
} Frame;

void func_ov009_0219cfb4(void *obj, int n)
{
    unsigned char *p = (unsigned char *)obj;
    Frame f;
    void *t;
    uint32_t v;
    uint32_t zero;
    int i;
    Pair *q;

    if (n > 4 || *(int *)(p + 0x184) == n) {
        return;
    }
    if (p[0x204] == 0) {
        data_0213df20 = *(uint32_t *)(data_0213df18 + 0x20);
    } else {
        data_0213df20 = *(uint32_t *)(data_0213df18 + 0x24);
    }
    func_02056c4c(*(void **)(p + 0x170));
    if (n == 0) {
        func_ov009_0219da5c(*(void **)(p + 0x178), p[0x1fc] == 0);
    } else if (p[0x204] == 0) {
        func_ov009_0219da5c(*(void **)(p + 0x178), 0);
    }
    func_ov009_0219cf28(p, n);
    func_ov009_0219b6a8(p, n);
    if (p[0x1ec] && n < 3) {
        func_ov009_0219d2fc(p, p + 0x18c, n);
    }
    if (*(int *)(p + 0x184) == 0) {
        func_02056c4c(*(void **)(p + 0x180));
        func_02056c4c(*(void **)(p + 0x208));
    } else if ((uint32_t)(*(int *)(p + 0x184) - 1) <= 1) {
        func_ov009_0219a8f4(*(void **)(p + 0x17c));
        func_ov009_0219b660(p);
    }
    *(int *)(p + 0x184) = n;
    q = (Pair *)data_ov009_021aff98;
    t = func_0203b688();
    v = func_ov009_0219d2bc(p, q->a, q->b);
    func_02056bc0(t, (void *)v);
    if (p[0x1fc]) {
        q = (Pair *)data_ov009_021affa0;
        v = func_ov009_0219d2bc(p, q->a, q->b);
        func_02056bc0(t, (void *)v);
    } else {
        f.a04 = *(uint32_t *)(p + 0x18c);
        f.a08 = (uint32_t)data_020ae644;
        f.a0c = *(uint32_t *)(p + 0x194);
        f.a10 = (uint32_t)data_020ae644;
        f.a14 = *(uint32_t *)(p + 0x19c);
        f.a18 = (uint32_t)data_020ae644;
        f.a1c = *(uint32_t *)(p + 0x1a4);
        f.a20 = (uint32_t)data_020ae644;
        f.a24 = *(uint32_t *)(p + 0x1ac);
        f.a28 = (uint32_t)data_020ae654;
        f.a2c = *(uint32_t *)(p + 0x1b4);
        f.a30 = *(uint32_t *)(p + 0x1b8);
        for (i = 0; i < 0x11; i++) {
            f.hw[i] = *(uint16_t *)(p + 0x1bc + 2 * i);
        }
        f.a58 = *(uint32_t *)(p + 0x1e0);
        f.a5c = *(uint32_t *)(p + 0x1e4);
        f.a60 = *(uint32_t *)(p + 0x1e8);
        zero = 0;
        q = (Pair *)data_ov009_021affa8;
        v = func_ov009_0219d17c(p, q->a, q->b, &f.a04, zero);
        func_02056bc0(t, (void *)v);
        func_02035fd0(&f.a04);
    }
    v = (uint32_t)func_0203b720();
    func_02056bc0(p + 0x14, (void *)v);
    func_02056bc0(p + 0x14, t);
}
