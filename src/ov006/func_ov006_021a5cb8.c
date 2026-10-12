#include "ffc/types.h"

typedef struct {
    uint32_t w;
    uint16_t h;
} Obj;

extern char *data_ov006_021bc700;
extern uint8_t data_ov006_021b83b2[];
extern uint8_t data_ov006_021b83ac[];
extern void func_ov006_021b3c84(void *obj, int32_t a, int32_t b, int32_t c);

void func_ov006_021a5cb8(int32_t n, uint32_t p)
{
    Obj *o;
    uint32_t w;
    uint32_t h;

    if (n < 0) {
        return;
    }
    if (n < 10) {
        o = *(Obj **)(data_ov006_021bc700 + n * 4 + 0x10);
        w = o->w;
        o->w = 0xfffff3ff & w;
        h = o->h;
        o->h = (h & 0xffff0fff) | (data_ov006_021b83b2[p] << 12);
        return;
    }
    n -= 10;
    if (n < 2) {
        o = *(Obj **)(data_ov006_021bc700 + n * 4 + 0x38);
        w = o->w;
        o->w = 0xfffff3ff & w;
        h = o->h;
        o->h = (h & 0xffff0fff) | (data_ov006_021b83b2[p] << 12);
        return;
    }
    func_ov006_021b3c84(*(void **)(data_ov006_021bc700 + (n - 2) * 4 + 0x40),
                        -1, 0, data_ov006_021b83ac[p]);
}
