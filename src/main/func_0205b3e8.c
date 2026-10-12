/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint8_t data_0213e118[];
int func_0205b3e8(uint8_t *a);
}
struct Lock {
    void *p;
    int pad;
    Lock(void *x) : p(x) { func_0208763c(x); }
    ~Lock() { func_02087678(p); }
};
int func_0205b3e8(uint8_t *a)
{
    int r;
    Lock l(data_0213e118);
    if (*(uint32_t *)(a + 0xb0) == 0 && *(uint32_t *)(a + 0xc8) == 0 && *(uint32_t *)(a + 0xe0) == 0) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}
