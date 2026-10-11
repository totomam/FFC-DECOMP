#include "ffc/types.h"

typedef struct Vt {
    char pad[0x18];
    void *(*fn)(void *);
} Vt;

extern void *func_ov000_0214d450(void *a);
extern uint32_t func_02088978(void);
extern void func_02084b2c(void *a, uint32_t b, void *c);
extern void func_ov000_0214d4c4(void *a, void *b);
extern void func_ov000_0214ec24(void *a);
extern void func_0208898c(uint32_t a);
extern Vt *data_ov000_02169a34;

void *func_ov000_0214d40c(void *a)
{
    void *r4 = func_ov000_0214d450(a);
    uint32_t r7 = func_02088978();
    void *r5 = data_ov000_02169a34->fn(r4);
    if (r5 != 0) {
        func_02084b2c(r5, 0, r4);
        func_ov000_0214d4c4(r5, a);
        func_ov000_0214ec24(r5);
    }
    func_0208898c(r7);
    return r5;
}
