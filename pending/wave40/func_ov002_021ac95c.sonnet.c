#include "ffc/types.h"

extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a16ec(void);
extern uint32_t func_ov002_021aa780(const void *object);
extern int32_t func_0208f694(int32_t value);
extern uint8_t func_ov002_021aab4c(const void *object);
extern uint32_t func_ov002_021ac9d8(uint32_t one_based_index, uint32_t row);
extern const uint32_t data_ov002_021d3ac4[6];

typedef struct {
    uint32_t v[6];
} Tbl;

uint32_t func_ov002_021ac95c(const void *a, const void *b) {
    Tbl t;
    int32_t d;
    int same;
    uint32_t bi, ai;

    func_ov002_021aa850(a);
    uint32_t t1 = func_ov002_021a16ec();
    func_ov002_021aa850(b);
    same = (t1 == func_ov002_021a16ec());

    bi = func_ov002_021aa780(b);
    ai = func_ov002_021aa780(a);
    t = *(const Tbl *)data_ov002_021d3ac4;

    {
        int32_t x = t.v[ai];
        int32_t y;
        if (same) y = t.v[bi]; else y = 7 - t.v[bi];
        d = x - y;
    }
    d = func_0208f694(d);
    return func_ov002_021ac9d8(func_ov002_021aab4c(a), d);
}
