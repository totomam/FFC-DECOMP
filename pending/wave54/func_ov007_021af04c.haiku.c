#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);
extern int func_02036994(void *p, uint32_t i);
extern void func_02035f58(void *obj);
extern void *func_020367bc(void *p, uint32_t i);
extern void func_0201f600(void *a, uint32_t i, void *p, void *obj);
extern int32_t func_ov007_021aee78(void *obj);
extern void func_ov007_021aed84(void *out, void *s, void *obj);
extern int32_t func_02036174(void *obj);
extern int32_t func_ov007_021aee3c(void *obj);
extern int16_t func_0203c410(const int16_t *values, uint32_t index);
extern int32_t func_ov007_021aee8c(void *s, int32_t v);
extern void func_02033e8c(void *p);
extern void *func_02035fd0(void *object);
extern int32_t func_ov007_021aef14(void *acc);
extern void *data_020b93b8;

typedef struct {
    int32_t hdr;
    int32_t f[4];
    int16_t v[8];
} Blk;

int32_t func_ov007_021af04c(void *p)
{
    uint8_t obj[0x60];
    int32_t acc[14];
    Blk blk;
    int32_t total;
    int32_t i;
    uint32_t mode;
    int32_t j;
    void *s;
    int32_t v4;

    total = 0;
    func_02084b2c(acc, 0, 0x38);
    for (i = 0; i < 3; i++) {
        if (func_02036994(p, i) != 0) {
            func_02035f58(obj);
            s = func_020367bc(p, i);
            if (s != 0) {
                func_0201f600(data_020b93b8, i, p, obj);
                v4 = func_ov007_021aee78(obj);
                func_ov007_021aed84(&blk, s, obj);
                acc[0] += v4;
                acc[1] += func_02036174(obj);
                acc[2] += blk.f[0];
                acc[3] += blk.f[1];
                acc[4] += blk.f[2];
                acc[5] += blk.f[3];
                mode = func_ov007_021aee3c(obj);
                if (mode != 3) {
                    for (j = 0; j < 4; j++) {
                        int16_t val = func_0203c410(blk.v + mode * 4, j);
                        if (mode == 0) {
                            acc[6 + j] += val;
                        } else if (mode == 1) {
                            acc[10 + j] += val;
                        }
                    }
                }
                total += func_ov007_021aee8c(s, v4);
                func_02033e8c(&blk);
            }
            func_02035fd0(obj);
        }
    }
    total += func_ov007_021aef14(acc);
    return total;
}
