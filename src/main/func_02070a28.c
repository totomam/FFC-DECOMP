#include "ffc/types.h"

extern void func_02086aa4(int32_t bit_index);
extern int32_t data_020b2164;

typedef struct {
    void *vt;
    uint16_t a;
    uint16_t f6;
} S;

void *func_02070a28(S *p) {
    p->vt = &data_020b2164;
    func_02086aa4(p->f6);
    return p;
}
