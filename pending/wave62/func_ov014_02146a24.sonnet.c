/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; uint32_t c; uint32_t d; uint32_t e; } S;
extern S data_ov014_02155b00;
extern uint8_t data_ov014_0214ad0c[];
extern void func_02084a58(void *dst, uint32_t src, uint32_t n);
uint32_t func_ov014_02146a24(void)
{
    S *s = &data_ov014_02155b00;
    if (s->b == 0) {
        if (s->d >= 0x2100) {
            s->b = s->e;
            func_02084a58(data_ov014_0214ad0c, s->e, 0x2100);
            data_ov014_02155b00.e += 0x2100;
            data_ov014_02155b00.d -= 0x2100;
        } else {
            return (uint32_t)data_ov014_0214ad0c;
        }
    }
    return data_ov014_02155b00.b;
}
