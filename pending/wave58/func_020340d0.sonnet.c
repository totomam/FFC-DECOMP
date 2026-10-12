#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern uint32_t func_02033c30(void *ctx, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203c430(void *dst, void *src);
extern void func_0203c3fc(void *p);
extern void func_0203c40c(void *p);
extern void func_02033cb0(void *ctx, uint32_t a, uint32_t b, void *c);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern void *data_020b8e44;

void func_020340d0(uint8_t *ctx, uint32_t *out, uint32_t *in, uint32_t flag, int32_t p5)
{
    uint8_t *d;
    uint8_t *a1;
    
    uint32_t sel, idx, off1;
    uint8_t buf[0x38];
    uint16_t cur, nxt;
    int32_t diff, v;

    d = (uint8_t *)func_02015ba4(data_020b8e44, in[0]);
    
    if (ctx[0x6d] == 0) {
    out[1] = func_02033c30(ctx, in[1], d[4], d[3], d[5], d[2], in[4]);
    out[2] = func_02033c30(ctx, in[1], d[8], d[7], d[9], d[6], 0);
    out[3] = func_02033c30(ctx, in[1], d[0xc], d[0xb], d[0xd], d[0xa], in[2]);
    out[4] = func_02033c30(ctx, in[1], d[0x10], d[0xf], d[0x11], d[0xe], in[5]);

    a1 = 0;
    off1 = *(uint32_t *)(d + 0xa4);
    if (off1) a1 = d + off1;
    sel = 3;
    if (a1 != 0) {
        sel = 0;
    } else {
        uint8_t *a2 = 0;
        if (*(uint32_t *)(d + 0xa8)) a2 = d + *(uint32_t *)(d + 0xa8);
        if (a2 != 0) sel = 1;
    }

    switch (sel) {
    case 0:
        func_0203c430((uint8_t*)out + 0x14, off1 ? d + off1 : 0);
        func_0203c3fc(buf + 0x2c);
        *(uint16_t *)((uint8_t*)out + 0x1c) = *(uint16_t *)(buf + 0x2c);
        *(uint16_t *)((uint8_t*)out + 0x1e) = *(uint16_t *)(buf + 0x2e);
        *(uint16_t *)((uint8_t*)out + 0x20) = *(uint16_t *)(buf + 0x30);
        *(uint16_t *)((uint8_t*)out + 0x22) = *(uint16_t *)(buf + 0x32);
        func_0203c40c(buf + 0x2c);
        func_02033cb0(ctx, in[1], *(uint16_t *)(d + 0x52), (uint8_t*)out + 0x14);
        break;
    case 1:
        func_0203c3fc(buf + 0x24);
        *(uint16_t *)((uint8_t*)out + 0x14) = *(uint16_t *)(buf + 0x24);
        *(uint16_t *)((uint8_t*)out + 0x16) = *(uint16_t *)(buf + 0x26);
        *(uint16_t *)((uint8_t*)out + 0x18) = *(uint16_t *)(buf + 0x28);
        *(uint16_t *)((uint8_t*)out + 0x1a) = *(uint16_t *)(buf + 0x2a);
        func_0203c40c(buf + 0x24);
        func_0203c430((uint8_t*)out + 0x1c, *(uint32_t *)(d + 0xa8) ? d + *(uint32_t *)(d + 0xa8) : 0);
        func_02033cb0(ctx, in[1], *(uint16_t *)(d + 0x52), (uint8_t*)out + 0x1c);
        break;
    case 3:
        func_0203c3fc(buf + 0x1c);
        *(uint16_t *)((uint8_t*)out + 0x14) = *(uint16_t *)(buf + 0x1c);
        *(uint16_t *)((uint8_t*)out + 0x16) = *(uint16_t *)(buf + 0x1e);
        *(uint16_t *)((uint8_t*)out + 0x18) = *(uint16_t *)(buf + 0x20);
        *(uint16_t *)((uint8_t*)out + 0x1a) = *(uint16_t *)(buf + 0x22);
        func_0203c40c(buf + 0x1c);
        func_0203c3fc(buf + 0x14);
        *(uint16_t *)((uint8_t*)out + 0x1c) = *(uint16_t *)(buf + 0x14);
        *(uint16_t *)((uint8_t*)out + 0x1e) = *(uint16_t *)(buf + 0x16);
        *(uint16_t *)((uint8_t*)out + 0x20) = *(uint16_t *)(buf + 0x18);
        *(uint16_t *)((uint8_t*)out + 0x22) = *(uint16_t *)(buf + 0x1a);
        func_0203c40c(buf + 0x14);
        break;
    default:
        break;
    }
    }
    idx = in[1];
    idx = (idx == 0) ? 1 : idx - 1;

    if (flag == 0) {
        out[0] = *(uint16_t *)(d + *(uint32_t *)(d + 0xb8) + idx * 2);
        return;
    }
    if (idx == 0x13) {
        out[0] = *(uint16_t *)(d + *(uint32_t *)(d + 0xb8) + idx * 2);
        return;
    }
    cur = *(uint16_t *)(d + *(uint32_t *)(d + 0xb8) + idx * 2);
    nxt = *(uint16_t *)(d + *(uint32_t *)(d + 0xb8) + (idx + 1) * 2);
    diff = (int32_t)(nxt - cur);
    v = (int32_t)func_020817c8(diff << 12, p5);
    out[0] = (uint32_t)(cur + (v >> 12));
}
