#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_02069320(void *object, uint32_t value);
extern void func_02069404(void *object, uint32_t value);
extern char data_ov007_021c55ec[];
extern char data_ov007_021c5504[];
extern uint32_t data_ov007_021c5510[];

void *func_ov007_021ae28c(void *param0, void *param1)
{
    char *self = (char *)param0;
    void *node = param1;
    uint32_t *dp;

    func_02069210(self);
    *(void **)self = data_ov007_021c55ec;
    *(void **)(self + 0x94) = func_0203b95c(*(void **)(data_ov007_021c5504 + 8), node, 2, 1);
    dp = data_ov007_021c5510;
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)(*(void **)(self + 0x94)))[3])(*(void **)(self + 0x94), dp[0], dp[1]);
    ((void (*)(void *))(*(void ***)(*(void **)(self + 0x94)))[10])(*(void **)(self + 0x94));
    ((void (*)(void *, uint32_t, uint32_t))(*(void ***)(*(void **)(self + 0x94)))[14])(*(void **)(self + 0x94), 2, 0);
    ((void (*)(void *, uint32_t))(*(void ***)(*(void **)(self + 0x94)))[8])(*(void **)(self + 0x94), 2);
    func_02056bc0(self + 0x48, *(void **)(self + 0x94));
    func_02069320(self, 2);
    func_02069404(self, 4);
    return self;
}
