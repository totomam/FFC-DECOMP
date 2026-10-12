#include "ffc/types.h"

extern void func_ov006_0219da1c(void);
extern uint32_t func_ov006_0219cedc(uint32_t a);
extern void func_ov006_0219ddc4(int32_t a);
extern uint8_t *func_ov006_0219cfec(uint8_t *p);
extern void func_ov006_0219ceec(uint32_t a);
extern void func_ov006_0219f008(void);
extern uint32_t data_ov006_021bafc0;
extern uint32_t data_ov006_021bafcc;
extern uint32_t data_ov006_021ba1dc[];
extern int32_t data_ov006_021b8b20;

int32_t func_ov006_0219cefc(uint8_t *p) {
    int32_t r1;
    int32_t off = 0x106;
    int32_t n;

    if (*(int16_t *)(p + off) == 0) goto fail;
    if (*(int16_t *)(p + off) < -1) goto fail;
    if (*(int16_t *)(p + off + 2) < -1) goto fail;
    if (*(int16_t *)(p + off + 4) == 0) goto fail;
    if (*(int16_t *)(p + off + 4) < -1) goto fail;
    if (*(int16_t *)(p + off + 6) < -1) goto fail;
    if (*(int16_t *)(p + off + 8) < -1) goto fail;
    n = *(uint16_t *)(p + 4);
    if (n == 0) goto fail;
    if (n > off - 6) goto fail;
    if (p[n - 1 + 6] != 0) goto fail;
    r1 = 0;
    goto check;
fail:
    r1 = -1;
check:
    if (data_ov006_021bafc0 == 0) r1 = -1;
    else if (data_ov006_021bafcc == 0) r1 = -1;

    if (r1 == -1) {
        p[0x116] = 0xf;
        func_ov006_0219da1c();
        return -1;
    }
    data_ov006_021ba1dc[5] = func_ov006_0219cedc(0x5f8);
    if (data_ov006_021ba1dc[5] == 0) {
        p[0x116] = 0xf;
        func_ov006_0219da1c();
        return -1;
    }
    func_ov006_0219ddc4(-1);
    p = func_ov006_0219cfec(p);
    func_ov006_0219ceec(data_ov006_021ba1dc[5]);
    func_ov006_0219da1c();
    if (data_ov006_021b8b20 != -1) func_ov006_0219f008();
    return (int32_t)p;
}
