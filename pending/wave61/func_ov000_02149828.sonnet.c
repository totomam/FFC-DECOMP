#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } S;
extern S data_02141510;
extern void func_0208716c(uint32_t p, uint32_t x);
void func_ov000_02149828(uint32_t x) {
    if (x < 0x20) func_0208716c(data_02141510.b, x);
}
