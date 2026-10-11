#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0206c270(void *node);
extern void func_02056bc0(void *object, void *node);

void func_ov013_021c1d94(uint8_t *a)
{
    void *n;
    void *node;

    *(uint32_t *)(*(uint32_t **)(a + 0xc4)) = 0;
    n = func_02056aec();
    node = func_0206c270(*(void **)(a + 0xc8));
    a = a + 0x14;
    func_02056bc0(a, node);
    func_02056bc0(a, n);
}
