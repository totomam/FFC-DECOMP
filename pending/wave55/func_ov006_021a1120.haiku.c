#include "ffc/types.h"

extern void *func_ov006_021a0c88(uint8_t **cur, uint8_t *end, uint32_t *cmd, uint32_t *size);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void *func_020903cc(void *object, int value, uint32_t length);
extern int func_ov006_021a3300(void *object, int8_t value);
extern uint32_t data_ov006_021bb4c4[];
extern uint32_t data_ov006_021bb4f0[];
extern uint32_t data_ov006_021bb3c4[];
extern uint32_t data_ov006_021bb528[];
extern uint32_t data_ov006_021bb5c0[];

#define BE16(p) ((uint16_t)((((*(uint16_t *)(p)) >> 8) & 0xff) | (((*(uint16_t *)(p)) << 8) & 0xff00)))

uint32_t func_ov006_021a1120(uint8_t *p)
{
    uint8_t *base;
    uint8_t *cur;
    uint8_t *payload;
    uint32_t cmd;
    int32_t size;
    uint32_t len;
    uint32_t ret;
    uint8_t *dst;
    int32_t i;

    base = p;
    base += 8;
    cur = base;
    ret = 0;
    len = BE16(p);
    payload = func_ov006_021a0c88(&cur, base + len, &cmd, (uint32_t *)&size);
    while (payload != 0) {
        switch (cmd) {
        case 0x201:
            data_ov006_021bb4c4[0] = 0;
            data_ov006_021bb4c4[1] = 0;
            data_ov006_021bb4c4[2] = 0;
            data_ov006_021bb4c4[3] = 0;
            data_ov006_021bb4c4[4] = 0;
            data_ov006_021bb4c4[5] = 0;
            data_ov006_021bb4c4[6] = 0;
            data_ov006_021bb4c4[7] = 0;
            func_02090380(data_ov006_021bb4c4, payload, size);
            ret = 1;
            break;
        case 0x202:
            data_ov006_021bb4f0[0] = BE16(payload);
            break;
        case 0x203:
            for (i = 0; i < 4; i++) {
                data_ov006_021bb3c4[0x57 + i * 10] = BE16(payload);
            }
            break;
        case 0x204:
            for (i = 0; i < 4; i++) {
                data_ov006_021bb3c4[0x58 + i * 10] = BE16(payload);
            }
            break;
        case 0x205:
            data_ov006_021bb4f0[1] = BE16(payload);
            break;
        case 0x206:
        case 0x207:
        case 0x208:
        case 0x209:
            dst = (uint8_t *)data_ov006_021bb528 + (cmd - 0x206) * 0x28;
            func_020903cc(dst, 0, 0x20);
            if (data_ov006_021bb4f0[12] == 1) {
                for (i = 0; i < size; i++) {
                    dst += func_ov006_021a3300(dst, (int8_t)payload[i]);
                    payload++;
                }
            } else {
                func_02090380(dst, payload, size);
            }
            break;
        case 0x20a:
            data_ov006_021bb5c0[0] = 0;
            data_ov006_021bb5c0[1] = 0;
            data_ov006_021bb5c0[2] = 0;
            data_ov006_021bb5c0[3] = 0;
            data_ov006_021bb5c0[4] = 0;
            data_ov006_021bb5c0[5] = 0;
            data_ov006_021bb5c0[6] = 0;
            data_ov006_021bb5c0[7] = 0;
            data_ov006_021bb5c0[8] = 0;
            data_ov006_021bb5c0[9] = 0;
            data_ov006_021bb5c0[10] = 0;
            data_ov006_021bb5c0[11] = 0;
            data_ov006_021bb5c0[12] = 0;
            data_ov006_021bb5c0[13] = 0;
            data_ov006_021bb5c0[14] = 0;
            data_ov006_021bb5c0[15] = 0;
            data_ov006_021bb5c0[16] = 0;
            data_ov006_021bb5c0[17] = 0;
            func_02090380(data_ov006_021bb5c0, payload, size);
            break;
        default:
            break;
        }
        payload = func_ov006_021a0c88(&cur, base + len, &cmd, (uint32_t *)&size);
    }
    return ret;
}
