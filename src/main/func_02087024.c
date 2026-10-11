#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02086b38(uint32_t a, uint8_t *b);
extern void func_02086c78(void);
extern void func_0208898c(uint32_t a);
extern uint8_t data_021414f4[];

void func_02087024(uint32_t a0) {
    uint32_t r6;
    uint8_t *p;

    r6 = func_02088978();
    p = *(uint8_t **)(*(uint8_t **)(data_021414f4 + 8));
    if (a0 != 0) {
        *(uint32_t *)(p + 0x78) = a0;
        func_02086b38(a0, p);
    }
    *(uint32_t *)(p + 0x64) = 0;
    func_02086c78();
    func_0208898c(r6);
}
