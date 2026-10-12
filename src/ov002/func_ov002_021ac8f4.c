#include "ffc/types.h"

extern uint32_t func_ov002_021aa850(const void *object);
extern uint32_t func_ov002_021a16ec(void);
extern uint32_t func_ov002_021aa780(const void *object);
extern int32_t func_0208f694(int32_t value);
extern uint32_t func_ov002_021ac9d8(uint32_t one_based_index, uint32_t row);

typedef struct {
    int32_t v[6];
} Tbl;

extern const Tbl data_ov002_021d3ac4;

uint32_t func_ov002_021ac8f4(uint32_t a, uint32_t b, uint32_t c, const void *obj)
{
    Tbl t;
    uint32_t flag;
    uint32_t idx;
    int32_t p;
    int32_t q;

    func_ov002_021aa850(obj);
    flag = (b == func_ov002_021a16ec()) ? 1 : 0;
    idx = func_ov002_021aa780(obj);
    t = data_ov002_021d3ac4;
    p = t.v[a];
    if (flag) {
        q = t.v[idx];
    } else {
        q = 7 - t.v[idx];
    }
    p = func_0208f694(p - q);
    return func_ov002_021ac9d8(c, (uint32_t)p);
}
