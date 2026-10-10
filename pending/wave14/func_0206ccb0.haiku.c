#include "ffc/types.h"

extern uint8_t *data_0213e178;
extern void func_0206c22c(uint8_t *p);

void func_0206ccb0(void) {
    *(uint32_t *)(data_0213e178 + 0x30b0) = 1;
    data_0213e178[0x30b4] = 1;
    func_0206c22c(data_0213e178 + 0x3d);
}
