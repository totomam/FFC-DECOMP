#include "ffc/types.h"

extern void *func_ov000_02165744(void);
extern int func_ov000_02165798(void *p);

typedef struct {
    uint32_t pad[3];
    uint32_t **tab;
} Obj;

uint32_t func_ov001_02182390(void)
{
    uint32_t ret = 0;
    Obj *o = (Obj *)func_ov000_02165744();
    uint32_t i;

    if (o == 0) {
        return 0;
    }

    i = 0;
    for (;;) {
        uint32_t *e = o->tab[i];
        uint32_t v;
        if (e == 0) {
            return ret;
        }
        v = *e;
        if (v == 0x100007f) {
            i++;
            continue;
        }
        ret = v;
        if (func_ov000_02165798(e) != 0) {
            return ret;
        }
        i++;
    }
}
