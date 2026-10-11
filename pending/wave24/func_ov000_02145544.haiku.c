#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x58];
    uint32_t flag;
} Obj;

extern uint32_t func_02088978(void);
extern uint32_t func_02086fe4(void *object);
extern void func_020870a0(void *object);
extern void func_0208898c(uint32_t value);
extern uint8_t data_ov000_0216bfd8[];
extern Obj data_ov000_0216bc60;

uint32_t func_ov000_02145544(void) {
    uint32_t r4;
    uint32_t r5;

    r4 = func_02088978();
    r5 = func_02086fe4(data_ov000_0216bfd8);
    if (r5 == 0) {
        if (data_ov000_0216bc60.flag == 0) {
            data_ov000_0216bc60.flag = 1;
            func_020870a0(data_ov000_0216bfd8);
        }
    }
    func_0208898c(r4);
    return r5;
}
