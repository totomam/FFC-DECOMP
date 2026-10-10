#include "ffc/types.h"

typedef struct {
    int32_t w0;
    int32_t w4;
    int32_t w8;
    uint8_t flag;
} Obj;

void func_0200608c(Obj *p, int32_t a, int32_t b) {
    if (p->flag == 0) {
        p->w0 = a;
        p->w8 = b / 8;
        p->w4 = b;
        p->flag = 1;
    }
}
