#include "ffc/types.h"

extern uint32_t *func_ov002_021a5218(void *self, uint32_t idx);
extern void func_ov002_021c866c(uint32_t *obj);
extern void func_02056844(uint32_t *obj);
extern void func_0200d5ec(void *self);

typedef struct {
    uint32_t unk0;
    uint32_t count;
} Owner;

void *func_ov002_021c86bc(Owner *p)
{
    uint32_t i;
    uint32_t *val;

    if (p->count != 0) {
        for (i = 0; i < p->count; i++) {
            val = (uint32_t *)*func_ov002_021a5218(p, i);
            if (val != 0 && val != 0) {
                func_ov002_021c866c(val);
                func_02056844(val);
            }
        }
    }
    func_0200d5ec(p);
    return p;
}
