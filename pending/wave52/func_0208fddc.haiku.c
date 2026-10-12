#include "ffc/types.h"

extern int func_0208f650(void);
extern int func_0208f70c(void *p, uint32_t a);

typedef struct {
    uint32_t a : 2;
    uint32_t b : 3;
    uint32_t c : 2;
    uint32_t d : 3;
    uint32_t e : 22;
} W4;

typedef struct {
    uint32_t m : 3;
    uint32_t rest : 29;
} W8;

typedef struct {
    uint32_t w0;
    W4 w4;
    W8 w8;
    uint8_t pad_c;
    uint8_t flag_d;
    uint8_t pad_e[2];
    uint32_t pad10[2];
    uint32_t w18;
    uint32_t pad1c[3];
    uint32_t w28;
} Obj;

int func_0208fddc(Obj *p) {
    if (p == 0) {
        return func_0208f650();
    }
    if (p->flag_d != 0 || p->w4.d == 0) {
        return -1;
    }
    if (p->w4.b == 1) {
        return 0;
    }
    if (p->w8.m >= 3) {
        p->w8.m = 2;
    }
    if (p->w8.m == 2) {
        p->w28 = 0;
    }
    if (p->w8.m != 1) {
        p->w8.m = 0;
        return 0;
    }
    if (func_0208f70c(p, 0) != 0) {
        p->flag_d = 1;
        p->w28 = 0;
        return -1;
    }
    p->w8.m = 0;
    p->w18 = 0;
    p->w28 = 0;
    return 0;
}
