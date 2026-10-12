#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t func_0201e9d0(uint32_t g);
extern void func_020692a4(void *object);
extern void func_ov010_021bd250(uint32_t x);
extern void func_ov005_02196144(uint32_t a, uint8_t b);
extern void *func_02084b2c(void *dst, int c, uint32_t n);
extern void func_0201e92c(uint32_t g, uint32_t id, void *out);
extern void func_0201e9e4(uint32_t g);
extern void func_ov010_021beb20(void *self);
extern void func_ov010_021bf10c(void *self);
extern void func_ov010_021bf160(void *self);
extern void func_02069828(void *self, uint32_t a, uint32_t b);
extern void func_0201e954(uint32_t g, uint32_t id, void *out);
extern uint32_t func_02036da0(void *p);
extern void func_02036f08(void *p, uint32_t b);
extern void func_ov005_02196c58(uint32_t a, uint32_t b);

#define FLD(off) (*(uint32_t *)(self + (off)))

void func_ov010_021beec0(void *param)
{
    uint8_t *self = (uint8_t *)param;
    uint32_t out[2];
    uint32_t tb[6];
    uint32_t buf[6];
    uint32_t n;
    uint32_t idx;
    uint32_t flag;
    uint32_t *tbl;
    uint32_t *tbl2;
    int i;

    if (FLD(0x130) == 2) {
        if (FLD(0x138) != 0) {
            return;
        }
        if (FLD(0xfc) != 0) {
            if (FLD(0xf8) >= 2 && FLD(0xf8) * 8 + 1 == func_0201e9d0(data_020b93b8)) {
                FLD(0xf8) = FLD(0xf8) - 1;
                func_ov005_02196144(FLD(0x114), FLD(0xf8) + 1);
            } else if (func_0201e9d0(data_020b93b8) == 9) {
                func_020692a4((void *)FLD(0xd8));
                func_ov010_021bd250(FLD(0xd8));
                func_020692a4((void *)FLD(0xdc));
                func_ov010_021bd250(FLD(0xdc));
                FLD(0xf8) = 0;
                func_ov005_02196144(FLD(0x114), 1);
            }
        }
        func_02084b2c(buf, 0, 0x18);
        func_0201e92c(data_020b93b8, FLD(0x12c), buf);
        func_0201e9e4(data_020b93b8);
        func_ov010_021beb20(self);
        func_ov010_021bf10c(self);
        func_ov010_021bf160(self);
        {
            void *obj = (void *)FLD(0xf4);
            void **vt = *(void ***)obj;
            ((void (*)(void *, void *))vt[4])(out, obj);
        }
        func_02069828(self, out[0], out[1]);
    } else if (FLD(0x130) == 1) {
        func_0201e954(data_020b93b8, FLD(0x128), tb);
        func_02036f08(tb, func_02036da0(tb) == 0);
        func_0201e92c(data_020b93b8, FLD(0x12c), tb);
        flag = func_02036da0(tb) & 1;
        tbl = (uint32_t *)FLD(0x11c);
        idx = FLD(0x12c);
        tbl[idx] = (flag << 30) | (tbl[idx] & 0xbfffffff);
        tbl2 = (uint32_t *)FLD(0x108);
        for (i = 0; i < 8; i++) {
            if (FLD(0xf8) * 8 + i == FLD(0x12c)) {
                func_ov005_02196c58(tbl2[i], (uint32_t)&tbl[idx]);
            }
        }
    }
}
