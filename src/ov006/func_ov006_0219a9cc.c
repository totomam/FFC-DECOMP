#include "ffc/types.h"

extern uint8_t *data_ov006_021ba160;
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t h);
extern int func_ov006_0219b014(uint8_t *p);
extern void func_020849ac(int c, void *p, uint32_t n);

uint32_t func_ov006_0219a9cc(uint32_t a0) {
    uint32_t handle;
    uint8_t i;
    uint8_t idx;
    uint32_t v;
    uint8_t *base = 0;

    handle = func_02088978();
    for (i = 0; i < 16; i++) {
        uint32_t t = *(uint32_t *)(data_ov006_021ba160 + i * 0x5d4 + 0x1d40);
        if (t == a0) {
            idx = i;
            break;
        }
    }
    base = data_ov006_021ba160;
    if (i == 16) {
        func_0208898c(handle);
        return 0;
    }
    uint32_t off = idx * 0x5d4;
    if ((base + off)[0x1d21] != idx) {
        func_0208898c(handle);
        return 0;
    }
    if (func_ov006_0219b014(base + 0x186c + off) == 0) {
        func_0208898c(handle);
        return 0;
    }
    uint8_t *q = data_ov006_021ba160 + off;
    v = *(uint32_t *)(q + (0x1d21 + 0x23));
    q[0x1d21 + 0x31] = 0;
    func_020849ac(0, data_ov006_021ba160 + 0x1788 + off, 0x5d4);
    data_ov006_021ba160[0x1524] = data_ov006_021ba160[0x1524] - 1;
    func_0208898c(handle);
    return v;
}
