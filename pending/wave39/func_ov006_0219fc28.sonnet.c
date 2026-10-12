#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02084ca4(void *src, uint32_t dst, uint32_t size);
extern void func_02084b2c(uint32_t dst, int c, uint32_t size);
extern void func_020849f4(void *dst, uint32_t src, uint32_t size);
extern int func_ov006_0219f9c0(void);
extern void func_0208898c(uint32_t h);
extern int func_ov000_0214f6e0(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov006_021bb120[];

int func_ov006_0219fc28(void *p0, void *p1, uint32_t p2)
{
    uint32_t h;

    h = func_02088978();
    data_ov006_021bb120[3] = p2;
    if (p1 != 0) {
        func_02084ca4(p1, data_ov006_021bb120[9], 0x50);
    } else {
        func_02084b2c(data_ov006_021bb120[9], 0, 0x50);
    }
    func_020849f4(p0, data_ov006_021bb120[8], 0xc0);
    if (func_ov006_0219f9c0() == 1) {
        data_ov006_021bb120[6] = 8;
        func_0208898c(h);
        return 1;
    }
    if (data_ov006_021bb120[6] == 3) {
        if (func_ov000_0214f6e0(data_ov006_021bb120[8], data_ov006_021bb120[9], data_ov006_021bb120[3]) == 3) {
            data_ov006_021bb120[6] = 8;
            func_0208898c(h);
            return 1;
        }
    }
    func_0208898c(h);
    return 0;
}
