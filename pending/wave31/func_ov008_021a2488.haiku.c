#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov005_02196144(void *a, uint32_t b);
extern void func_ov008_021a25cc(void *p);
extern void func_ov008_021a2614(void *p);
extern void func_ov008_021a2450(void *p);
extern void func_02069724(Pair *out, void *p);
extern void func_02069828(void *p, Pair v);

int func_ov008_021a2488(uint8_t *p) {
    Pair local;
    uint64_t r;

    r = func_0209a76c(p[0x131] + 1, p[0x130] + 1);
    p[0x131] = (uint8_t)(r >> 32);
    func_ov005_02196144(*(void **)(p + 0x120), (uint8_t)(p[0x131] + 1));
    func_ov008_021a25cc(p);
    func_ov008_021a2614(p);
    func_ov008_021a2450(p);
    func_02069724(&local, p);
    func_02069828(p, local);
    return 1;
}
