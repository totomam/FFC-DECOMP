#include "ffc/types.h"

extern int32_t func_0208fddc(void);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t pad[56];
    int32_t (*f44)(uint32_t);
} Obj;

int32_t func_0208fd8c(Obj *p) {
    int32_t r4;
    int32_t r;
    int32_t flag;
    uint32_t t;

    if (p == 0) {
        return -1;
    }
    t = p->f4;
    if (((t << 0x16) >> 0x1d) == 0) {
        return 0;
    }
    r4 = func_0208fddc();
    r = p->f44(p->f0);
    p->f4 = p->f4 & 0xfffffc7f;
    t = p->f8;
    p->f0 = 0;
    if (((t << 0x1c) >> 0x1f) != 0) {
        return -1;
    }
    flag = 0;
    if (r4 != 0 || r != 0) {
        flag = 1;
    }
    return -flag;
}
