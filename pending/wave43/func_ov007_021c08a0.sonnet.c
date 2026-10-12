#include "ffc/types.h"

typedef struct {
    int8_t *name;
    int32_t type;
    int32_t a;
    int32_t b;
} Ent;

int func_ov007_021c08a0(Ent *p, int32_t n) {
    int32_t i;
    int32_t k;
    for (i = 0, k = 0; i < n; i++, k++) {
        Ent *e = &p[i];
        int32_t type;
        if (e->name == 0 || e->name[k] == 0) {
            return 7;
        }
        type = e->type;
        if (type >= 10) {
            return 8;
        }
        if (type == 4 && e->a == 0) {
            return 9;
        }
        if (type == 5 && e->a == 0) {
            return 9;
        }
        if (type == 8) {
            if (e->b < 0) {
                return 9;
            }
            if (e->a == 0 && e->b > 0) {
                return 9;
            }
        }
    }
    return 0;
}
