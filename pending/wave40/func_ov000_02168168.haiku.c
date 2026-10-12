#include "ffc/types.h"

typedef struct {
    void *list;
    int lo;
    int key;
    int idx;
} Ctx;

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t v8;
    uint32_t vc;
    int pad10;
    int key;
} Item;

extern int func_ov000_02168768(void *list);
extern Item *func_ov000_0216876c(void *list, int i);
extern int func_ov000_021684f8(void *a, void *b);

int func_ov000_02168168(Ctx *p, void *q, uint32_t *o1, uint32_t *o2) {
    Item *item;
    int i;

    if (p->idx == -1) {
        p->idx = p->key;
    }
    i = p->idx;
    i++;
    if (i < func_ov000_02168768(p->list)) {
        do {
            item = func_ov000_0216876c(p->list, i);
            if (item->key == p->key && func_ov000_021684f8(q, item)) {
                p->idx = i;
                *o1 = item->v8;
                *o2 = item->vc;
                return 1;
            }
            if (item->key < p->key) {
                return 0;
            }
            i++;
        } while (i < func_ov000_02168768(p->list));
    }
    return 0;
}
