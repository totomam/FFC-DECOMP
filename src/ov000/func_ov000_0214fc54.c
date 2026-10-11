#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_02088548(uint8_t *p);
extern void func_020884b4(uint8_t *p, uint32_t a, uint32_t b, void (*f)(void), uint32_t c);
extern void func_0208898c(uint32_t v);
extern void func_ov000_0214fca0(void);

typedef struct {
    uint32_t a;
    uint8_t *p;
} DataOv000;

extern DataOv000 data_ov000_0216e214;

void func_ov000_0214fc54(void)
{
    uint32_t r;
    uint8_t *p;

    r = func_02088978();
    p = data_ov000_0216e214.p;
    func_02088548(p + 0x1294);
    p = data_ov000_0216e214.p;
    if (p[0x12de] == 9) {
        func_020884b4(p + 0x1294, 0x22f5341, 0, func_ov000_0214fca0, 0);
    }
    func_0208898c(r);
}
