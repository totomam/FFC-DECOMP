#include "ffc/types.h"

typedef struct {
    uint8_t type;
    uint8_t sub;
    uint16_t val;
} Msg;

extern int32_t func_0204aa9c(int32_t a0);
extern int32_t func_ov000_0214ed44(int32_t a0, Msg *a1, void *a2, int32_t a3, int32_t a4, Msg a5, uint32_t a6);

typedef struct {
    int32_t pad0;
    int32_t pad1;
    int32_t field8;
    int32_t fieldC;
} Obj;

int32_t func_0204aa28(int32_t a0, int32_t a1, Obj *p, int32_t a3, uint32_t a4, uint16_t a5)
{
    Msg m;
    int32_t r;

    m.type = 8;
    m.sub = 2;
    m.val = (uint16_t)((((uint32_t)a5 >> 8) & 0xff) | (((uint32_t)a5 & 0xff) << 8));

    if (p->field8 != 0 && p->fieldC == 0) {
        r = func_0204aa9c(a0);
        if (r < 0) {
            return r;
        }
    }

    r = func_ov000_0214ed44(a3, &m, p, a3, a3, m, a4);
    if (r >= 0) {
        return 0;
    }
    if (p->pad0 != 0) {
        return -1014;
    }
    return -1015;
}
