#include "ffc/types.h"

struct Ctx {
    void *list;
    uint32_t unused4;
    int start;
    int cur;
};

struct Elem {
    uint32_t w0;
    uint32_t w1;
    void *val;
    uint32_t w3;
    uint32_t w4;
    int key;
};

extern int func_ov000_02168768(void *list);
extern struct Elem *func_ov000_0216876c(void *list, int idx);
extern int func_ov000_021684f8(void *arg, struct Elem *e);
extern void *func_02093b18(void);

int func_ov000_021682d0(struct Ctx *p, void *arg, void **out)
{
    struct Elem *e;
    int i;

    if (p->cur == -1) {
        p->cur = p->start;
    }
    i = p->cur + 1;
    while (i < func_ov000_02168768(p->list)) {
        e = func_ov000_0216876c(p->list, i);
        if (e->key == p->start && func_ov000_021684f8(arg, e) != 0) {
            p->cur = i;
            if (e->val == 0) {
                return 0;
            }
            *out = func_02093b18();
            return 1;
        }
        if (e->key < p->start) {
            return 0;
        }
        i++;
    }
    return 0;
}
