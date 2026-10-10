#include "ffc/types.h"

extern int func_02024de4(int p, int a, int b);

int func_ov003_02153cb4(int p, int a, int b) {
    int q = *(int *)(p + 0x1e4);
    if (q) return func_02024de4(*(int *)(q + 0x34), a, b);
    return 0x171717;
}
