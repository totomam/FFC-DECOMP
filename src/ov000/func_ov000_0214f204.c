#include "ffc/types.h"

extern uint32_t func_ov000_0214e9c8(uint32_t x);
extern void func_020871d8(int x);

typedef struct {
    uint32_t w0;
    int16_t s4;
    uint16_t s6;
} Entry;

int func_ov000_0214f204(Entry *e, uint32_t count, int64_t v) {
    int hits;
    int flag;
    uint32_t i;
    Entry *p;
    int32_t mask;
    uint32_t r;

    if (count == 0 || e == 0) {
        return 0;
    }
    flag = (v != -1);
    for (;;) {
        p = e;
        hits = 0;
        for (i = 0; i < count; i++) {
            mask = (int32_t)p->s4 | 0xe0;
            r = func_ov000_0214e9c8(p->w0) & mask;
            if (r) {
                hits++;
            }
            p->s6 = (uint16_t)r;
            p++;
        }
        if (hits > 0) {
            break;
        }
        if (flag && v <= 0) {
            break;
        }
        func_020871d8(1);
        v -= 0x20b;
    }
    return hits;
}
