#include "ffc/types.h"
extern uint8_t data_020b93e0[];
extern int32_t data_020ad5c4[];
extern void func_0208763c(void *);
extern void func_02007c34(void *);
extern void func_02087678(void *);
typedef struct { void *p; volatile uint8_t f; } G;
void func_020212a4(void *a)
{
    G g;
    g.p = data_020b93e0;
    g.f = 1;
    if (g.f) func_0208763c(g.p);
    data_020ad5c4[1] = -1;
    func_02007c34(a);
    if (g.f) func_02087678(g.p);
}
