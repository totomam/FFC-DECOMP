#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t w[3];
} Node;

extern void *func_0205681c(uint32_t size);
extern void func_02056bf4(void *a, void *b);
extern void func_02056bc0(void *a, void *b);
extern void func_02005988(Node *a, void *b);
extern void *func_020059cc(void *object);
extern void *func_02063c94(void *a, Node *b, void *c, int d, int e);
extern void func_020642e8(void *a, int b);
extern void func_ov002_021ba568(void *self, Pair c);
extern void func_ov002_021ba584(void *self);
extern void func_ov002_021ba5a4(void *self);

#define FIELD(T, off) (*(T *)((uint8_t *)self + (off)))

void func_ov002_021ba448(void *self, void *arg)
{
    Node tmp;
    Pair cur;
    Pair pr;
    void *obj;
    void **vt;
    void *p;
    int r7;
    int r6;

    if (FIELD(void *, 0x90) == arg) {
        return;
    }
    FIELD(void *, 0x90) = arg;

    r6 = 0;
    cur.a = FIELD(uint32_t, 0x88);
    cur.b = FIELD(uint32_t, 0x8c);

    obj = FIELD(void *, 0x80);
    if (obj != 0) {
        vt = *(void ***)obj;
        ((void (*)(Pair *, void *))vt[4])(&pr, obj);
        cur.a = pr.a;
        cur.b = pr.b;

        obj = FIELD(void *, 0x80);
        vt = *(void ***)obj;
        r6 = ((int (*)(void *))vt[0x30 / 4])(obj) == 0;
        func_02056bf4((uint8_t *)self + 0x48, FIELD(void *, 0x80));

        obj = FIELD(void *, 0x80);
        if (obj != 0) {
          if (obj != 0) {
            vt = *(void ***)obj;
            ((void (*)(void *))vt[1])(obj);
          }
          FIELD(void *, 0x80) = 0;
        }
    }

    r7 = 0;
    p = func_0205681c(0x80);
    if (p != 0) {
        func_02005988(&tmp, arg);
        r7 = 1;
        p = func_02063c94(p, &tmp, FIELD(void *, 0x84), 2, r7);
    }
    FIELD(void *, 0x80) = p;
    if (r7) {
        func_020059cc(&tmp);
    }

    func_020642e8(FIELD(void *, 0x80), 0);

    obj = FIELD(void *, 0x80);
    vt = *(void ***)obj;
    ((void (*)(void *, int))vt[0x20 / 4])(obj, 2);

    obj = FIELD(void *, 0x80);
    vt = *(void ***)obj;
    ((void (*)(void *, int))vt[0x3c / 4])(obj, 1);

    func_ov002_021ba568(self, cur);
    if (r6 != 0) {
        func_ov002_021ba584(self);
    } else {
        func_ov002_021ba5a4(self);
    }

    func_02056bc0((uint8_t *)self + 0x48, FIELD(void *, 0x80));
}
