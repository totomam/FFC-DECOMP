#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d; } Q;
extern void func_ov001_02181864(void);
int func_ov001_02180344(uint8_t *p, Q *src)
{
    if (*(uint32_t*)(p + 0x14) != 0) {
        *(uint32_t*)(p + 0x14) = 0;
        return 0;
    }
    *(uint32_t*)(p + 0x14) = 0;
    if (*(uint32_t*)(p + 0xc) != 4) return 0;
    func_ov001_02181864();
    *(uint32_t*)(p + 0xc) = 5;
    if (src != 0) *(Q*)(p + 0x28) = *src;
    return 1;
}
