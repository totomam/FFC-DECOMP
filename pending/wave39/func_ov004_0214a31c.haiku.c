#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02021338(uint32_t);
extern int func_ov004_02150318(uint32_t, uint32_t, uint32_t);
extern int func_ov004_02150684(uint32_t, uint32_t);
extern void func_ov004_02150678(uint32_t);
extern Pair data_ov004_02158c84;

void func_ov004_0214a31c(void *a0)
{
    uint8_t *p = (uint8_t *)a0;

    func_02021338(0x82);
    if (func_ov004_02150318(*(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0x90), *(uint32_t *)(p + 0x94)) != 0) {
        return;
    }
    if (func_ov004_02150684(*(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0x94)) != 0) {
        Pair *q = (Pair *)(p + 0x80);
        *q = data_ov004_02158c84;
        return;
    }
    func_ov004_02150678(*(uint32_t *)(p + 0x88));
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
