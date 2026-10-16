/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t w0; uint16_t h4; } P;
typedef struct { uint8_t pad[4]; P *p; uint8_t b8; uint8_t b9; } G;
extern G *data_ov006_021bc6a4;
extern uint8_t data_ov006_021b8048[];
extern int func_02081334(int, int);
extern int func_0208130c(int, int);
extern void func_ov006_021b3e20(int, int, P *);
void func_ov006_021a3600(void)
{
    P *p;
    uint32_t v;
    data_ov006_021bc6a4->b9 = func_02081334(data_ov006_021bc6a4->b9 + 1, 0x28);
    { int t = func_0208130c(data_ov006_021bc6a4->b9, 5) + 0x47; P *q = data_ov006_021bc6a4->p; func_ov006_021b3e20(0, t, q); }
    p = data_ov006_021bc6a4->p;
    p->h4 = (p->h4 & 0xfffff3ff) | 0x400;
    v = data_ov006_021b8048[data_ov006_021bc6a4->b8];
    p = data_ov006_021bc6a4->p;
    p->w0 &= 0xfffff3ff;
    p->h4 = (p->h4 & 0xffff0fff) | (v << 12);
    p = data_ov006_021bc6a4->p;
    p->w0 = (p->w0 & 0xfe00ff00) | 0xe6008b;
}
