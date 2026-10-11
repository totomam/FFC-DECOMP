#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Blob;

extern Blob data_ov000_02170064;
extern uint32_t func_ov000_0215b4b0(void);
extern int func_ov000_02163690(uint32_t x);

int func_ov000_0215b560(uint32_t p) {
    if (data_ov000_02170064.b == 0) {
        return 0;
    }
    if (p == func_ov000_0215b4b0()) {
        return 0;
    }
    if (func_ov000_02163690(p) != 0) {
        return 1;
    }
    return 0;
}
