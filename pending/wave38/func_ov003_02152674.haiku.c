#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} DataPair;

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_ov003_0214a0f0(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void func_ov003_021526d4(void *obj, uint32_t node);
extern DataPair data_ov003_02179eec;

void func_ov003_02152674(void *obj, uint32_t param)
{
    uint8_t *node = *(uint8_t **)((uint8_t *)obj + 0xa0);
    uint8_t flag = node[0x12];
    uint8_t *sub = node + 0x1c;
    uint32_t saved = param;
    int r4;

    if (flag != 0) {
        func_0208763c(sub);
    }
    r4 = (*(void **)(node + 0x14) == 0);
    if (flag != 0) {
        func_02087678(sub);
    }
    if (r4 == 0) {
        func_ov003_021526d4(obj, saved);
        return;
    }
    {
        DataPair d = data_ov003_02179eec;
        uint32_t res = func_ov003_0214a0f0(obj, d.a, d.b, saved);
        func_02056bc0(*(void **)((uint8_t *)obj + 0xa0), (void *)res);
    }
}
