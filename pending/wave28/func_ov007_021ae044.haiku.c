#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02056c4c(void *p);

void func_ov007_021ae044(uint8_t *p)
{
    volatile uint32_t tmp[2];
    uint8_t *r5 = p;
    uint8_t *r4 = r5 + 0x14;
    uint8_t r7 = r4[0x12];
    uint8_t *r6 = r4 + 0x1c;
    int flag;

    if (r7 != 0) {
        func_0208763c(r6);
    }
    flag = (*(void **)(r4 + 0x14) == 0);
    if (r7 != 0) {
        func_02087678(r6);
    }
    if (!flag) {
        func_02056c4c(r5 + 0x14);
    }
    *(uint32_t *)*(void **)(r5 + 0x88) = 0;
}
