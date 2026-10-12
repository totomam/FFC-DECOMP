#include "ffc/types.h"

typedef struct {
    uint32_t *w;
    uint32_t n;
    uint32_t m;
} BS;

typedef struct {
    uint8_t pad[0x28];
    uint32_t *list;
    uint32_t count;
    uint8_t pad2[6];
    uint8_t f36;
    uint8_t f37;
} Entry;

extern void func_ov004_021522e8(BS *s, uint32_t v, uint32_t z);
extern void func_02065874(BS *s);

int func_ov004_02150684(uint8_t *a, uint32_t b)
{
    BS P, Q;
    uint32_t cnt = 0;
    uint32_t i, j, k, changed;
    Entry *base;

    P.w = (uint32_t *)cnt;
    P.n = cnt;
    P.m = cnt;
    func_ov004_021522e8(&P, *(uint32_t *)(a + 0x110), 0);

    Q.w = (uint32_t *)cnt;
    Q.n = cnt;
    Q.m = cnt;
    func_ov004_021522e8(&Q, *(uint32_t *)(a + 0x110), 0);

    Q.w[b >> 5] |= 1u << (b & 31);

    do {
        changed = 0;
        for (i = 0; i < Q.n; i++) {
            if (P.w[i >> 5] & (1u << (i & 31))) {
                continue;
            }
            if (!(Q.w[i >> 5] & (1u << (i & 31)))) {
                continue;
            }
            base = *(Entry **)(a + 0x10C);
            if ((base + i)->f37) {
                cnt++;
            }
            for (j = 0; j < (*(Entry **)(a + 0x10C) + i)->count; j++) {
                base = *(Entry **)(a + 0x10C);
                k = (base + i)->list[j];
                if ((base + k)->f36) {
                    Q.w[k >> 5] |= 1u << (k & 31);
                }
            }
            P.w[i >> 5] |= 1u << (i & 31);
            changed = 1;
        }
    } while (changed);

    func_02065874(&Q);
    func_02065874(&P);

    if (cnt >= 2) {
        return 1;
    }
    return 0;
}
