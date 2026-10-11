#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);

typedef struct {
    uint8_t pad0[0x20];
    uint8_t *p20;
    uint8_t pad1[0x38];
    uint32_t f5c;
    uint8_t pad2[4];
    uint32_t f64;
} S;

extern S data_ov000_0216bc60;

void func_ov000_02145a20(void) {
    uint32_t a;
    uint32_t idx;
    func_02088978();
    a = data_ov000_0216bc60.f64;
    idx = *(volatile uint32_t *)&data_ov000_0216bc60.f64;
    data_ov000_0216bc60.f64 = a + *(uint16_t *)(data_ov000_0216bc60.p20 + idx);
    if (data_ov000_0216bc60.f64 >= data_ov000_0216bc60.f5c) {
        data_ov000_0216bc60.f64 = 0;
    }
    func_0208898c();
}
