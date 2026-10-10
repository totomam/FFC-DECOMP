/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct {
    char pad[0x28];
    uint32_t *p;
} S1;

struct Tmp { int a; int b; Tmp(int x) : a(x), b(x) {} ~Tmp() {} };
inline int use(const Tmp &t, int y){ return y; }

extern "C" {
void func_ov006_021a5b40(int a, int b);
void func_ov006_021b5770(void *a, void (*b)(void));
void func_ov006_021a5ebc(void);
extern void *data_ov006_021bc700;

void func_ov006_021a5e88(void *a)
{
    S1 *s = (S1 *)data_ov006_021bc700;
    uint8_t v = (uint8_t)*s->p;
    int n = use(Tmp(v), v + 0xc);

    func_ov006_021a5b40(2, n);
    if (n >= 0xc0) {
        func_ov006_021b5770(a, func_ov006_021a5ebc);
    }
}
}
