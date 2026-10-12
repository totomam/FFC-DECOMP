#include "ffc/types.h"

extern uint8_t *data_020b8e44;
extern void *data_020b93b8;
extern void func_0201f7fc(void *obj, uint32_t idx, int *out);
extern void func_0201f7a8(void *obj, uint32_t idx, int *out);
extern void func_02089334(void);
extern void func_020893bc(int *p);
extern void func_0201fd38(void *obj, int *p);
extern void func_0201fd20(void *obj, int *p);

void func_ov001_0218b9d0(uint8_t *self, int flag)
{
    int loc[20];
    uint8_t *b = (uint8_t *)loc;
    uint8_t *s = data_020b8e44;
    uint32_t idx;
    int32_t t; uint32_t r2, r0;
    uint32_t v;
    uint8_t *o = self;

    idx = s[4];
    if (idx != 0xff) {
        if (idx < 0x3c) {
            func_0201f7fc(data_020b93b8, idx, &loc[4]);
            loc[4] = (loc[4] & ~7) | 2;

            t = ((int (*)(void *))(((void **)(*(void **)o))[14]))(o) + 1;
            r2 = (uint32_t)t >> 31;
            r0 = ((uint32_t)t << 31) - r2;
            r0 = (r0 >> 31) | (r0 << 1);
            r2 = r2 + r0;
            v = *(uint32_t *)(o + r2 * 728 + 0x120);
            b[0x14] = (b[0x14] & ~0x1f) | ((v << 13) >> 27 & 0x1f);

            t = ((int (*)(void *))(((void **)(*(void **)o))[14]))(o) + 1;
            r2 = (uint32_t)t >> 31;
            r0 = ((uint32_t)t << 31) - r2;
            r0 = (r0 >> 31) | (r0 << 1);
            r2 = r2 + r0;
            v = *(uint32_t *)(o + r2 * 728 + 0x120);
            loc[13] = (loc[13] & ~0xff) | (v & 0xff);
            loc[14]++;

            func_02089334();
            func_020893bc(&loc[16]);
            if (flag) {
                loc[15]++;
            }
            func_0201f7a8(data_020b93b8, idx, &loc[4]);
        }
        s[4] = 0xff;
    }

    func_0201fd38(data_020b93b8, &loc[0]);
    loc[0]++;
    if (flag) {
        loc[1]++;
    }
    func_0201fd20(data_020b93b8, &loc[0]);
}
