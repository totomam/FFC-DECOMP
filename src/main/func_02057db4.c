/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" int func_02057db4(uint8_t *p);

struct G { void *m; int pad; G(void *x) : m(x) { func_0208763c(x); } ~G() { func_02087678(m); } };

extern "C" int func_02057db4(uint8_t *p)
{
    G g(p + 0x20);
    int r;
    if (*(int32_t *)(p + 0x14)) r = 0; else r = 1;
    return r;
}
