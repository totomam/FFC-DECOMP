#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_020214f8(void);
extern void func_02021b68(uint32_t a, int b, int c);
extern int func_ov004_0215572c(void *p);
extern void func_ov004_0215540c(void *p);
extern Pair data_ov004_02159d48;

void func_ov004_021558e8(void *p)
{
    uint8_t *base = (uint8_t *)p;

    func_020214f8();
    if (base[0x240] == 0) {
        func_02021b68(*(uint32_t *)(base + 0xf4), 0x24, 0);
        *(Pair *)(base + 0x94) = data_ov004_02159d48;
        return;
    }
    if (func_ov004_0215572c(p) == 0) {
        func_02021b68(*(uint32_t *)(base + 0xf4), 0x23, 1);
    }
    func_ov004_0215540c(p);
}
