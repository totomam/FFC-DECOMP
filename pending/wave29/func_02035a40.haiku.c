#include "ffc/types.h"

extern int func_02035a74(void *p, uint32_t i, int m, int *a, int *b);
extern uint8_t data_020ae614[];

void *func_02035a40(void *p, int n)
{
    uint32_t i;
    int a;
    int b;
    int r;

    i = 0;
    a = 0;
    b = 0;

    do {
        r = func_02035a74(p, i, n - 1, &a, &b);
        if (r != 0) {
            return (void *)r;
        }
        i++;
    } while (i < 0x15);
    return data_020ae614;
}
