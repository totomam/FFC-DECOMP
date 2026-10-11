#include "ffc/types.h"

extern void func_02075b24(void *a, char *b, uint32_t c);
extern void func_02075b0c(void *a, char *b, uint32_t c);
extern void *data_020b8e44;
extern char data_0218e711[];
extern char data_0218e725[];

void func_ov007_021b08ec(uint32_t *p)
{
    if (*(void **)((uint8_t *)*(void **)data_020b8e44 + 0x88) != 0) {
        func_02075b24(*(void **)((uint8_t *)*(void **)data_020b8e44 + 0x88), data_0218e711, 0);
        func_02075b0c(*(void **)((uint8_t *)*(void **)data_020b8e44 + 0x88), data_0218e725, 0);
    }
    p[3] = (p[3] & ~0xffu) | 2u;
}
