#include "ffc/types.h"

typedef struct {
    uint8_t type;
    uint8_t sub;
    uint16_t val;
} Msg;

typedef struct {
    Msg msg;
    uint32_t last;
} Rest;

extern int32_t func_0204aa9c(int32_t a0, int32_t a1, void *a2, int32_t a3);
extern int32_t func_ov000_0214ed44(int32_t a0, Msg *a1);

typedef struct {
    int32_t pad0;
    int32_t pad1;
    int32_t field8;
    int32_t fieldC;
} Obj;

int32_t func_0204aa28(int32_t a0, int32_t a1, Obj *p, int32_t a3, uint32_t a4, uint32_t a5)
{
    int32_t first;
    Rest s;
    int32_t r;
    uint32_t hi;
    uint32_t lo;

    s.msg.type = 8;
    s.msg.sub = 2;
    lo = (uint16_t)a5;
    s.msg.val = (uint16_t)((uint8_t)((int32_t)lo >> 8) | ((lo << 8) & 0xff00));
    s.last = a4;
    first = a3;

    if (p->field8 != 0 && p->fieldC == 0) {
        r = func_0204aa9c(a0, a1, p, a3);
        if (r < 0) {
            return r;
        }
    }

    r = func_ov000_0214ed44(first, &s.msg);
    if (r < 0) {
        if (p->pad0 != 0) {
            return -1002;
        }
        return -1001;
    }
    return 0;
}
