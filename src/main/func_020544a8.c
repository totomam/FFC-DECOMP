#include "ffc/types.h"

typedef struct {
    void *vt;
    uint8_t b;
} S;

extern void func_02088f30(uint32_t);
extern uint8_t data_020b05ac[];

S *func_020544a8(S *p) {
    p->vt = data_020b05ac;
    if (p->b) {
        func_02088f30(p->b);
    }
    return p;
}
