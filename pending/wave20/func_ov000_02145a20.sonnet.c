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

extern volatile S data_ov000_0216bc60;

void func_ov000_02145a20(void) {
    func_02088978();
    data_ov000_0216bc60.f64 = data_ov000_0216bc60.f64 + *(uint16_t *)(data_ov000_0216bc60.p20 + data_ov000_0216bc60.f64);
    if (data_ov000_0216bc60.f64 >= data_ov000_0216bc60.f5c) {
        data_ov000_0216bc60.f64 = 0;
    }
    func_0208898c();
}
