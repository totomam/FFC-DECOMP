#include "ffc/types.h"
extern uint8_t data_021394c4[], data_02139484[];
extern uint32_t data_02139450;
extern void func_0208763c(void *);
extern void func_02087678(void *);
extern void func_0202795c(void *, void *, int);
extern void func_02058048(uint32_t, uint32_t, int);
extern void func_0202a860(void *, void *, void *);
typedef struct { int x; int t; uint8_t *o; void *p; volatile uint8_t on; } G;
void func_02028a7c(int a) {
    G g;
    uint8_t *q;
    int n;
    g.p = data_021394c4;
    g.on = 1;
    if (g.on) func_0208763c(data_021394c4);
    func_0202795c(&g.o, data_02139484, a);
    q = g.o + 0xc;
    n = *(int *)(q + 0xc) - 1;
    *(int *)(q + 0xc) = n;
    if (n <= 0) {
        func_02058048(data_02139450, *(uint32_t *)(g.o + 0x1c), 0);
        func_0202a860(&g.t, data_02139484, g.o);
    }
    if (g.on) func_02087678(g.p);
}
