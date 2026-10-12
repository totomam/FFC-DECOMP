#include "ffc/types.h"

extern void func_02073904(void);
extern int func_ov000_0215b4e0(uint8_t **out);
extern uint32_t func_02056830(uint32_t p);
extern uint8_t func_ov000_0215b4b0(void);
extern int func_ov000_02164000(uint8_t id, uint32_t v, uint32_t p);
extern void func_02088f30(void);

void func_020738a8(uint32_t *a, uint32_t b)
{
    uint8_t *ids;
    int count;
    int i;

    func_02073904();
    count = func_ov000_0215b4e0(&ids);
    for (i = 0; i < count; i++) {
        a[i + 0x4b] = func_02056830(b);
        if (ids[i] != func_ov000_0215b4b0()) {
            if (func_ov000_02164000(ids[i], a[i + 0x4b], b) == 0) {
                func_02088f30();
            }
        }
    }
}
