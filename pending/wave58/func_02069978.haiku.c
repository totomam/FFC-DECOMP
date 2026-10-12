#include "ffc/types.h"

typedef struct Quad { int32_t a, b, c, d; } Quad;
typedef struct Pair { int32_t x, y; } Pair;
typedef struct Node { uint8_t pad[0x10]; int32_t id; void *obj; } Node;
typedef struct Vt { void *f[8]; } Vt;

extern void func_02069b18(Node **out, char *list, void **pobj, int a3);
extern void func_0202a9ac(void *cursor);
extern int func_02069bac(char *self, Quad q, Pair p, int id);

int func_02069978(char *self, void *obj, int id, int a3) {
    Node *rng[2];
    Node *cur;
    int32_t dx, dy;
    int ret;
    Quad q;
    Pair p;
    Pair pos;
    Quad nq;

    func_02069b18(rng, self + 0xa4, &obj, a3);
    if (rng[0] != rng[1]) {
        cur = rng[0];
        while (cur != rng[1]) {
            if (cur->id == id) {
                void *o = cur->obj;
                if (o == 0) {
                    return 0;
                }
                if (!((uint8_t *)o)[0x84]) {
                    return 0;
                }
                if (((uint8_t *)o)[0x87]) {
                    return 0;
                }
                return (int)o;
            }
            func_0202a9ac(&cur);
        }
    }
    if (!self[0xb1]) {
        return 0;
    }

    q = ((Quad (*)(void *))((Vt *)*(void **)obj)->f[6])(obj);
    p = ((Pair (*)(void *))((Vt *)*(void **)obj)->f[5])(obj);
    ret = func_02069bac(self, q, p, id);
    if (ret) {
        return ret;
    }

    dx = 0;
    dy = 0;
    if (self[0xb3]) {
        if (id == 3) {
            dx = 0xff;
            dy = 0;
        }
        if (id == 1) {
            dx = -0x100;
            dy = 0;
        }
    }
    if (self[0xb4]) {
        if (id == 4) {
            dx = 0;
            dy = 0xc0;
        }
        if (id == 2) {
            dx = 0;
            dy = -0xc0;
        }
    }
    if (dx == 0 && dy == 0) {
        return 0;
    }

    p = ((Pair (*)(void *))((Vt *)*(void **)obj)->f[5])(obj);
    pos.x = p.x + dx;
    pos.y = p.y + dy;
    q = ((Quad (*)(void *))((Vt *)*(void **)obj)->f[6])(obj);
    nq.a = q.a + dx;
    nq.b = q.b + dy;
    nq.c = q.c + dx;
    nq.d = q.d + dy;
    return func_02069bac(self, nq, pos, id);
}
