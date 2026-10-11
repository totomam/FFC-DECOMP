#include "ffc/types.h"

extern void func_02088224(void);
extern void func_02086700(uint32_t);

typedef struct {
    uint16_t flag;
    uint16_t pad;
    uint32_t a;
    uint32_t b;
} S;

extern S data_02141868;

void func_020883b4(void) {
    if (data_02141868.flag == 0) {
        data_02141868.flag = 1;
        func_02088224();
        data_02141868.a = 0;
        data_02141868.b = 0;
        func_02086700(0x10);
    }
}
