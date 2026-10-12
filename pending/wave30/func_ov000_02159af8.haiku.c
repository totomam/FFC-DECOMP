#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);
extern uint32_t func_ov001_021758e8(uint32_t a);

typedef struct {
    uint32_t f0;
    uint32_t arg;
    uint32_t count;
    uint32_t lo;
    uint32_t hi;
} Rec;

typedef struct {
    uint8_t pad[0xc];
    Rec *rec;
} Glob;

extern Glob data_ov000_0217004c;

uint32_t func_ov000_02159af8(void)
{
    uint32_t r4 = 0;
    Rec *r5;
    Rec *p;
    uint64_t now;
    uint64_t q;

    now = func_020882cc();
    r5 = data_ov000_0217004c.rec;
    q = func_0209a6d4((now - *(uint64_t *)&r5->lo) << 6, 0x82eaULL);
    if (q >= 300ULL) {
        r5->count++;
        r4 = func_ov001_021758e8(data_ov000_0217004c.rec->arg);
        now = func_020882cc();
        p = data_ov000_0217004c.rec;
        p->lo = (uint32_t)now;
        p->hi = (uint32_t)(now >> 32);
    }
    return r4;
}
