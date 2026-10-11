#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

extern void func_ov011_021c8900(void *p);
extern void func_ov011_021c8940(void *p);
extern void func_ov011_021c9658(void *p);
extern void func_ov011_021c908c(void *p);
extern void func_02069724(S8 *out, void *p);
extern void func_02069828(void *p, S8 v);

void func_ov011_021c88c4(void *p)
{
    S8 tmp;
    *(uint32_t *)((uint8_t *)p + 0x3ac) = 0;
    func_ov011_021c8900(p);
    func_ov011_021c8940(p);
    func_ov011_021c9658(p);
    func_ov011_021c908c(p);
    func_02069724(&tmp, p);
    func_02069828(p, tmp);
}
