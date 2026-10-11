#include "ffc/types.h"

extern void func_ov000_02154640(void *a, uint8_t *b);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern uint8_t data_ov000_02169b08[];

int32_t func_ov000_02154580(void *p) {
    uint8_t buf[0x18];

    func_ov000_02154640(p, buf);
    if (func_02090410(buf, data_ov000_02169b08, 8) != 0) {
        return 0;
    }
    return 1;
}
