#include "ffc/types.h"

extern void func_ov000_021591a8(int32_t a, int32_t b, int32_t c);

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern S data_ov000_0216e288;

void func_ov000_02153c04(void) {
    uint32_t z = 0;
    uint32_t v = data_ov000_0216e288.b;
    if (v != 0) {
        func_ov000_021591a8(1, v, 0);
        data_ov000_0216e288.b = z;
    }
    v = data_ov000_0216e288.a;
    if (v != 0) {
        func_ov000_021591a8(1, v, 0);
        data_ov000_0216e288.a = z;
    }
}
