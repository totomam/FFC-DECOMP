#include "ffc/types.h"

typedef struct {
    uint32_t w[3];
    uint32_t v;
} G;

extern void func_ov000_0216333c(uint32_t a, uint32_t b);
extern void func_ov000_021591a8(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_02161848(void);
extern G data_ov000_0217020c;

void func_ov000_0215e19c(uint32_t a, uint32_t b) {
    uint32_t z = 0;
    func_ov000_0216333c(0, b);
    if (data_ov000_0217020c.v != 0) {
        func_ov000_021591a8(4, data_ov000_0217020c.v, z);
        data_ov000_0217020c.v = z;
    }
    func_ov000_02161848();
}
