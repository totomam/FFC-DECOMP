#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern void func_01ffe554(void *p, int32_t v);
extern S data_ov004_021596ac;

void func_ov004_0214f970(uint8_t *p)
{
    int32_t v; int32_t v0 = 0;
    struct {int32_t a[7];} pad; pad.a[0] = v0;
    
    v = func_020817c8(*(int32_t *)(p + 0xec), 0xecd);
    *(int32_t *)(p + 0xec) = v;
    if (v > 0x1000) {
        func_01ffe554(*(void **)(p + 0x90), v);
        return;
    }
    *(S *)(p + 0x80) = data_ov004_021596ac;
}
