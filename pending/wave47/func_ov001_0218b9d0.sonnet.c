/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual int get();
};

extern "C" {
extern uint8_t *data_020b8e44;
extern void *data_020b93b8;
extern void func_0201f7fc(void *obj, uint32_t idx, int *out);
extern void func_0201f7a8(void *obj, uint32_t idx, int *out);
extern void func_02089334(void);
extern void func_020893bc(int *p);
extern void func_0201fd38(void *obj, int *p);
extern void func_0201fd20(void *obj, int *p);
void func_ov001_0218b9d0(Obj *self, int flag);
}

void func_ov001_0218b9d0(Obj *self, int flag)
{
    int loc[20];
    uint32_t idx;
    int t, r2;
    uint32_t v;
    uint32_t o8, o32;
    uint8_t u1, u2;

    idx = data_020b8e44[4];
    if (idx != 0xff) {
        if (idx < 0x3c) {
            func_0201f7fc(data_020b93b8, idx, &loc[4]);
            loc[4] = (loc[4] & ~7) | 2;

            t = self->get();
            o8 = ((uint8_t *)loc)[0x14] & ~0x1f;
            t = t + 1;
            r2 = t % 2;
            v = *(uint32_t *)((uint8_t *)self + r2 * 728 + 0x120);
            u1 = (v << 13) >> 27;
            ((uint8_t *)loc)[0x14] = o8 | (u1 & 0x1f);

            t = self->get();
            o32 = loc[13] & ~0xff;
            t = t + 1;
            r2 = t % 2;
            v = *(uint32_t *)((uint8_t *)self + r2 * 728 + 0x120);
            u2 = (uint8_t)v;
            loc[13] = o32 | (u2 & 0xff);
            loc[14]++;

            func_02089334();
            func_020893bc(&loc[16]);
            if (flag) {
                loc[15]++;
            }
            func_0201f7a8(data_020b93b8, idx, &loc[4]);
        }
        data_020b8e44[4] = 0xff;
    }

    func_0201fd38(data_020b93b8, &loc[0]);
    loc[0]++;
    if (flag) {
        loc[1]++;
    }
    func_0201fd20(data_020b93b8, &loc[0]);
}
