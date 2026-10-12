#include "ffc/types.h"

extern void *func_020702dc(void *a, void *b);
extern void func_02070438(void *a, void *b);
extern void func_ov006_0219a9cc(void *p);
extern void func_02056858(void *p);
extern void func_02056844(void *p);

typedef struct { uint32_t a, b, c; } V3;
typedef struct { uint32_t w[7]; } Blob;

void func_020703cc(uint8_t *self, V3 v)
{
    Blob loc;
    uint8_t *src = (uint8_t *)func_020702dc(self + 0x58, &v);
    loc = *(Blob *)(src + 8);
    func_02070438(self + 0x58, &v);
    func_ov006_0219a9cc((void *)loc.w[0]);
    func_02056858((void *)loc.w[4]);
    func_02056858((void *)loc.w[5]);
    func_02056858((void *)loc.w[6]);
    func_02056858((void *)loc.w[3]);
    func_02056858((void *)loc.w[1]);
    func_02056858((void *)loc.w[2]);
    func_02056844((void *)loc.w[0]);
}
