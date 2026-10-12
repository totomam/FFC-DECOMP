#include "ffc/types.h"

typedef struct Obj { void **vt; } Obj;

typedef struct Pair { uint32_t a; uint32_t b; } Pair;
extern Pair data_020ae17c;
extern Pair data_020ae184;
extern uint32_t func_02032cac(void *p, Pair v);
extern void *func_02056aa4(void *p);
extern void *func_02032cec(void *p, Pair v, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern void func_02034dfc(void *x);
extern void func_02034e28(void *x);

void func_02032b84(uint8_t *p) {
  if (*(int32_t *)(p + 0xa0) == -1) {
    uint32_t r4;
    void *r6;
    void *n;
    uint8_t *s;
    uint8_t *q;
    *(int32_t *)(p + 0xa0) = *(int32_t *)(p + 0xa0) + 1;
    s = p + 0x14;
    s[0x12] = (uint8_t)((s[0x12] & ~0xffu) | 1u);
    q = p + 0x48;
    q[0x12] = (uint8_t)((q[0x12] & ~0xffu) | 1u);
    *(uint32_t *)(q + 0xc) = (*(uint32_t *)(q + 0xc) & ~0xffu) | 1u;
    r4 = func_02032cac(p, data_020ae17c);
    r6 = func_02056aa4(p + 0x48);
    n = func_02032cec(p, data_020ae184, 0);
    p = p + 0x14;
    func_02056bc0(p, n);
    func_02056bc0(p, r6);
    func_02056bc0(p, (void *)r4);
    return;
  } else {
    uint8_t *bp = p + 0xa4;
    int32_t a0 = *(int32_t *)(p + 0xa0);
    if (*bp != 0) {
      int32_t r = func_0209a76c(*(int32_t *)(p + 0xa0) + 1, (int32_t)(*bp << 1));
      *(int32_t *)(p + 0xa0) = r;
      if (r == (int32_t)*bp + 1) {
        Obj *o = *(Obj **)(p + 0x84);
        ((void (*)(void *))o->vt[10])(o);
        o = *(Obj **)(p + 0x80);
        ((void (*)(void *))o->vt[10])(o);
        func_02034dfc(*(void **)(p + 0xbc));
      }
    } else {
      if (a0 > 0) {
        Obj *o;
        *(int32_t *)(p + 0xa0) = 0;
        o = *(Obj **)(p + 0x84);
        ((void (*)(void *))o->vt[10])(o);
        o = *(Obj **)(p + 0x80);
        ((void (*)(void *))o->vt[10])(o);
        func_02034dfc(*(void **)(p + 0xbc));
        return;
      }
    }
  }
  if (*(int32_t *)(p + 0xa0) == 1) {
    Obj *o = *(Obj **)(p + 0x84);
    ((void (*)(void *))o->vt[11])(o);
    o = *(Obj **)(p + 0x80);
    ((void (*)(void *))o->vt[11])(o);
    func_02034e28(*(void **)(p + 0xbc));
  }
}
