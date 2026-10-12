#include "ffc/types.h"

extern void func_02006154(void *p, int v);
extern void func_0200604c(void *p);

void func_02007804(uint8_t *p) {
    int i;
    func_02006154(p + 4, 0);
    func_02006154(p + 0x18, 0);
    for (i = 0; i < 0x10; i++) {
        func_0200604c(p + 0x28 + i * 0x18);
    }
    p[0] = 0;
}
