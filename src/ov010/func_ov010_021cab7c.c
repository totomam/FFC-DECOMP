#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov009_021ada58(void *p);
extern void func_ov005_02196144(uint32_t v, uint8_t n);
extern void func_02069724(Pair *out, void *p);
extern void func_02069828(void *p, Pair s);

void func_ov010_021cab7c(void *param0)
{
    uint8_t *p = (uint8_t *)param0;
    Pair local;

    func_ov009_021ada58(p);
    func_ov005_02196144(*(uint32_t *)(p + 0x16c), (uint8_t)(p[0x27d] + 1));
    func_02069724(&local, p);
    func_02069828(p, local);
}
