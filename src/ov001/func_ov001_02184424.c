#include "ffc/types.h"

void func_ov001_02184424(uint32_t a, uint32_t b, uint32_t c, uint8_t *p)
{
    void (*fn)(uint32_t, uint32_t, uint32_t);
    fn = *(void (**)(uint32_t, uint32_t, uint32_t))(p + 0xac);
    if (fn != 0 && a == 0) {
        fn(b, c, *(uint32_t *)(p + 0x114));
    }
}
