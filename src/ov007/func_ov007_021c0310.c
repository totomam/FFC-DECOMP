#include "ffc/types.h"

extern int func_02086b04(void *a, int b, void *c, void *d, int e, int f);
extern int8_t data_ov007_021c9cbc[];
extern uint8_t data_ov007_021c8c18[];
extern uint8_t data_ov007_021c8c2c[];

typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
} S;

int func_ov007_021c0310(S *p, void *a) {
    int r;
    if (p == 0 || a == 0 || p->f0 == 0 || p->f24 == 0) {
        return 0;
    }
    if (data_ov007_021c9cbc[0] != 0) {
        r = func_02086b04(a, 0x80, data_ov007_021c8c18, data_ov007_021c9cbc, p->f14, p->f28);
    } else {
        r = func_02086b04(a, 0x80, data_ov007_021c8c2c, &p->f4, p->f14, p->f28);
    }
    if (r < 0) {
        return 0;
    }
    return 1;
}
