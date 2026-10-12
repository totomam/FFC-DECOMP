#include "ffc/types.h"

extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a16ec(uint32_t value);
extern uint32_t func_ov002_021aa780(const void *object);
extern int32_t func_0208f694(int32_t value);
extern uint32_t func_02081210(uint32_t a, uint32_t b);

typedef struct { uint32_t v[6]; } Tbl6;
extern const Tbl6 data_ov002_021d3ac4;

typedef struct {
    uint32_t pad[4];
    Tbl6 t;
    uint32_t v[8];
} Loc;

void func_ov002_021ace28(uint32_t *out, uint8_t *a, uint8_t *b) {
    uint8_t *obj = *(uint8_t **)(a + 0x138);
    Loc l;
    uint32_t e0, e1, p, q;
    int r4;
    int idx;

    l.v[0] = obj[0x1b];
    l.v[1] = obj[0x1c];
    l.v[2] = obj[0x1d];
    l.v[3] = obj[0x1e];
    l.v[4] = obj[0x1f];
    l.v[5] = obj[0x20];
    l.v[7] = obj[0x22];
    l.v[6] = obj[0x21];

    e0 = func_ov002_021a16ec(func_ov002_021aa850(a));
    e1 = func_ov002_021a16ec(func_ov002_021aa850(b));
    if (e0 != e1) {
        r4 = 0;
    } else {
        r4 = 1;
    }

    p = func_ov002_021aa780(b);
    q = func_ov002_021aa780(a);
    l.t = data_ov002_021d3ac4;

    idx = (int)l.t.v[q];
    if (r4 != 0) {
        idx = idx - (int)l.t.v[p];
    } else {
        idx = idx - (7 - (int)l.t.v[p]);
    }

    idx = func_0208f694(idx);
    e0 = l.v[idx];
    *out = func_02081210(e0 << 12, 0x64000);
}
