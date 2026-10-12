#include "ffc/types.h"

extern void func_02087874(uint8_t *dst, uint32_t size);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern uint8_t *data_ov006_021bc7f4;
extern const uint8_t data_ov006_021b899e[];

void func_ov006_021b1054(uint8_t *p)
{
    uint8_t **gp;
    uint8_t *base;
    int i;
    uint8_t *lb;
    int count;
    uint8_t *entry;
    int j;
    void (*fn)(int);

    gp = &data_ov006_021bc7f4;
    base = *gp;
    if (base[0x1b95] != 0) {
        fn = *(void (**)(int))(base + 0x1370);
        if (fn == 0) {
            return;
        }
        fn(base[0x1b95]);
        return;
    }

    func_02087874(base + 0xf00, 0x400);

    i = 0;
    count = *(uint16_t *)(p + 0xe);
    if (count > 0) {
        lb = *gp;
        do {
            entry = ((uint8_t **)(p + 0x10))[i];
            if (func_02090410(entry + 0xc, data_ov006_021b899e, 8) == 0 && (entry[0x15] & 1)) {
                for (j = 0; j < 16; j++) {
                    if (func_02090410(entry + 4, lb + 0x1300 + j * 7, 6) == 0) {
                        if (lb[0x1306 + j * 7] != 0) {
                            break;
                        }
                        fn = *(void (**)(int))(lb + 0x1370);
                        if (fn != 0) {
                            fn(1);
                            return;
                        }
                        lb[0x1b95] = 1;
                        return;
                    }
                }
            }
            i++;
        } while (i < count);
    }
}
