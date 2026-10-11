#include "ffc/types.h"
typedef struct { uint32_t x, y; } S;
extern S data_ov007_021c5f5c;
extern void *func_ov007_021b1a30(void *a, S s, uint32_t b);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b1a10(uint8_t *a, uint32_t b)
{
    void *r = func_ov007_021b1a30(a, data_ov007_021c5f5c, b);
    func_02056bc0(a + 0x14, r);
}
