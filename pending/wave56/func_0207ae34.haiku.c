#include "ffc/types.h"

typedef struct {
    uint8_t type;
    uint8_t sub;
    uint16_t pad;
    uint32_t val;
} Entry;

typedef struct {
    uint32_t count;
    Entry entries[];
} Table;

extern Table *func_0207a9fc(void *a, uint32_t b);
extern uint32_t func_0207aed0(uint32_t val, uint32_t sub, uint32_t x, uint32_t one, uint32_t zero);
extern uint32_t func_0207af20(uint32_t val, uint32_t sub, uint32_t x, uint32_t one, uint32_t zero);
extern uint32_t func_0207af5c(uint32_t val, uint32_t sub, uint32_t x, uint32_t one, uint32_t zero);
extern uint32_t func_0207b034(uint32_t val, uint32_t sub, uint32_t x, uint32_t one, uint32_t zero);

uint32_t func_0207ae34(void *a, uint32_t x) {
    Table *t = func_0207a9fc(a, x);
    uint32_t i;
    uint32_t r;

    if (t == 0) {
        return 1;
    }
    for (i = 0; i < t->count; i++) {
        Entry *e = &t->entries[i];
        switch (e->type) {
        case 0:
            r = func_0207aed0(e->val, e->sub, x, 1, 0);
            if (r != 0) return r;
            break;
        case 3:
            r = func_0207af20(e->val, e->sub, x, 1, 0);
            if (r != 0) return r;
            break;
        case 1:
            r = func_0207af5c(e->val, e->sub, x, 1, 0);
            if (r != 0) return r;
            break;
        case 2:
            r = func_0207b034(e->val, e->sub, x, 1, 0);
            if (r != 0) return r;
            break;
        }
    }
    return 0;
}
