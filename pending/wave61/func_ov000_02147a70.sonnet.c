#include "ffc/types.h"
typedef struct { uint8_t pad[8]; uint8_t a; uint8_t b; } S;
typedef struct { uint8_t pad[0xa4]; S *s; } H;
typedef struct { uint32_t x; H *h; } G;
extern G data_02141510;
extern int func_ov000_021479dc(int *r);
extern int func_ov000_0214b600(int *r);
extern int func_ov000_02147a14(int *r);
int func_ov000_02147a70(int *r) {
    S *s = data_02141510.h->s;
    if (s != 0) {
        if ((uint8_t)(s->a + 0xf6) <= 1) return func_ov000_021479dc(r);
        if (s->b != 0) return func_ov000_0214b600(r);
        return func_ov000_02147a14(r);
    }
    *r = 0;
    return 0;
}
