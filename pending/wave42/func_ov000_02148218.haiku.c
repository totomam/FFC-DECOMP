#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern uint32_t func_020882cc(void);
extern void func_ov000_02146940(void *obj, uint32_t arg);
extern void func_02088548(void *p);
extern void func_020884b4(void *p, uint32_t a, uint32_t b, void (*fn)(void), uint32_t c);
extern void func_0208898c(uint32_t t);
extern void func_ov000_021482e8(void);
extern uint8_t data_02141510[];
extern uint8_t data_ov000_0216bcf0[];

#define FIELD_U32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))
#define FIELD_U8(p, off) (*(uint8_t *)((uint8_t *)(p) + (off)))

void func_ov000_02148218(void)
{
    uint32_t r4 = 0xFFFFFFFF;
    uint32_t t = func_02088978();
    uint32_t now = func_020882cc();
    uint8_t *cur = (uint8_t *)FIELD_U32(data_02141510, 8);

    while (cur != 0) {
        uint8_t *obj = (uint8_t *)FIELD_U32(cur, 0xa4);
        if (obj != 0 && FIELD_U32(obj, 0) != 0 && FIELD_U8(obj, 8) == 4 && FIELD_U8(obj, 0x32) != 0) {
            uint32_t diff = now - FIELD_U32(obj, 0x2c);
            if (diff >= 0x1991b) {
                func_ov000_02146940(obj, 1);
            } else {
                uint32_t rem = 0x1991b - diff;
                if (rem < r4) {
                    r4 = rem;
                }
            }
        }
        cur = (uint8_t *)FIELD_U32(cur, 0x68);
    }

    if (r4 != 0xFFFFFFFF) {
        func_02088548(data_ov000_0216bcf0);
        func_020884b4(data_ov000_0216bcf0, r4, 0, func_ov000_021482e8, 0);
    }
    func_0208898c(t);
}
