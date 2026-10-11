#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint8_t *ptr;
} G_ov000_0216e280;

extern void func_ov000_02152eb0(void);
extern int func_ov000_02153050(void);
extern void func_ov000_021528b0(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern G_ov000_0216e280 data_ov000_0216e280;

void func_ov000_02152f20(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    func_ov000_02152eb0();
    if (data_ov000_0216e280.ptr) {
        data_ov000_0216e280.ptr[0x11] = 1;
    }
    if (func_ov000_02153050() == 2) {
        func_ov000_021528b0(a, b, c, d, e, f);
    }
}
