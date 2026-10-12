#include "ffc/types.h"

extern void *(*data_ov000_0216bc74)(uint32_t size);
extern void (*data_ov000_0216bca4)(void *p);
extern void func_ov000_0214cf04(uint8_t *dst, void *a, void *b, int n);
extern int func_ov000_021497f8(void);
extern void func_ov000_0214cb0c(uint8_t *base, uint8_t *a, uint8_t *b, int n, uint8_t *c);
extern void func_ov000_02149828(int v);
extern void func_ov000_0214cf3c(uint8_t *dst, uint8_t *base, int len, int n);
extern int func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);

int func_ov000_02149cd8(void *self_, int *rec)
{
    uint8_t *self = (uint8_t *)self_;
    uint8_t *base;
    uint8_t *r4;
    uint8_t *p8;
    uint8_t *p4;
    int n;
    int r7;
        int i;
    int s;

    if (*(void **)(self + 0x5a4) == 0 || *(void **)(self + 0x5a8) == 0 || rec[4] == 0 || rec[3] == 0 || rec[2] == 0 || rec[1] == 0) return 2;
    n = (rec[1] * 2) / 2;
    base = (uint8_t *)data_ov000_0216bc74(n * 8);
    if (base == 0) return 2;

    r4 = base + n * 2;
    p8 = r4 + n * 2;
    p4 = p8 + n * 2;

    func_ov000_0214cf04(r4, *(void **)(self + 0x5a4), *(void **)(self + 0x5a8), n);
    func_ov000_0214cf04(p8, (void *)rec[4], (void *)rec[3], n);
    func_ov000_0214cf04(p4, (void *)rec[2], (void *)rec[1], n);
    s = func_ov000_021497f8();
    func_ov000_0214cb0c(base, r4, p8, n, p4);
    func_ov000_02149828(s);
    func_ov000_0214cf3c(r4, base, rec[1], n);

    r7 = 0;
    if (base[n * 2] != 0 || r4[1] != 1) {
        r7 = 2;
    } else {
        i = 2;
        if (rec[1] > 2) {
            do {
                if (r4[i] != 0xff) break;
                i++;
            } while (i < rec[1]);
        }
        if (!(i + 1 < rec[1] && r4[i] == 0 && r4[i + 1] == 0x30 && func_02090410(self + 0x468, r4 + rec[1] - *(uint32_t *)(self + 0x47c), *(uint32_t *)(self + 0x47c)) == 0)) r7 = 2;
    }

    data_ov000_0216bca4(base);
    return r7;
}
