#include "ffc/types.h"

extern int func_ov000_02159000(void);
extern void func_ov000_0215b70c(void);
extern void func_ov000_0215b7a4(int);
extern void func_ov000_0215bf3c(int);
extern int func_ov000_02159988(void);
extern int func_ov000_02159358(int);
extern void func_ov000_0215c660(void *, void *, int, uint8_t, void *, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern int func_ov000_0215b9ac(void);

typedef struct Inner {
    uint8_t pad[0x24];
    int32_t mode;
    uint8_t pad2[0x80 - 0x28];
    uint32_t f80;
    uint32_t f84;
} Inner;

typedef struct Glob {
    uint32_t a;
    Inner *b;
} Glob;

extern Glob data_ov000_02170064;

uint32_t func_ov000_0215b06c(void *p0, void *p1, int p2, int p3, uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4, uint32_t s5, uint32_t s6, uint32_t s7, uint32_t s8)
{
    uint8_t tmp0[0x40];
    uint8_t buf[0x40];
    int i, k, j;

    if (func_ov000_02159000() != 0 || data_ov000_02170064.b->mode != 3) {
        return 0;
    }
    func_ov000_0215b70c();
    data_ov000_02170064.b->f80 = s0;
    data_ov000_02170064.b->f84 = s1;
    func_ov000_0215b7a4(4);
    func_ov000_0215bf3c(1);

    if (p1 != 0) {
        func_ov000_0215c660(p0, p1, p2, (uint8_t)(p3 - 1), (void *)func_ov000_0215b9ac, 0, s2, s3, s4, s5, s6, s7, s8);
    } else {
        p2 = 0;
        for (i = 0; i < func_ov000_02159988(); i++) {
            buf[i] = i;
        }
        for (j = 0; j < func_ov000_02159988(); j++) {
            k = func_ov000_02159358(func_ov000_02159988() - j);
            tmp0[j] = buf[k];
            p2++;
            for (; k < func_ov000_02159988() - j - 1; k++) {
                buf[k] = buf[k + 1];
            }
        }
        func_ov000_0215c660(p0, tmp0, p2, (uint8_t)(p3 - 1), (void *)func_ov000_0215b9ac, 0, s2, s3, s4, s5, s6, s7, s8);
    }
    return 1;
}
