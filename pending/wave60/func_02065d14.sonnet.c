#include "ffc/types.h"
typedef struct { int32_t w, h; } P;
typedef struct { int32_t x0, y0, x1, y1; } R;
extern void func_02065f50(void *self, P p);
extern uint32_t data_020b1794;
uint32_t *func_02065d14(uint32_t *self, uint32_t a, R r) {
    P p;
    p.w = r.x1 - r.x0;
    p.h = r.y1 - r.y0;
    func_02065f50(self, p);
    self[0] = (uint32_t)&data_020b1794;
    self[7] = a;
    self[8] = r.x0;
    self[9] = r.y0;
    self[10] = r.x1;
    self[11] = r.y1;
    return self;
}
