#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_ov008_021a0600(uint8_t *p);
extern void func_ov005_02196144(void *q, uint8_t v);
extern void func_ov008_021a066c(uint8_t *p);
extern void func_02069724(Pair *out, uint8_t *p);
extern void func_02069828(uint8_t *p, Pair v);

int func_ov008_021a0554(uint8_t *p) {
    Pair t;
    uint32_t k = 1 << 8;
    uint8_t x = p[k];
    uint8_t y = p[k + 1];
    if (x == y) {
        p[k] = 0;
    } else {
        p[k] = x + 1;
    }
    func_ov008_021a0600(p);
    func_ov005_02196144(*(void **)(p + 0xe8), (uint8_t)(p[k] + 1));
    func_ov008_021a066c(p);
    func_02069724(&t, p);
    func_02069828(p, t);
    return 1;
}
