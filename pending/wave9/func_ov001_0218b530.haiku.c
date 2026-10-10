#include "ffc/types.h"

extern void func_0206e2a4(int x, int y);

void func_ov001_0218b530(int *p, int b) {
    int v = *(int *)((uint8_t *)p + 0x734);
    if (v != 0) {
        func_0206e2a4(v, b);
    }
}
