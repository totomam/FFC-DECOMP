#include "ffc/types.h"

extern void func_ov006_021af680(void);
extern void func_ov006_021a3df0(void);
extern int32_t func_02081334(uint32_t a, uint32_t b);
extern void func_ov006_021a99cc(void);
extern void func_ov006_021a9b64(void);
extern void func_0208130c(uint32_t a, uint16_t b);
extern void func_ov006_021af668(void);
extern void func_ov006_021af670(void);
extern void func_ov006_021a9d04(void);
extern void func_ov006_021b5774(uint32_t zero, uint32_t a);

typedef struct {
    uint16_t pad;
    uint16_t h2;
    void *p4;
} G;

extern G data_ov006_021bc778;

void func_ov006_021a9be0(uint32_t a)
{
    int32_t r;
    uint8_t *q;
    G *s;

    func_ov006_021af680();
    func_ov006_021a3df0();
    if (data_ov006_021bc778.h2 > 4) {
        data_ov006_021bc778.h2 = (uint16_t)(data_ov006_021bc778.h2 - 4);
    } else {
        data_ov006_021bc778.h2 = 0;
    }
    s = &data_ov006_021bc778;
    r = func_02081334(s->h2, 0x1c);
    if (r == 0x18) {
        func_ov006_021a99cc();
        return;
    }
    if (r > 0x18) {
        s->h2 = (uint16_t)(s->h2 + (uint16_t)(0x1c - r));
        r = 0;
    }
    func_ov006_021a9b64();
    if (r == 0) {
        q = (uint8_t *)data_ov006_021bc778.p4;
        func_0208130c((uint32_t)data_ov006_021bc778.h2 * (uint32_t)q[0x53],
                      *(uint16_t *)(q + 0x40));
        func_ov006_021af668();
        func_ov006_021af670();
        func_ov006_021a9d04();
        *(uint32_t *)((uint8_t *)data_ov006_021bc778.p4 + 0x38) = 0;
        func_ov006_021b5774(0, a);
    }
}
