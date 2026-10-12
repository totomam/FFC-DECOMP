#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern int func_0201bff4(uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint16_t type;
    uint16_t pad;
    uint32_t count;
    uint32_t off;
} Obj;

int func_ov003_0216af58(Obj *p)
{
    int flag = 1;
    int want;
    uint32_t i;
    uint16_t t = p->type;

    if (t == 8 || t == 10) {
    } else {
        flag = 0;
    }
    want = 1;
    if (t == 8 || t == 9) {
    } else {
        want = 0;
    }
    for (i = 0; i < p->count; i++) {
        uint32_t e = *(uint32_t *)((uint8_t *)p + p->off + i * 4);
        int r = func_0201bff4(data_020b93b8, e >> 24, e & 0xffffff);
        if (want == r) {
            return flag;
        }
    }
    if (flag == 0) {
        return 1;
    }
    return 0;
}
