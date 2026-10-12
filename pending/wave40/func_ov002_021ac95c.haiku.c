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
    uint32_t t1;
    uint32_t t2;
    uint32_t same;
    uint32_t bi;
    uint32_t ai;
    Tbl t;
    int32_t d;

    func_ov002_021aa850(a);
    t1 = func_ov002_021a16ec();
    func_ov002_021aa850(b);
    t2 = func_ov002_021a16ec();
    if (t1 != t2) {
        same = 0;
    } else {
        same = 1;
    }

    bi = func_ov002_021aa780(b);
    ai = func_ov002_021aa780(a);
    t = *(const Tbl *)data_ov002_021d3ac4;

    if (same) {
        d = (int32_t)t.v[ai] - (int32_t)t.v[bi];
    } else {
        d = (int32_t)t.v[ai] - (7 - (int32_t)t.v[bi]);
    }
    d = func_0208f694(d);
    return func_ov002_021ac9d8(func_ov002_021aab4c(a), (uint32_t)d);
}
