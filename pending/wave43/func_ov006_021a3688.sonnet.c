#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void *func_ov006_021b3e88(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3d84(void *p, int32_t a, uint32_t b);
extern void func_ov006_021a37b8(uint32_t n);
extern void *func_ov006_021b570c(uint32_t a, void *fn, uint32_t b, uint32_t c);
extern void func_ov006_021a3814(void);
extern uint8_t data_ov006_021b8058[];
extern uint8_t data_ov006_021b8068[];
extern uint8_t *data_ov006_021bc6a8;

void func_ov006_021a3688(uint32_t a)
{
    int32_t i;
    int32_t n;
    uint8_t *p7;
    uint32_t k;
    void **obj;

    n = data_ov006_021b8058[a];
    k = 4;
    data_ov006_021bc6a8 = func_ov006_021b49e4(0x1c, k);
    data_ov006_021bc6a8[0x16] = (uint8_t)(k - 6);
    data_ov006_021bc6a8[0x17] = (uint8_t)a;

    i = 0;
    if (n > 0) {
        p7 = data_ov006_021b8068 + a * 2;
        do {
            *(void **)(data_ov006_021bc6a8 + i * 4) = func_ov006_021b3e88(0, p7[i], 1);
            func_ov006_021b3d84(*(void **)(data_ov006_021bc6a8 + i * 4), -1, 1);
            i++;
        } while (i < n);
    }

    k = 1;
    obj = (void **)data_ov006_021bc6a8;
    obj[2] = func_ov006_021b3e88(0, k, 1);
    func_ov006_021b3d84(obj[2], (int32_t)(k - 2), 1);
    func_ov006_021a37b8(0xc0);
    obj = (void **)data_ov006_021bc6a8;
    obj[3] = func_ov006_021b570c(0, (void *)func_ov006_021a3814, 0, 0x78);
}
