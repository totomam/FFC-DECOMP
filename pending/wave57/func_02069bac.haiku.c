#include "ffc/types.h"

typedef struct {
    void *self;
    int32_t a;
    int32_t b;
    int32_t c;
} Vec3;

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

typedef struct Node {
    void **vt;
    struct Node *next;
    uint8_t pad8[0x7c];
    uint8_t f84;
    uint8_t pad85[2];
    uint8_t f87;
} Node;

struct Root {
    uint8_t pad[0x14];
    Node *head;
};

extern int32_t func_02069cc0(void *self, int32_t *out, int32_t a, int32_t b, int32_t c, int32_t (*arr)[4]);
extern uintptr_t func_02069734(const void *object);
extern void func_0206936c(int32_t *out, void *node, int32_t c);
extern int32_t func_0208f694(int32_t value);

uintptr_t func_02069bac(Vec3 v, int32_t q, int32_t p1, int32_t p2, int32_t p3) {
    void *self = v.self;
    int32_t arr[3][4];
    int32_t out38[4];
    Vec2 out30;
    int32_t best = 0x7fffffff;
    uintptr_t result = 0;
    uintptr_t target;
    struct Root *root;
    Node *node;
    int32_t i;

    if (!func_02069cc0(self, &v.a, p1, p2, p3, arr)) {
        return 0;
    }
    target = func_02069734(self);
    root = *(struct Root **)((uint8_t *)self + 0x90);
    for (node = root->head; node != 0; node = node->next) {
        int32_t ok;
        int32_t dist;
        Vec2 cur;
        Vec2 pos;
        if ((uintptr_t)node == target) continue;
        if (node->f84 == 0) continue;
        if (node->f87 != 0) continue;
        func_0206936c(out38, node, p3);
        ok = 1;
        for (i = 0; i < 3; i++) {
            int32_t *e = arr[i];
            int32_t s0 = e[0] * (out38[0] - e[1]) + e[2] * (out38[1] - e[3]);
            int32_t s1 = e[0] * (out38[2] - e[1]) + e[2] * (out38[3] - e[3]);
            if (s0 < 0 && s1 < 0) {
                ok = 0;
                break;
            }
        }
        if (!ok) continue;
        ((void (*)(Vec2 *, Node *))node->vt[5])(&out30, node);
        cur = out30;
        pos.x = p1;
        pos.y = p2;
        {
            int32_t dy = func_0208f694(pos.y - cur.y);
            int32_t dx = func_0208f694(pos.x - cur.x);
            dist = dx + dy;
        }
        if (dist < best) {
            best = dist;
            result = (uintptr_t)node;
        }
    }
    return result;
}
