#include "ffc/types.h"

typedef struct N { struct N *next; } N;
extern int func_02088978(void);
extern void func_0208898c(int);
extern N *data_021419a4;

int func_0208a1d8(void) {
    int n;
    int r = func_02088978();
    N *p = data_021419a4;
    n = 0;
    if (p) {
        do { p = p->next; n++; } while (p);
    }
    func_0208898c(r);
    return n;
}
