#include "ffc/types.h"

typedef struct {
    char pad[0xc];
    uint8_t *p;
} Glob;

extern Glob data_ov006_021ba150;
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_ov006_0219b578(uint32_t);
extern uint32_t func_ov006_0219cb94(void);
extern void func_ov006_0219ccb0(void (*)(void));
extern uint32_t func_ov006_0219c620(void);
extern void func_ov006_0219c64c(void);

uint32_t func_ov006_0219c654(void)
{
    uint32_t r4 = 1;
    uint32_t h = func_02088978();

    if (data_ov006_021ba150.p[0x50d] == 0) {
        func_ov006_0219b578(0);
    } else if (*(uint16_t *)(data_ov006_021ba150.p + 0x50d + 0x19) == 0) {
        *(uint32_t *)(data_ov006_021ba150.p + 0x50d + 0xd7) = 0;
        *(uint16_t *)(data_ov006_021ba150.p + 0x50d + 0x19) = (uint16_t)r4;
        if (func_ov006_0219cb94()) {
            func_ov006_0219ccb0(func_ov006_0219c64c);
            r4 = 0;
        } else {
            r4 = func_ov006_0219c620();
        }
    }
    func_0208898c(h);
    return r4;
}
