#include "ffc/types.h"

extern void *data_ov006_021bc7f4;
extern uint8_t data_ov006_021b89a8[];
extern uint8_t data_ov006_021b899e[];
extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern uint64_t func_020882cc(void);
extern uint32_t func_0208d87c(void *obj, void *fn, uint32_t n);
extern void func_0208d3e4(void *p);
extern uint16_t func_0208d65c(void);
extern void func_02088b50(void *out);
extern void func_02084ca4(void *src, void *dst, uint32_t n);
extern uint32_t func_ov006_021b0e40(void);
extern uint32_t func_ov006_021b570c(uint32_t a, void *fn, uint32_t b, uint32_t c);
extern void func_ov006_021b49fc(void *p);
extern void func_ov006_021b0f08(void);
extern void func_ov006_021b1124(void);

uint32_t func_ov006_021b0d40(uint32_t a0)
{
    uint8_t buf[0x54];
    uint64_t v;
    uint32_t *s, *d;
    uint8_t *g;
    uint32_t K, b, off, one;
    int i;

    K = 0x1ba0;
    b = 0x1370;
    g = func_ov006_021b49e4(K, 0x20);
    data_ov006_021bc7f4 = g;
    *(uint32_t *)(g + b) = a0;
    v = func_020882cc();
    g = data_ov006_021bc7f4;
    *(uint32_t *)(g + K - 0x18) = (uint32_t)v;
    *(uint32_t *)(g + K - 0x14) = (uint32_t)(v >> 32);

    if (func_0208d87c(data_ov006_021bc7f4, func_ov006_021b0f08, 3) == 2) {
        off = b + 0x48;
        b += 0x48;
        do {
            func_0208d3e4((uint8_t *)data_ov006_021bc7f4 + off);
        } while (*(uint16_t *)((uint8_t *)data_ov006_021bc7f4 + b) != 2);

        g = data_ov006_021bc7f4;
        s = (uint32_t *)data_ov006_021b89a8;
        d = (uint32_t *)(g + 0x1374);
        i = 8;
        do {
            d[0] = s[0];
            d[1] = s[1];
            s += 2;
            d += 2;
        } while (--i);
        *d = *s;

        *(uint32_t *)(g + 0x1374) = (uint32_t)(g + 0xf00);
        *(uint16_t *)(g + 0x137c) = func_0208d65c();

        func_02088b50(buf);
        func_02084ca4(data_ov006_021b899e, g + 0x1388, 8);

        one = 1;
        g[0x1391] = (uint8_t)one;
        func_02084ca4(buf + 4, g + 0x1394, (uint32_t)(*(uint16_t *)(buf + 0x1a)) << 1);

        if (func_ov006_021b0e40() != 0) {
            *(uint32_t *)((uint8_t *)data_ov006_021bc7f4 + 0x1b90) =
                func_ov006_021b570c(0, func_ov006_021b1124, 0, 0x78);
            return one;
        }
    }

    func_ov006_021b49fc(&data_ov006_021bc7f4);
    return 0;
}
