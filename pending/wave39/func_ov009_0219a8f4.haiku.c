#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02056c4c(void *p);

void func_ov009_0219a8f4(uint8_t *p)
{
    uint8_t *s = *(uint8_t **)(p + 0x80);
    int flag = s[0x12];
    uint8_t *q = s + 0x1c;
    int ok;

    if (flag != 0) {
        func_0208763c(q);
    }
    ok = (*(uint32_t *)(s + 0x14)) == 0;
    if (flag != 0) {
        func_02087678(q);
    }
    if (ok == 0) {
        uint8_t *r = p + 0x88;
        r[0] = 0;
        r[1] = 0;
        r[2] = 0;
        r[3] = 0;
        r[4] = 0;
        r[5] = 0;
        r[6] = 0;
        r[7] = 0;
        r[8] = 0;
        r[9] = 0;
        r[10] = 0;
        r[11] = 0;
        func_02056c4c(*(void **)(p + 0x80));
    }
}
