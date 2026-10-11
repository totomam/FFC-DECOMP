#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern S *data_ov000_02170060;

int func_ov000_0215aab4(void) {
    if (data_ov000_02170060 != 0 && data_ov000_02170060->b == 5) {
        return 1;
    }
    return 0;
}
