#include "ffc/types.h"

typedef struct Node {
    uint32_t pad;
    struct Node *next;
} Node;

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

typedef struct {
    int32_t wy;
    int32_t wx;
    char pad[0x54];
    int32_t dx;
    int32_t dy;
    Vec2 v;
    int32_t extra;
} Frame;

extern int32_t func_ov003_0214f228(void *node);
extern void func_ov003_0214f240(Vec2 *out, void *node);
extern uint32_t func_020817c8(int32_t first, int32_t second);

void *func_ov003_02149a2c(void *obj, int32_t p1, int32_t p2, ...)
{
    Node *n;
    Frame s;
    Vec2 *vp;
    int32_t d;
    int ok;
    n = *(Node **)(*(char **)((char *)obj + 0x190) + 0x14);
    if (n != 0) {
        vp = &s.v;
        s.wy = (&p1)[1];
        s.wx = (&p1)[0];
        do {
            ok = 0;
            if (func_ov003_0214f228(n) != 0) {
                func_ov003_0214f240(vp, n);
                s.dy = vp->y - s.wy;
                s.dx = vp->x - s.wx;
                int32_t a = func_020817c8(s.dy, s.dy);
                int32_t b = func_020817c8(s.dx, s.dx);
                d = b + a;
                if (d <= (9 << 10)) ok = 1;
            }
            if (ok) return n;
            n = n->next;
        } while (n != 0);
    }
    return 0;
}
