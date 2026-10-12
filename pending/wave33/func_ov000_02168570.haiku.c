#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *a);
extern void *func_ov000_0216876c(void *a, int32_t i);
extern int32_t func_ov000_021684f8(void *q);

typedef struct {
    void *f0;
    int32_t pad4;
    int32_t f8;
} Obj;

typedef struct {
    uint8_t pad[0x14];
    int32_t f14;
} Item;

int32_t func_ov000_02168570(Obj *p, void *q)
{
    int32_t cnt = 0;
    int32_t i = p->f8 + 1;
    while (i < func_ov000_02168768(p->f0)) {
        Item *it = (Item *)func_ov000_0216876c(p->f0, i);
        int32_t f8 = p->f8;
        if (it->f14 == f8) {
            if (!(q != 0 && func_ov000_021684f8(q) == 0)) {
                cnt++;
            }
        } else if (it->f14 < f8) {
            break;
        }
        i++;
    }
    return cnt;
}
