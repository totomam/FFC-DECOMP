#include "ffc/types.h"

extern void func_02075dec(int x, int y);

void func_ov001_0218b9a4(int *p, int b) {
    int v = *(int *)((uint8_t *)p + 0x738);
    if (v != 0) {
        func_02075dec(v, b);
    }
}
