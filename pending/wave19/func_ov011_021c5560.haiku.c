#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov011_021c5520(void *p);
extern Pair data_ov011_021cb454[];

void func_ov011_021c5560(void *p)
{
    uint8_t *base = (uint8_t *)p;
    uint8_t idx;
    void *obj;

    func_ov011_021c5520(p);
    idx = base[0x117];
    obj = *(void **)(base + 0xe4);
    ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, data_ov011_021cb454[idx]);
}
