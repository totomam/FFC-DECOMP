#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Data_ov014;

extern Data_ov014 data_ov014_02155b20;
extern void func_ov014_02146ebc(void);

void func_ov014_02146f04(void) {
    if (data_ov014_02155b20.b == 0) {
        data_ov014_02155b20.b = 1;
        func_ov014_02146ebc();
    }
}
