#include "ffc/types.h"
typedef struct { uint8_t v; } B;
typedef struct { uint8_t a; uint8_t pad[3]; uint32_t *p4; uint32_t *p8; } G;
extern G data_021394f0;
extern void func_02030e68(uint32_t *o, uint32_t x, B b);
static inline void h2(uint32_t *o, B b) { func_02030e68(o, o[1], b); }
void func_0202f670(void) {
    B c, d;
    data_021394f0.a = 0;
    c.v = 0;
    h2(data_021394f0.p4, c);
    d.v = 0;
    h2(data_021394f0.p8, d);
}
