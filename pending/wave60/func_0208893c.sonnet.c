#include "ffc/types.h"
typedef struct { int a; int last; int count; } S;
extern S data_02141874;
extern int func_02088978(int x);
extern void func_0208898c(void);
int func_0208893c(int x) {
    S *p;
    func_02088978(x);
    p = &data_02141874;
    if (x < p->last) p->count++;
    p = &data_02141874;
    p->last = x;
    func_0208898c();
    return p->count;
}
