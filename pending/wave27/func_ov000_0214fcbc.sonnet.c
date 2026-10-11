#include "ffc/types.h"

typedef struct { uint8_t pad[0x12c4]; void *q; int32_t n; } S;

extern void *func_02088978(void);
extern S *func_ov000_0214fa54(void *p);
extern void func_0208898c(void *p);
extern void func_02084b2c(void *p, int x);

void func_ov000_0214fcbc(void)
{
    void *a = func_02088978();
    S *b = func_ov000_0214fa54(a);
    if (b == 0) {
        func_0208898c(a);
        return;
    }
    {
        void *q = b->q;
        if (q) {
            int32_t n = b->n;
            if (n > 0) func_02084b2c(q, 0);
        }
    }
    func_0208898c(a);
}
