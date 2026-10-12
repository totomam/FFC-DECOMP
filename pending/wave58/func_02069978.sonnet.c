#include "ffc/types.h"

typedef struct Quad { int32_t a, b, c, d; } Quad;
typedef struct Pair { int32_t x, y; } Pair;
typedef struct Node { uint8_t pad[0x10]; int32_t id; void *obj; } Node;
typedef struct Range { Node *b, *e; } Range;
typedef struct Vt { void *f[8]; } Vt;

extern void func_02069b18(Node **out, char *list, void **pobj, int a3);
extern void func_0202a9ac(void *cursor);
extern int func_02069bac(char *self, Quad q, Pair p, int id);

int func_02069978(char *self, void *obj, int id, int a3) {
    Range rng, r1, r2;
    Node *cur;
    Pair d, zero;
    int ret;
    Quad q;
    Pair p;
    Pair pos;
    Quad nq;

    func_02069b18((Node **)&rng, self + 0xa4, &obj, a3);
    r1 = rng;
    r2 = r1;
    if (r2.b != r2.e) {
        cur = r2.b;
        while (cur != r2.e) {
            if (cur->id == id) {
                void *o = cur->obj;
                if (o == 0) return 0;
                if (!((uint8_t *)o)[0x84]) return 0;
                if (((uint8_t *)o)[0x87]) return 0;
                return (int)o;
            }
            func_0202a9ac(&cur);
        }
        if (!self[0xb1]) return 0;
    }


    q = ((Quad (*)(void *))((Vt *)*(void **)obj)->f[6])(obj);
    p = ((Pair (*)(void *))((Vt *)*(void **)obj)->f[5])(obj);
    ret = func_02069bac(self, q, p, id);
    if (ret) {
        return ret;
    }

    d.x = 0;
    d.y = 0;
    if (self[0xb3]) {
        if (id == 3) { d.x = 0xff; d.y = 0; }
        if (id == 1) { d.x = -0x100; d.y = 0; }
    }
    if (self[0xb4]) {
        if (id == 4) { d.x = 0; d.y = 0xc0; }
        if (id == 2) { d.x = 0; d.y = -0xc0; }
    }
    zero.x = 0;
    zero.y = 0;
    if (d.x == zero.x && d.y == zero.y) return 0;

    p = ((Pair (*)(void *))((Vt *)*(void **)obj)->f[5])(obj);
    pos.x = p.x + d.x;
    pos.y = p.y + d.y;
    q = ((Quad (*)(void *))((Vt *)*(void **)obj)->f[6])(obj);
    nq.a = q.a + d.x;
    nq.b = q.b + d.y;
    nq.c = q.c + d.x;
    nq.d = q.d + d.y;
    return func_02069bac(self, nq, pos, id);
}
