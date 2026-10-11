#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint8_t *ptr;
} OvData;

extern OvData data_ov000_0216e294;
extern void func_ov000_021569f0(uint32_t v);

void func_ov000_021556d4(void)
{
    uint8_t *r1 = data_ov000_0216e294.ptr;
    if (r1 == 0) {
        return;
    }
    void (*fn)(uint32_t, uint32_t, uint32_t) = *(void (**)(uint32_t, uint32_t, uint32_t))(r1 + 0x1210);
    uint32_t v = *(uint32_t *)(r1 + 0x1314);
    if (v != 0) {
        func_ov000_021569f0(v);
    }
    fn(0, (uint32_t)data_ov000_0216e294.ptr, 0);
    data_ov000_0216e294.ptr = 0;
}
