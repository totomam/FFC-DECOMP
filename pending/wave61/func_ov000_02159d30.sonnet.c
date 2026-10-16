/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct E { uint32_t a,b,c; } E;
typedef struct G { uint8_t pad[0x3c]; void (*fn)(uint32_t, uint32_t, uint32_t); uint32_t arg; } G;
typedef struct D { uint32_t a, b, c; G *g; } D;

extern D data_ov000_0217004c;
extern void func_02084b2c(void *p, int v);
void func_ov000_02159d30(E *p, uint32_t idx, uint32_t x) {
    if (data_ov000_0217004c.g == 0) return;
    func_02084b2c(&p[idx], 0);
    G *g = data_ov000_0217004c.g;
    if (g->fn == 0) return;
    g->fn(idx, x, g->arg);
}
