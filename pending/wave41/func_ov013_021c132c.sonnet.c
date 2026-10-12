/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern int func_ov013_021c1160(void *p);
extern void func_ov013_021c0aac(void *p);
extern void func_ov013_021c0acc(void *p);
extern void func_ov013_021c0aec(void *p);
}
struct G { int f; void *p; G(uint8_t *s) : f(s[0x12]), p(s + 0x1c) { if (f) func_0208763c(p); } ~G() { if (f) func_02087678(p); } };
static inline int chk(uint8_t *s) { G g(s); return *(void **)(s + 0x14) == 0; }
extern "C" void func_ov013_021c132c(uint8_t *self)
{
    uint8_t *s = *(uint8_t **)(self + 0xe4);
    if (chk(s) == 0) {
        if (func_ov013_021c1160(*(void **)(self + 0xec)))
            func_ov013_021c0aac(*(void **)(self + 0xf0));
        else
            func_ov013_021c0acc(*(void **)(self + 0xf0));
        func_ov013_021c0aec(*(void **)(self + 0xf0));
    }
}
