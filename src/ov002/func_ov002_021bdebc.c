#include "ffc/types.h"

extern void func_02035c18(void *p);

void *func_ov002_021bdebc(void *p) {
    func_02035c18((uint8_t *)p + 0x10);
    func_02035c18((uint8_t *)p + 0xc);
    return p;
}
