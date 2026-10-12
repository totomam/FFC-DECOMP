#include "ffc/types.h"

extern int func_ov003_021464f4(void *a, uint32_t k);
extern void func_ov003_02155bf0(int r, uint32_t f);
extern void func_ov003_02155c9c(int r, uint32_t f);

typedef struct {
    uint8_t type;
    uint8_t pad;
    uint16_t key;
    uint16_t key2;
    uint16_t pad2;
} Ent;

typedef struct {
    uint32_t pad[2];
    uint32_t n;
    uint32_t off;
} Tab;

static inline Ent *get(Tab *t, uint32_t i) {
    return (Ent *)((uint8_t *)t + t->off) + i;
}

void func_ov003_0214dc48(void *a, uint32_t key, Tab *x, uint32_t flag) {
    uint32_t i;
    int r;
    for (i = 0; x && i < x->n; i++) {
        Ent *e = get(x, i);
        if (e != 0) {
            if (e->type == 0) {
                if (key == e->key) {
                    r = func_ov003_021464f4(a, e->key);
                    if (r == 0) return;
                    func_ov003_02155bf0(r, flag);
                    return;
                }
                if (key == e->key2) {
                    r = func_ov003_021464f4(a, e->key2);
                    if (r == 0) return;
                    func_ov003_02155bf0(r, flag == 0);
                    return;
                }
            } else if (key == e->key) {
                r = func_ov003_021464f4(a, e->key);
                if (r == 0) return;
                func_ov003_02155c9c(r, flag);
                return;
            }
        }
    }
}
