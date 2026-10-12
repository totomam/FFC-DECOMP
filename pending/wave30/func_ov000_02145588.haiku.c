#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x20];
    uint32_t f20;
    uint8_t pad1[0x30];
    uint32_t f54;
    uint8_t pad2[4];
    uint32_t f5c;
} BC60;

extern void func_ov000_02145544(void);
extern void func_02086fbc(void *p);
extern void func_02086f54(void *p);
extern void func_02088548(void *p);
extern uint32_t func_02088978(void);
extern uint32_t func_02086fe4(void *p);
extern void func_020870a0(void *object);
extern void func_0208898c(uint32_t v);
extern void func_ov000_0214530c(uint32_t v);
extern uint8_t data_ov000_0216bfd8[];
extern uint8_t data_ov000_0216c098[];
extern uint8_t data_ov000_0216bcf0[];
extern uint8_t data_ov000_0216bf18[];
extern BC60 data_ov000_0216bc60;

void func_ov000_02145588(void)
{
    uint32_t v;

    func_ov000_02145544();
    func_02086fbc(data_ov000_0216bfd8);
    func_02086f54(data_ov000_0216c098);
    func_02088548(data_ov000_0216bcf0);
    v = func_02088978();
    if (func_02086fe4(data_ov000_0216bf18) == 0) {
        func_020870a0(data_ov000_0216bf18);
    }
    func_0208898c(v);
    func_02086fbc(data_ov000_0216bf18);
    data_ov000_0216bc60.f54 = 0;
    func_ov000_0214530c(0);
    data_ov000_0216bc60.f20 = 0;
    data_ov000_0216bc60.f5c = 0;
}
