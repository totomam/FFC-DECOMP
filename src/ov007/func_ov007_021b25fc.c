#include "ffc/types.h"

extern void func_ov007_021b2788(void *p);
extern void func_ov001_0218e0a8(void *p);
extern uint8_t data_ov007_021c6028[];

void *func_ov007_021b25fc(void *p) {
    *(uint8_t **)p = data_ov007_021c6028;
    func_ov007_021b2788(p);
    func_ov001_0218e0a8(p);
    return p;
}
