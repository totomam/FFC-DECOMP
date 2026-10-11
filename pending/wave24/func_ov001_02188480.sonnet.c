#include "ffc/types.h"

extern void func_02086fbc(void *p);
extern void func_ov001_02188470(void *p);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t data_ov001_02195764[];
extern uint8_t data_ov001_02195780[];

void func_ov001_02188480(void) {
    func_02086fbc((void *)(data_ov001_02195764[6] + 0x9b8));
    func_ov001_02188470((void *)data_ov001_02195764[6]);
    data_ov001_02195764[6] = 0;
    func_0208763c(data_ov001_02195780);
    data_ov001_02195764[5] = 3;
    data_ov001_02195764[4] = 4;
    func_02087678(data_ov001_02195780);
}
