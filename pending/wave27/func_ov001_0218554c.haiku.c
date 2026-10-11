#include "ffc/types.h"

void func_ov001_0218554c(uint8_t *p) {
    int i;
    int v;
    int end;
    p[0x100] = 1;
    p[0x101] = 3;
    p[0x102] = 5;
    p[0x103] = 7;
    p[0x104] = 11;
    v = 255;
    end = v + 1;
    i = 0;
    do {
        p[i] = v;
        i++;
        v--;
    } while (i < end);
}
