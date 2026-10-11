#include "ffc/types.h"

extern void func_ov003_0214649c(uint32_t);
extern uint32_t *func_ov003_02153470(void);
extern void func_0201cf34(uint32_t, uint32_t *);
extern int func_020192f4(uint32_t, uint32_t);
extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;

uint32_t func_ov003_02152b0c(uint8_t *p) {
    uint32_t buf[38];
    uint32_t r4;

    func_ov003_0214649c(*(uint32_t *)(p + 0x9c));
    r4 = *func_ov003_02153470();
    func_0201cf34(data_020b93b8, buf);
    if (((buf[7] << 25) >> 30) != 0) {
        if (func_020192f4(data_020b8e44, r4) != 0) {
            return 1;
        }
    }
    return 0;
}
