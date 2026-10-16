#include "ffc/types.h"
typedef struct { uint32_t p0, p4, p8; uint32_t c; uint32_t p10, p14; uint32_t s18; uint32_t p1c; void *a20; void *a24; } G;
extern G data_ov006_021bb120;
extern int func_02088978(void);
extern void func_02084ca4(void *, void *, int);
extern void func_02084b2c(void *, int, int);
extern void func_020849f4(void *, void *, int);
extern int func_ov006_0219f9c0(void);
extern void func_0208898c(int);
extern int func_ov000_0214f6e0(void *, void *, uint32_t);
int func_ov006_0219fc28(void *a, void *b, uint32_t c)
{
    int r = func_02088978();
    data_ov006_021bb120.c = c;
    if (b != 0) func_02084ca4(b, data_ov006_021bb120.a24, 0x50);
    else func_02084b2c(data_ov006_021bb120.a24, 0, 0x50);
    func_020849f4(a, data_ov006_021bb120.a20, 0xc0);
    if (func_ov006_0219f9c0() == 1) {
        data_ov006_021bb120.s18 = 8;
        func_0208898c(r);
        return 1;
    }
    if (data_ov006_021bb120.s18 == 3 && func_ov000_0214f6e0(data_ov006_021bb120.a20, data_ov006_021bb120.a24, data_ov006_021bb120.c) == 3) {
        data_ov006_021bb120.s18 = 8;
        func_0208898c(r);
        return 1;
    }
    func_0208898c(r);
    return 0;
}
