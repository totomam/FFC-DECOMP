#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7f4;
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

typedef struct { uint32_t w[17]; } S44;

uint32_t func_ov006_021b0d40(uint32_t a0)
{
    uint8_t buf[0x54];
    uint64_t v;
    uint8_t *g;

    data_ov006_021bc7f4 = func_ov006_021b49e4(0x1ba0, 0x20);
    *(uint32_t *)(data_ov006_021bc7f4 + 0x1370) = a0;
    v = func_020882cc();
    g = data_ov006_021bc7f4;
    *(uint32_t *)(g + 0x1ba0 - 0x18) = (uint32_t)v;
    *(uint32_t *)(g + 0x1ba0 - 0x14) = (uint32_t)(v >> 32);

    if (func_0208d87c(data_ov006_021bc7f4, func_ov006_021b0f08, 3) == 2) {
        for (;;) {
            func_0208d3e4(data_ov006_021bc7f4 + 0x13b8);
            g = data_ov006_021bc7f4;
            if (*(uint16_t *)(g + 0x13b8) == 2) break;
        }

        *(S44 *)(g + 0x1374) = *(S44 *)data_ov006_021b89a8;

        *(uint32_t *)(g + 0x1374) = (uint32_t)(g + 0xf00);
        *(uint16_t *)(data_ov006_021bc7f4 + 0x137c) = func_0208d65c();

        func_02088b50(buf);
        func_02084ca4(data_ov006_021b899e, data_ov006_021bc7f4 + 0x1388, 8);
        data_ov006_021bc7f4[0x1391] = 1;
        func_02084ca4(buf + 4, data_ov006_021bc7f4 + 0x1394, (uint32_t)(*(uint16_t *)(buf + 0x1a)) << 1);

        if (func_ov006_021b0e40() != 0) {
            *(uint32_t *)(data_ov006_021bc7f4 + 0x1b90) =
                func_ov006_021b570c(0, func_ov006_021b1124, 0, 0x78);
            return 1;
        }
    }

    func_ov006_021b49fc(&data_ov006_021bc7f4);
    return 0;
}
