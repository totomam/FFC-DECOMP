#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t flag;
    uint32_t p8;
    uint32_t pc;
    uint32_t p10;
    uint32_t p14;
    uint32_t p18;
    uint32_t p1c;
} GlobalState;

extern GlobalState data_02141948;
extern void func_02088978(void);
extern void func_0208898c(void);
extern int func_02089814(void);

int func_02089374(uint32_t a, uint32_t b, uint32_t c)
{
    GlobalState *g;

    func_02088978();
    g = &data_02141948;
    if (g->flag != 0) {
        func_0208898c();
        return 1;
    }
    g->flag = 1;
    func_0208898c();
    g->p18 = 0;
    g->p1c = 0;
    g->pc = a;
    g->p8 = b;
    g->p14 = c;
    if (func_02089814() != 0) {
        return 0;
    }
    g->flag = 0;
    return 3;
}
