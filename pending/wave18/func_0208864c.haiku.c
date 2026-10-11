#include "ffc/types.h"

typedef struct {
    uint16_t flag;
    uint16_t pad;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} S0208864C;

extern S0208864C data_02141874;
extern void func_02086700(uint32_t arg);

void func_0208864c(void)
{
    if (data_02141874.flag != 0) {
        return;
    }
    data_02141874.flag = 1;
    data_02141874.fc = 0;
    data_02141874.f10 = 0;
    func_02086700(4);
    data_02141874.f8 = 0;
    data_02141874.f4 = 0;
}
