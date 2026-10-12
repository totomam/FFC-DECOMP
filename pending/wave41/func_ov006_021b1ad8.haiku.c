#include "ffc/types.h"

extern int func_ov006_021996e8(int a, int b);
extern void func_02088978(void);
extern void func_0208898c(void);
extern void func_ov006_0219c710(int a);

typedef struct {
    uint16_t pad0;
    uint16_t f2;
    uint16_t f4;
    uint16_t f6;
    uint16_t f8;
    uint16_t f10;
    uint16_t f12;
} Regs;

extern Regs *data_ov006_021bc7fc;

void func_ov006_021b1ad8(int param) {
    uint16_t mask;
    if (func_ov006_021996e8(param, 0) == 0) {
        mask = (uint16_t)~(1 << param);
        func_02088978();
        data_ov006_021bc7fc->f2 &= mask;
        data_ov006_021bc7fc->f4 &= mask;
        data_ov006_021bc7fc->f6 &= mask;
        data_ov006_021bc7fc->f8 &= mask;
        data_ov006_021bc7fc->f10 &= mask;
        data_ov006_021bc7fc->f12 &= mask;
        func_0208898c();
        func_ov006_0219c710(param);
        return;
    }
    func_02088978();
    mask = (uint16_t)~(1 << param);
    data_ov006_021bc7fc->f4 &= mask;
    data_ov006_021bc7fc->f2 &= mask;
    func_0208898c();
}
