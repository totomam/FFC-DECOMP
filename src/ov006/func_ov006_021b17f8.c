#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint8_t pad[0x1e - 4];
    uint8_t flag;
} Ctx;

extern Ctx *data_ov006_021bc7f8;
extern void func_ov006_021b3dc8(uint32_t a, uint32_t b, uint32_t *c, uint32_t *d);
extern void func_ov006_021b1600(int32_t x);
extern void func_ov006_021b5770(void *obj, void (*fn)(void));
extern void func_ov006_021b184c(void);
extern void func_ov006_021b1884(void);

void func_ov006_021b17f8(void *p0)
{
    int32_t b, a;

    func_ov006_021b3dc8(data_ov006_021bc7f8->w0, 0, (uint32_t *)&b, (uint32_t *)&a);
    a += 0xc;
    func_ov006_021b1600(a);
    if (a < 0xc0) {
        return;
    }
    if (data_ov006_021bc7f8->flag != 0) {
        func_ov006_021b5770(p0, func_ov006_021b184c);
    } else {
        func_ov006_021b5770(p0, func_ov006_021b1884);
    }
}
