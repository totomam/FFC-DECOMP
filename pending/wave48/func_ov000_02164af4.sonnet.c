#include "ffc/types.h"

extern uint32_t func_02092864(const int8_t *text);
extern int func_020894a0(uint32_t *a, uint32_t *b);
extern uint64_t func_020898d0(uint32_t *a, uint32_t *b);
extern void func_02092878(int8_t *dst, const int8_t *src);
extern int func_02093b18(const int8_t *p);
extern int func_02092948(const char *a, const int8_t *b);
extern const char data_ov000_0216b334[];
extern uint32_t data_02144c00;
extern const char *data_ov000_0216b304[12];

typedef struct {
    uint32_t flag;
    uint32_t alo;
    uint32_t ahi;
    uint32_t dlo;
    uint32_t dhi;
} Res;
extern Res data_ov000_02170970;

int func_ov000_02164af4(const int8_t *s)
{
    uint32_t t1[4];
    uint32_t t2[3];
    int8_t buf[0x20];
    uint32_t ahi;
    uint64_t a;
    uint64_t b;
    int i;

    if (func_02092864(s) != func_02092864((const int8_t *)data_ov000_0216b334)
        || s[7] != 0x20 || s[11] != 0x20 || s[16] != 0x20
        || s[19] != 0x3a || s[22] != 0x3a || s[25] != 0x20) {
        goto fail;
    }
    if (func_020894a0(t1, t2) != 0) {
        goto fail;
    }
    a = func_020898d0(t1, t2);
    if (a == (uint64_t)-1) {
        goto fail;
    }
    ahi = (uint32_t)(a >> 32);

    func_02092878(buf, s);
    buf[7] = 0;
    buf[11] = 0;
    buf[16] = 0;
    buf[19] = 0;
    buf[22] = 0;
    buf[25] = 0;

    data_02144c00 = 0;
    t1[0] = func_02093b18(buf + 12);
    if (data_02144c00 == 0x22) {
        goto fail;
    }
    t1[0] -= 2000;

    t1[1] = 13;
    for (i = 0; i < 12; i++) {
        if (func_02092948(data_ov000_0216b304[i], buf + 8) == 0) {
            t1[1] = i + 1;
            break;
        }
    }
    if (t1[1] > 12) {
        goto fail;
    }

    data_02144c00 = 0;
    t1[2] = func_02093b18(buf + 5);
    if (data_02144c00 == 0x22) {
        goto fail;
    }

    data_02144c00 = 0;
    t2[0] = func_02093b18(buf + 17);
    if (data_02144c00 == 0x22) {
        goto fail;
    }

    data_02144c00 = 0;
    t2[1] = func_02093b18(buf + 20);
    if (data_02144c00 == 0x22) {
        goto fail;
    }

    data_02144c00 = 0;
    t2[2] = func_02093b18(buf + 23);
    if (data_02144c00 == 0x22) {
        goto fail;
    }

    b = func_020898d0(t1, t2);
    if (b == (uint64_t)-1) {
        goto fail;
    }

    *(uint64_t *)&data_ov000_02170970.dlo = a - b;
    data_ov000_02170970.alo = (uint32_t)a;
    data_ov000_02170970.ahi = ahi;
    data_ov000_02170970.flag = 1;
    return 1;

fail:
    return 0;
}
