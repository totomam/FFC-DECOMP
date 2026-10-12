#include "ffc/types.h"

extern void *func_02084b2c(void *, int, uint32_t);
extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_02087024(uint32_t);
extern void func_02086e94(void);
extern uint8_t data_021442c8[];
extern uint32_t data_021442a8;

typedef uint32_t (*cb_t)(void *);
typedef struct {
    cb_t cb0;
    cb_t cb1;
    uint32_t res;
    uint32_t rest[6];
} Msg;

void func_0208f004(uint8_t *p)
{
    Msg m;
    uint32_t t;
    uint32_t h;
    cb_t c1;

    for (;;) {
        func_02084b2c(&m, 0, 0x24);
        t = func_02088978();
        if (*(volatile uint32_t *)(p + 0xc0) == 0) {
            do {
                func_02087024(0);
            } while (*(volatile uint32_t *)(p + 0xc0) == 0);
        }
        m = *(Msg *)(*(uint32_t *)(p + 0xc0));
        func_0208898c(t);
        if (m.cb0 != 0) {
            m.res = m.cb0(&m);
        }
        h = func_02088978();
        c1 = m.cb1;
        data_021442c8[6] = 0;
        if (c1 != 0) {
            c1(&m);
        }
        if (data_021442a8 == 0) {
            break;
        }
        *(uint32_t *)(p + 0xc0) = 0;
        func_0208898c(h);
    }
    func_02086e94();
}
