#include "ffc/types.h"

extern void func_02076758(void *p);
extern uint8_t data_ov007_021c5c0c;

void *func_ov007_021b0d74(void **p) {
    func_02076758(p);
    *p = &data_ov007_021c5c0c;
    return p;
}
