#include "ffc/types.h"

typedef struct {
    uint32_t id : 24;
    uint32_t type : 8;
} Hdr;

extern Hdr *func_0207a8cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0207b204(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0207b1c0(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0207ab40(uint32_t a);

uint32_t func_0207b034(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t *out) {
    Hdr *p;
    uint32_t r;

    p = func_0207a8cc(a, b, c, d);
    if (p == 0) {
        return 5;
    }
    if (b & 4) {
        if (p->type & 1) {
            r = func_0207b204(p->id, c, d);
        } else {
            r = func_0207b1c0(p->id, c, d);
        }
        if (r == 0) {
            return 9;
        }
    } else {
        r = func_0207ab40(p->id);
    }
    if (out != 0) {
        *out = r;
    }
    return 0;
}
