#include "ffc/types.h"

extern void *func_0208130c(uint32_t a, uint32_t b);
extern void func_ov006_021b4624(uint32_t a, uint32_t b);
extern void func_ov006_021a9a34(void *a, uint32_t b);
extern void func_ov006_021a9b08(void *a, uint32_t b);
extern void func_ov006_021b4690(uint32_t a);
extern void func_ov006_021a9b64(void);
extern uint8_t data_ov006_021bc778[];

void func_ov006_021a99cc(void) {
    int32_t i;
    int32_t n;
    uint8_t *base;
    uint8_t *p;
    uint8_t *q;

    base = (uint8_t *)func_0208130c(*(uint16_t *)(data_ov006_021bc778 + 2), 0x1c);
    p = *(uint8_t **)(data_ov006_021bc778 + 4);
    n = p[0x51];

    func_ov006_021b4624(*(uint32_t *)(p + 0xc), 0);
    if (n > 5) {
        n = 5;
    }
    i = 0;
    q = base;
    if (n > 0) {
        do {
            func_ov006_021a9a34(q, i);
            i++;
            q++;
        } while (i < n);
    }
    i = 0;
    if (n > 0) {
        do {
            func_ov006_021a9b08(base, i);
            i++;
            base++;
        } while (i < n);
    }
    func_ov006_021b4690(*(uint32_t *)(*(uint8_t **)(data_ov006_021bc778 + 4) + 0xc));
    func_ov006_021a9b64();
}
