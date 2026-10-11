#include "ffc/types.h"

extern void func_02081e6c(int v);

void func_02022f5c(int base, int v, int a, int b, int c)
{
    *(uint8_t *)(base + 0x1cc) = v;
    *(int *)(base + 0x1d0) = a;
    *(int *)(base + 0x1d4) = b;
    *(int *)(base + 0x1d8) = c;
    func_02081e6c(v);
}
