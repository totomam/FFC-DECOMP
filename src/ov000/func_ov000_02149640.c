#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern uint64_t func_020882cc(void);
extern void func_0208898c(uint32_t v);
extern uint8_t data_ov000_0216de9c[];

void func_ov000_02149640(uint8_t *p, uint32_t a, uint32_t c)
{
    uint32_t saved = func_02088978();
    int i;

    *(p + 0x30) = 0;
    for (i = 0; i < 4; i++) {
        uint8_t *e = data_ov000_0216de9c + i * 0x5c;
        if (e[0x5a] != 0 && *(uint32_t *)(e + 0x54) == a && *(uint16_t *)(e + 0x58) == c) {
            uint64_t v;
            func_02084ca4(e, p + 0x74, 0x20);
            func_02084ca4(e + 0x20, p, 0x30);
            v = func_020882cc();
            *(uint32_t *)(e + 0x50) = ((uint32_t)(v >> 32) << 16) | ((uint32_t)v >> 16);
            *(p + 0x30) = 1;
            break;
        }
    }
    func_0208898c(saved);
}
