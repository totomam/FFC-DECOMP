#include "ffc/types.h"

extern void func_ov001_02180834(void);
extern uint32_t func_ov000_021655a0(void);
extern void func_ov000_02159014(uint32_t, uint32_t);

typedef struct {
    uint32_t a;
    uint32_t *b;
} DataOv000;

extern DataOv000 data_ov000_02170064;

void func_ov000_0215bf14(void)
{
    uint32_t v;
    func_ov001_02180834();
    v = func_ov000_021655a0();
    data_ov000_02170064.a = v;
    func_ov000_02159014(9, 0xfffe8515);
    *data_ov000_02170064.b = 0;
}
