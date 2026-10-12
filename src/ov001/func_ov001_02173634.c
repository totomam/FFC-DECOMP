#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *obj);
extern uint8_t *func_ov000_0216876c(void *obj, int32_t idx);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov000_0216743c(uint32_t v);

typedef struct {
    uint32_t type;
    const uint8_t *text;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
} Ent;

uint32_t func_ov001_02173634(uint8_t *p)
{
    void *tbl = *(void **)(p + 0x164);
    uint32_t total = 0;
    int32_t count;
    int32_t i;
    Ent *e;

    count = func_ov000_02168768(*(void **)tbl);
    if (count == 0) {
        return 0;
    }
    i = 0;
    if (count > 0) {
        do {
            e = (Ent *)func_ov000_0216876c(*(void **)tbl, i);
            if (e->type == 0) {
                total = total + func_02092864(e->text);
                total += e->fc;
                total = total + (e->f14 << 1);
                total += 1;
            } else if (e->type == 3) {
                total += func_ov000_0216743c(e->f8);
            }
            i++;
        } while (i < count);
    }
    return total + (count - 1);
}
