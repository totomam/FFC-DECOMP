#include "ffc/types.h"

extern void func_ov000_02165474(int32_t a, int32_t b);
extern void func_ov000_02165428(int32_t a);
extern void func_ov001_0217f940(void);
extern void func_ov000_021653f4(void);
extern int32_t data_ov001_021918a4[];
extern int32_t data_ov001_02194c38[];

void func_ov001_0217f344(void)
{
    if (data_ov001_021918a4[1] != -1) {
        func_ov000_02165474(data_ov001_021918a4[1], 2);
        func_ov000_02165428(data_ov001_021918a4[1]);
    }
    data_ov001_021918a4[1] = -1;
    func_ov001_0217f940();
    if (data_ov001_02194c38[10] != 0) {
        func_ov000_021653f4();
        data_ov001_02194c38[10] = 0;
        data_ov001_02194c38[6] = 0;
        data_ov001_02194c38[2] = 0;
    }
}
