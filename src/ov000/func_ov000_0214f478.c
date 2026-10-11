#include "ffc/types.h"

extern int func_02088978(void);
extern void func_0208898c(int);
typedef struct { uint8_t pad[0x12de]; uint8_t f; } S;
typedef struct { uint32_t a; S *p; } D;
extern D data_ov000_0216e214;

int func_ov000_0214f478(void)
{
    S *s;
    int x = func_02088978();

    s = data_ov000_0216e214.p;
    if (s == 0) {
        func_0208898c(x);
        return 1;
    }
    if (s->f != 1) {
        func_0208898c(x);
        return 1;
    }
    data_ov000_0216e214.p = 0;
    func_0208898c(x);
    return 0;
}
