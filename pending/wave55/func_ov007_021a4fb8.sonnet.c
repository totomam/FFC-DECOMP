#include "ffc/types.h"

typedef struct { uint8_t v; } __attribute__((aligned(2))) B;
extern void *data_020b93b8;
extern char data_020ac7b8[];
extern uint32_t data_ov007_021c4268[];

extern void func_02036f6c(void *a, void *b);
extern int func_0201fca8(void *a, void *b, uint8_t c, uint8_t d, uint32_t e);
extern void func_ov007_021a6c9c(void *a, void *b, B c);
extern void func_ov007_021a6c68(void *a, void *b, B c);
extern void *func_0205681c(uint32_t n);
extern void func_0206e2a4(uint32_t p);

void func_ov007_021a4fb8(uint8_t *p, uint8_t *q)
{
    B zc, zb, za;
    uint32_t local[6];
    uint32_t *src;
    uint32_t cnt;
    uint32_t *elem;
    int i;

    uint32_t id = 0x100a5;
    switch (*(uint32_t *)(q + 0xc) - id) {
    case 0:
        if (*(uint32_t *)(p + 0xd0) == 2) {
            func_02036f6c(q + 0x10, local);
            if (!func_0201fca8(data_020b93b8, local, *(uint8_t *)(q + 0x24),
                               *(uint8_t *)(q + 0x25), *(uint32_t *)(q + 0x28)))
                return;
            { 
            cnt = *(uint32_t *)(p + 0x120);
            if (cnt < *(uint32_t *)(p + 0x124)) {
                elem = (uint32_t *)(*(uint8_t **)(p + 0x11c) + cnt * 0x18);
                if (elem != 0) {
                    elem[0] = local[0]; elem[1] = local[1]; elem[2] = local[2];
                    elem[3] = local[3]; elem[4] = local[4]; elem[5] = local[5];
                }
                *(uint32_t *)(p + 0x120) = cnt + 1;
            } else {
                za.v = 0;
                func_ov007_021a6c9c(p + 0x11c, local, za);
            }
            return; }
        } else {
            if (!func_0201fca8(data_020b93b8, q + 0x10, *(uint8_t *)(q + 0x28),
                               *(uint8_t *)(q + 0x29), *(uint32_t *)(q + 0x2c)))
                return;
            { 
            cnt = *(uint32_t *)(p + 0x120);
            if (cnt < *(uint32_t *)(p + 0x124)) {
                elem = (uint32_t *)(*(uint8_t **)(p + 0x11c) + cnt * 0x18);
                if (elem != 0) {
                    elem[0] = ((uint32_t *)(q + 0x10))[0]; elem[1] = ((uint32_t *)(q + 0x10))[1]; elem[2] = ((uint32_t *)(q + 0x10))[2];
                    elem[3] = ((uint32_t *)(q + 0x10))[3]; elem[4] = ((uint32_t *)(q + 0x10))[4]; elem[5] = ((uint32_t *)(q + 0x10))[5];
                }
                *(uint32_t *)(p + 0x120) = cnt + 1;
            } else {
                zb.v = 0;
                func_ov007_021a6c9c(p + 0x11c, ((uint32_t *)(q + 0x10)), zb);
            }
            return; }
        }
    case 1:
        *(uint8_t *)(p + 0x115) = 0;
        {
            uint32_t *o = (uint32_t *)func_0205681c(0x10);
            if (o != 0) {
                o[2] = 0;
                o[3] = id + 2;
                o[0] = (uint32_t)data_020ac7b8;
            }
        }
        func_0206e2a4(*(uint32_t *)(p + 0xfc));
        {
            uint32_t a = data_ov007_021c4268[0];
            uint32_t b = data_ov007_021c4268[1];
            *(uint32_t *)(p + 0xb8) = a;
            *(uint32_t *)(p + 0xbc) = b;
        }
        return;
    case 2:
        *(uint8_t *)(p + 0x115) = 1;
        return;
    case 3:
        return;
    case 4: {
        cnt = *(uint32_t *)(p + 0x12c);
        if (cnt < *(uint32_t *)(p + 0x130)) {
            *(uint32_t *)(p + 0x12c) = cnt + 1;
            {
                uint16_t *d = (uint16_t *)(*(uint8_t **)(p + 0x128) + cnt * 0x12);
                uint16_t *s = (uint16_t *)(q + 0x10);
                for (i = 0; i < 9; i++) {
                    d[i] = s[i];
                }
            }
        } else {
            zc.v = 0;
            func_ov007_021a6c68(p + 0x128, q + 0x10, zc);
        }
        return; }
    default:
        return;
    }
}
