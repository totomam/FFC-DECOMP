#include "ffc/types.h"
typedef struct { uint8_t a, b; } P;
typedef struct { uint8_t i; uint8_t pad[3]; void *p; } G;
extern P data_ov006_021b84c4;
extern G data_ov006_021bc73c;
extern void func_ov006_021af520(void *, int, int);
void func_ov006_021a6fe0(void) {
    P l = data_ov006_021b84c4;
    uint8_t v = ((uint8_t *)&l)[data_ov006_021bc73c.i];
    func_ov006_021af520(data_ov006_021bc73c.p, v, v);
}
