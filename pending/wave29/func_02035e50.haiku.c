#include "ffc/types.h"

extern uint32_t func_02035dfc(void *a, void *loc);
extern void func_02035d6c(void *loc);
extern uint8_t data_020ae644[];

typedef struct {
    void *p;
    uint32_t v;
} Loc;

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t id : 10;
    uint32_t rest : 22;
} Rec;

uint32_t func_02035e50(Rec *a, Rec *b) {
    Loc loc;
    uint32_t r;
    loc.p = data_020ae644;
    loc.v = b->w4;
    r = func_02035dfc(a, &loc);
    func_02035d6c(&loc);
    if (r != 0) {
        return 0;
    }
    if (a->id == b->id) {
        return 1;
    }
    return 0;
}
