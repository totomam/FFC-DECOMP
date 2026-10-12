#include "ffc/types.h"

extern void func_02092878(const void *a, const void *b);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_ov006_021a12f4(void *dst, const void *src, uint32_t len);

typedef struct{uint8_t b[13];}S13;
typedef struct{uint8_t b[16];}S16;
typedef struct{uint32_t b[16];}S64;
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
    {
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
                switch (code) {
                case 0:
                    break;
                case 5:
                    data_ov006_021bb2f0[3] = 1;
                    dst[0] = buf[0];
                    dst[1] = buf[1];
                    dst[2] = buf[2];
                    dst[3] = buf[3];
                    dst[4] = buf[4];
                    break;
                case 10:
                    data_ov006_021bb2f0[3] = 1;
                    func_ov006_021a12f4(dst, buf, 10);
                    break;
                case 13:
                    data_ov006_021bb2f0[3] = 2;
                    *(S13*)dst = *(S13*)buf;
                    break;
                case 0x1a:
                    data_ov006_021bb2f0[3] = 2;
                    func_ov006_021a12f4(dst, buf, 0x1a);
                    break;
                case 0x10:
                    data_ov006_021bb2f0[3] = 3;
                    *(S16*)dst = *(S16*)buf;
                    break;
                case 0x20:
                    data_ov006_021bb2f0[3] = 3;
                    func_ov006_021a12f4(dst, buf, 0x20);
                    break;
                default:
                    result = ~6;
                    break;
                }
                src += 0x28;
                dst += 0x20;
            }
            break;
        case 2:
            data_ov006_021bb2f0[3] = 4;
            *(S64*)data_ov006_021bb384 = *(S64*)data_ov006_021bb5c0;
            break;
        case 3:
            data_ov006_021bb2f0[3] = 5;
            *(S64*)data_ov006_021bb384 = *(S64*)data_ov006_021bb5c0;
            break;
        default:
            result = ~6;
            break;
        }
    }
    return result;
}
