#include "ffc/types.h"
extern uint32_t data_020b93e0[];
extern void func_0208763c(void);
extern void func_02007c04(void *, int);
extern void func_02087678(void *);
typedef struct { void *p; uint8_t f; } G;
void func_020213b8(void *a) {
    volatile G g;
    g.p = data_020b93e0;
    g.f = 1;
    if (g.f != 0) func_0208763c();
    func_02007c04(a, 0);
    if (g.f != 0) func_02087678((void*)g.p);
}
