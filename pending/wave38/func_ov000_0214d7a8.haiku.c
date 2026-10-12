#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_ov000_021477d0(uint16_t a, uint16_t b, uint32_t c);
extern int func_ov000_021478f0(void);

int func_ov000_0214d7a8(uint8_t *self) {
    uint8_t *p = *(uint8_t **)(self + 4);
    int r5 = 0;
    uint8_t *s = *(uint8_t **)(p + 0xa0);
    func_0208763c(s + 0xe0);
    func_ov000_021477d0(*(uint16_t *)(self + 0x10), *(uint16_t *)(self + 0x12), *(uint32_t *)(self + 0x14));
    *(uint32_t *)(s + 0xf8) = 0;
    {
        int8_t t = *(int8_t *)(self + 0xc);
        if (t == 0 || t == 4) {
            r5 = func_ov000_021478f0();
        }
    }
    func_02087678(s + 0xe0);
    if (r5 != 0) {
        int16_t f = *(int16_t *)(p + 0xac);
        uint16_t flag = 0x40;
        *(uint16_t *)(p + 0xac) = (uint16_t)(f | flag);
        return flag - 0x8c;
    } else {
        int16_t f = *(int16_t *)(p + 0xac);
        *(uint16_t *)(p + 0xac) = (uint16_t)(4 | f);
        return 0;
    }
}
