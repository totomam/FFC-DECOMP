#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *p;
    uint8_t flag;
} Loc;

extern uint8_t data_0213e1e0[];
extern uint8_t data_0213e1a4[];
extern void func_0208763c(void);
extern uint32_t func_02056830(uint32_t x);
extern void func_02087678(void *p);
extern uint32_t func_0209a978(uint32_t x, uint32_t y);
extern uint32_t *func_0204f374(void *base, Loc *l);

uint32_t func_02071c50(uint32_t unused, uint32_t x, uint32_t y) {
    Loc s;
    uint32_t r;
    uint32_t res;
    s.p = data_0213e1e0;
    s.flag = 1;
    if (s.flag != 0) {
        func_0208763c();
    }
    r = func_02056830(x + y);
    if (r == 0) {
        if (s.flag != 0) {
            func_02087678(s.p);
        }
        return 0;
    }
    s.a = y * func_0209a978(r + y - 1, y);
    {
        uint32_t *q = func_0204f374(data_0213e1a4, &s);
        q[1] = r;
    }
    res = s.a;
    if (s.flag != 0) {
        func_02087678(s.p);
    }
    return res;
}
