#include "ffc/types.h"

extern uint8_t *data_ov006_021bc6fc;
extern uint8_t data_ov006_021b80e8[];
extern uint8_t data_ov006_021b80ea[];
extern void func_ov006_021b3c84(void *obj, int32_t a, int32_t b, int32_t c);

void func_ov006_021a4d14(int32_t idx, uint32_t sel)
{
    uint32_t *obj;
    uint16_t *h;
    int32_t k;
    uint32_t t;

    if (idx < 0) {
        return;
    }
    if (idx < 0x2f) {
        obj = *(uint32_t **)(data_ov006_021bc6fc + idx * 4 + 0x30);
        obj[0] = obj[0] & 0xfffff3ff;
        h = (uint16_t *)obj;
        t = h[2] & 0xffff0fff;
        h[2] = t | (data_ov006_021b80e8[sel] << 12);
        return;
    }
    k = idx - 0x2f;
    if (k < 4) {
        obj = *(uint32_t **)(data_ov006_021bc6fc + k * 4 + 0xec);
        obj[0] = obj[0] & 0xfffff3ff;
        h = (uint16_t *)obj;
        t = h[2] & 0xffff0fff;
        h[2] = t | (data_ov006_021b80e8[sel] << 12);
        return;
    }
    obj = *(uint32_t **)(data_ov006_021bc6fc + (idx - 0x33) * 4 + 0xfc);
    func_ov006_021b3c84(obj, -1, 0, data_ov006_021b80ea[sel]);
}
