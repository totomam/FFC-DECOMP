#include "ffc/types.h"

extern void func_020424e0(void *p);
extern void *func_ov003_0214d9fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *p);

void func_ov003_021725f0(uint8_t *p)
{
    func_020424e0(*(void **)(p + 0x88));
    func_02056bc0(p + 0x14, func_ov003_0214d9fc());
    func_02056bc0(p + 0x14, func_02056aec(p));
    {
        uint32_t *q = *(uint32_t **)(p + 0x98);
        if (*q == 0) {
            *q = 1;
        }
    }
}
