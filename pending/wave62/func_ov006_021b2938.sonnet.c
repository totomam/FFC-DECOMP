#include "ffc/types.h"
typedef struct S { uint32_t a0; uint16_t h4; uint8_t pad[0x42]; uint32_t w48; uint32_t w4c; uint16_t h50; uint16_t h52; uint32_t w54; uint8_t pad2[0x124c]; uint32_t w12a0; uint32_t w12a4; } S;
typedef struct G { uint32_t x; S *p; } G;
extern G data_ov006_021bc800;
extern int func_ov006_021b2998(void);
int func_ov006_021b2938(void) {
    int r = 0;
    data_ov006_021bc800.p->w12a4 = r;
    data_ov006_021bc800.p->w12a0 = r;
    data_ov006_021bc800.p->w48 = r;
    data_ov006_021bc800.p->h50 = r;
    data_ov006_021bc800.p->h52 = 1;
    data_ov006_021bc800.p->w54 = r;
    data_ov006_021bc800.p->a0 = r;
    data_ov006_021bc800.p->h4 = r;
    data_ov006_021bc800.p->w4c = r;
    if (func_ov006_021b2998() != 0) r = 1;
    return r;
}
