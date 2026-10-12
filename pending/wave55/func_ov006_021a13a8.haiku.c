#include "ffc/types.h"

extern void func_02092878(const void *a, const void *b);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_ov006_021a12f4(void *dst, const void *src, uint32_t len);

extern uint8_t data_ov006_021bb2dc[];
extern uint8_t data_ov006_021bb4c4[];
extern uint32_t data_ov006_021bb4f0[];
extern uint32_t data_ov006_021bb2f0[];
extern uint8_t data_ov006_021bb528[];
extern uint8_t data_ov006_021bb304[];
extern uint32_t data_ov006_021bb384[];
extern uint32_t data_ov006_021bb5c0[];

int func_ov006_021a13a8(void)
{
    int result = 1;
    uint8_t buf[0x21];
    uint32_t state;
    uint32_t *st;
    const uint8_t *src;
    uint8_t *dst;
    int i;
    uint32_t code;
    int j;

    func_02092878(data_ov006_021bb2dc, data_ov006_021bb4c4);
    st = data_ov006_021bb4f0;
    state = st[0];
    if (state > 3) {
        result = ~6;
    } else {
        switch (state) {
        case 0:
            data_ov006_021bb2f0[3] = 0;
            break;
        case 1:
            if (st[1] == 0) {
                result = ~6;
                break;
            }
            data_ov006_021bb2f0[4] = st[1];
            src = data_ov006_021bb528;
            dst = data_ov006_021bb304;
            for (i = 0; i < 4; i++) {
                func_02090380(buf, src, 0x20);
                buf[0x20] = 0;
                code = func_02092864(buf);
                if (code == 0) {
                } else if (code == 5) {
                    data_ov006_021bb2f0[3] = 1;
                    dst[0] = buf[0];
                    dst[1] = buf[1];
                    dst[2] = buf[2];
                    dst[3] = buf[3];
                    dst[4] = buf[4];
                } else if (code == 0xa) {
                    data_ov006_021bb2f0[3] = 1;
                    func_ov006_021a12f4(dst, buf, 10);
                } else if (code == 0xd) {
                    data_ov006_021bb2f0[3] = 2;
                    for (j = 0; j < 13; j++) {
                        dst[j] = buf[j];
                    }
                } else if (code == 0x1a) {
                    data_ov006_021bb2f0[3] = 2;
                    func_ov006_021a12f4(dst, buf, 0x1a);
                } else if (code == 0x10) {
                    data_ov006_021bb2f0[3] = 3;
                    for (j = 0; j < 16; j++) {
                        dst[j] = buf[j];
                    }
                } else if (code == 0x20) {
                    data_ov006_021bb2f0[3] = 3;
                    func_ov006_021a12f4(dst, buf, 0x20);
                } else {
                    result = ~6;
                }
                src += 0x28;
                dst += 0x20;
            }
            break;
        case 2:
            data_ov006_021bb2f0[3] = 4;
            {
                uint32_t *d = data_ov006_021bb384;
                const uint32_t *s = data_ov006_021bb5c0;
                for (j = 0; j < 8; j++) {
                    d[0] = s[0];
                    d[1] = s[1];
                    d += 2;
                    s += 2;
                }
            }
            break;
        case 3:
            data_ov006_021bb2f0[3] = 5;
            {
                uint32_t *d = data_ov006_021bb384;
                const uint32_t *s = data_ov006_021bb5c0;
                for (j = 0; j < 8; j++) {
                    d[0] = s[0];
                    d[1] = s[1];
                    d += 2;
                    s += 2;
                }
            }
            break;
        }
    }
    return result;
}
