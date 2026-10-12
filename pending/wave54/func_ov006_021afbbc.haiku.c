#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e0;
extern uint8_t data_ov006_021b8914[];
extern uint8_t data_ov006_021b8910[];
extern void func_02087874(uint8_t *dst, uint32_t n);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_02084ca4(uint8_t *dst, const uint8_t *src, uint32_t n);
extern void func_0208d6a4(uint8_t *out, uint8_t *item);

void func_ov006_021afbbc(uint8_t *p)
{
    uint8_t *base = data_ov006_021bc7e0 + 0x1300;
    uint32_t buf[0x21];
    uint8_t *item;
    uint8_t *ent;
    int32_t i, j, k, count;

    func_02087874(data_ov006_021bc7e0 + 0xf00, 0x400);

    for (i = 0; i < *(uint16_t *)(p + 0xe); i++) {
        item = *(uint8_t **)(p + 0x10 + i * 4);
        if (item[0xc] == 0) {
            continue;
        }
        if (*(uint16_t *)(item + 0x3c) != 0) {
            continue;
        }

        for (j = 0; j < 20; j++) {
            if (func_02090410(item + 4, base + j * 0x2a + 0x20, 6) == 0) {
                break;
            }
        }
        if (j == 20) {
            for (j = 0; j < 20; j++) {
                if (func_02090410(base + j * 0x2a + 0x20, data_ov006_021b8914, 6) == 0) {
                    break;
                }
            }
            if (j == 20) {
                return;
            }
        }

        ent = base + j * 0x2a;
        func_02084ca4(item + 4, ent + 0x20, 6);
        func_02084ca4(item + 0xc, ent, 0x20);
        *(uint16_t *)(ent + 0x26) = *(uint16_t *)(p + 0x50 + i * 2);

        if ((*(uint16_t *)(item + 0x2c) & 0x10) == 0) {
            ent[0x28] = 0;
            continue;
        }

        ent[0x28] = 1;
        func_0208d6a4((uint8_t *)buf, item);
        count = ((uint8_t *)buf)[0];
        for (k = 0; k < count; k++) {
            uint8_t *e = (uint8_t *)buf + k * 8;
            if (e[4] == 0x30) {
                ent[0x28] = 2;
                break;
            }
            if (e[4] == 0xdd && e[5] >= 4) {
                if (func_02090410(*(uint8_t **)(e + 8), data_ov006_021b8910, 4) == 0) {
                    ent[0x28] = 2;
                    break;
                }
            }
        }
    }
}
