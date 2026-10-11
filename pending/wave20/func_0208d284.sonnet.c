#include "ffc/types.h"
extern int func_02088978(void);
extern void func_0208898c(int);
typedef struct { uint32_t pad[0x53]; uint32_t v; } S;
extern struct { uint32_t a; S *p; } data_02143580;
uint16_t func_0208d284(void) {
    uint32_t v;
    S *p;
    int r = func_02088978();
    p = data_02143580.p;
    if (p != 0) v = p->v; else v = 0;
    func_0208898c(r);
    return v;
}
