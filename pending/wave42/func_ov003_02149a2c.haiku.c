#include "ffc/types.h"

typedef struct Node {
    uint32_t pad;
    struct Node *next;
} Node;

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

extern int32_t func_ov003_0214f228(void *node, uint32_t idx, uint32_t p2, uint32_t p3, int32_t e, int32_t f);
extern void func_ov003_0214f240(Vec2 *out, void *node);
extern uint32_t func_020817c8(int32_t first, int32_t second);

void *func_ov003_02149a2c(void *obj, uint32_t p1, uint32_t p2, uint32_t p3, int32_t e, int32_t f)
{
    Node *n;
    Vec2 v;
    int32_t dx;
    int32_t dy;
    uint32_t d;
    void *list = *(void **)((char *)obj + 0x190);
    n = *(Node **)((char *)list + 0x14);
    while (n != 0) {
        if (func_ov003_0214f228(n, 0x190, p2, p3, e, f) != 0) {
            func_ov003_0214f240(&v, n);
            dy = v.y - e;
            dx = v.x - f;
            d = func_020817c8(dy, dy);
            d = d + func_020817c8(dx, dx);
            if (d <= (9u << 10)) {
                return n;
            }
        }
        n = n->next;
    }
    return 0;
}
