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
    uint8_t *cur;
    uint32_t cmd;
    int32_t size;
    volatile uint32_t len;
    uint8_t * volatile base;
    volatile uint32_t ret;
    uint8_t *payload;
    uint8_t *dst;
    uint8_t *b;
    uint32_t *q;
    uint32_t v;
    int32_t i;

    base = b = p;
    b += 8;
    base = b;
    cur = b;
    ret = 0;
    len = BE16(p);
    payload = func_ov006_021a0c88(&cur, base + len, &cmd, (uint32_t *)&size);
    while (payload != 0) {
        switch (cmd) {
        case 0x201:
            { uint64_t *d = (uint64_t *)data_ov006_021bb4c4; d[0]=0; d[1]=0; d[2]=0; d[3]=0; }
            func_02090380(data_ov006_021bb4c4, payload, size);
            ret = 1;
            break;
        case 0x202:
            data_ov006_021bb4f0[0] = BE16(payload);
            break;
        case 0x203:
            v = BE16(payload);
            q = data_ov006_021bb3c4;
            for (i = 0; i < 4; i++) {
                *(uint32_t *)((uint8_t *)q + 0x15c) = v;
                q += 10;
            }
            break;
        case 0x204:
            v = BE16(payload);
            q = data_ov006_021bb3c4;
            for (i = 0; i < 4; i++) {
                *(uint32_t *)((uint8_t *)q + 0x160) = v;
                q += 10;
            }
            break;
        case 0x205:
            data_ov006_021bb4f0[1] = BE16(payload);
            break;
        case 0x206:
        case 0x207:
        case 0x208:
        case 0x209:
            func_020903cc((uint8_t *)data_ov006_021bb528 + (cmd - 0x206) * 0x28, 0, 0x20);
            if (data_ov006_021bb4f0[12] == 1) {
                dst = (uint8_t *)data_ov006_021bb528 + (cmd - 0x206) * 0x28;
                for (i = 0; i < size; i++) {
                    dst += func_ov006_021a3300(dst, (int8_t)*payload++);
                }
            } else {
                func_02090380((uint8_t *)data_ov006_021bb528 + (cmd - 0x206) * 0x28, payload, size);
            }
            break;
        case 0x20a:
            { uint64_t *d = (uint64_t *)data_ov006_021bb5c0; d[0]=0; d[1]=0; d[2]=0; d[3]=0; d[4]=0; d[5]=0; d[6]=0; d[7]=0; d[8]=0; }

            func_02090380(data_ov006_021bb5c0, payload, size);
            break;
        default:
            break;
        }
        payload = func_ov006_021a0c88(&cur, base + len, &cmd, (uint32_t *)&size);
    }
    return ret;
}
