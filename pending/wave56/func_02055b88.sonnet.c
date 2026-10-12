/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint8_t v; } Flag;
extern "C" void func_02087678(void *p);
struct G { void *p; G(void*x):p(x){} ~G(){ func_02087678(p);} };

extern "C" void func_0208763c(void *self, void *other);
extern "C" void *func_020487a0(void *container, void *position, Flag f);
extern "C" void func_02055b88(uint8_t *a, uint8_t *b)
{
    uint32_t *end;
    uint32_t *it;
    uint32_t go;
    Flag f;
    G g(a);
    void *lk = a + 0x10;

    g.p = lk;
    func_0208763c(lk, b);

    it = *(uint32_t **)(a + 4);
    end = it + *(uint32_t *)(a + 8);
    goto t1;
l1:
    it++;
t1:
    go = 0;
    if (it != end) {
        if (*it != (uint32_t)b) {
            go = 1;
        }
    }
    if (go) goto l1;
    f.v = 0;
    func_020487a0(a + 4, it, f);

    {
    uint32_t **c2 = (uint32_t **)(b + 0x10);
    it = c2[0];
    end = it + ((uint32_t *)c2)[1];
    }
    goto t2;
l2:
    it++;
t2:
    go = 0;
    if (it != end) {
        if (*it != (uint32_t)a) {
            go = 1;
        }
    }
    if (go) goto l2;
    f.v = 0;
    func_020487a0(b + 0x10, it, f);

}
