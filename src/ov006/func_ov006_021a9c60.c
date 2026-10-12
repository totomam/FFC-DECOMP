#include "ffc/types.h"

typedef struct G {
    uint16_t pad;
    uint16_t t;
    uint8_t *p;
} G;

extern G data_ov006_021bc778;

extern void func_ov006_021af680(void);
extern void func_ov006_021a3df0(void);
extern int32_t func_02081334(uint32_t v, uint32_t sz);
extern void func_ov006_021a9b64(void);
extern void func_ov006_021a99cc(void);
extern void func_0208130c(uint32_t a, uint16_t b);
extern void func_ov006_021af668(void);
extern void func_ov006_021af670(void);
extern void func_ov006_021a9d04(void);
extern void func_ov006_021b5774(uint32_t z, void *a);

void func_ov006_021a9c60(void *a) {
    G *g;
    int32_t r;

    func_ov006_021af680();
    func_ov006_021a3df0();
    g = &data_ov006_021bc778;
    g->t += 4;
    r = func_02081334(g->t, 0x1c);
    if (r >= 4) {
        func_ov006_021a9b64();
        return;
    }
    g->t = g->t - (uint16_t)r;
    func_ov006_021a99cc();
    func_0208130c(g->t * g->p[0x53], *(uint16_t *)(g->p + 0x40));
    func_ov006_021af668();
    func_ov006_021af670();
    func_ov006_021a9d04();
    *(uint32_t *)(g->p + 0x38) = 0;
    func_ov006_021b5774(0, a);
}
