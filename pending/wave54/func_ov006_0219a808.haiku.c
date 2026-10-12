#include "ffc/types.h"

extern uint32_t func_02088978(uint32_t);
extern void func_0208898c(uint32_t);
extern int func_ov006_0219c980(uint32_t);
extern void func_ov006_0219aa8c(uint8_t *, uint32_t);
extern void func_02084ca4(void *, void *, uint32_t);
extern int func_ov006_0219abd4(uint8_t *, uint8_t *);
extern void func_ov006_0219ae4c(uint8_t *, uint8_t *, uint8_t *);
extern void func_ov006_0219afe4(uint8_t *);
extern int func_ov006_0219cb94(uint32_t);
extern void func_ov006_0219cba8(uint8_t *);
extern void func_ov006_0219cb38(uint8_t *, uint32_t);
extern uint8_t *data_ov006_021ba160;
extern uint8_t data_ov006_021ba0a4;

uint32_t func_ov006_0219a808(uint8_t *a, uint32_t b)
{
    uint32_t slot = 0xff;
    uint32_t h;
    uint32_t i;
    uint32_t off;
    uint32_t lo;
    uint8_t *s;
    uint8_t *e;
    uint8_t *q;

    h = func_02088978(slot);
    if (func_ov006_0219c980(h) == 0) {
        func_0208898c(h);
        return 0;
    }
    if (data_ov006_021ba160[0x1524] + 1 > 0x10) {
        func_0208898c(h);
        return 0;
    }

    i = 0;
    do {
        e = data_ov006_021ba160 + i * 0x5d4;
        if (*(uint32_t *)(e + 0x1d40) == (uint32_t)a) {
            func_0208898c(h);
            return 0;
        }
        if (e[0x1d52] == 0) {
            slot = i;
            break;
        }
        i = (uint8_t)(i + 1);
    } while (i < 0x10);

    if (i == 0x10) {
        func_0208898c(h);
        return 0;
    }

    off = slot * 0x5d4;
    e = data_ov006_021ba160 + off;
    *(uint32_t *)(e + 0x1d40) = (uint32_t)a;

    lo = 0x1788;
    s = data_ov006_021ba160 + lo;
    func_ov006_0219aa8c(s + off, b);
    func_02084ca4(a + 0x1c, s + off + 0xc4, 0x20);

    if (func_ov006_0219abd4(data_ov006_021ba160 + 0x1d2c + off, s + off) == 0) {
        func_0208898c(h);
        return 0;
    }

    lo = lo + 0xe4;
    func_ov006_0219ae4c(data_ov006_021ba160 + lo + off, a,
                        data_ov006_021ba160 + 0x1300);

    data_ov006_021ba160[off + 0x1d21] = (uint8_t)slot;

    func_ov006_0219afe4(data_ov006_021ba160 + lo + off);

    e[0x1d1f] = data_ov006_021ba0a4;
    data_ov006_021ba0a4 = data_ov006_021ba0a4 + 1;

    *(uint16_t *)(e + 0x1d4e) = 1;
    *(uint32_t *)(e + 0x1d44) = b;
    *(uint32_t *)(e + 0x1d54) = b + 0x1e8;
    *(uint32_t *)(e + 0x1d58) = b + 0x258;

    q = (uint8_t *)(b + 0x1e8);
    if (*(uint32_t *)(q + 0x6c) != 0) {
        if (func_ov006_0219cb94(*(uint32_t *)(q + 0x6c)) == 0) {
            func_ov006_0219cba8(data_ov006_021ba160 + 0x7ce0);
            func_ov006_0219cb38(data_ov006_021ba160 + 0x74e0, 0x800);
        }
    }

    e[0x1d52] = 1;
    data_ov006_021ba160[0x1524] = data_ov006_021ba160[0x1524] + 1;

    func_0208898c(h);
    return 1;
}
