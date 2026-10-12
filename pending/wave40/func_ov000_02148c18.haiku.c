#include "ffc/types.h"

extern void func_02085a68(void);
extern void func_02087874(void *p, uint32_t n);
extern int func_ov000_02148e2c(uint32_t a, uint32_t n, void *buf);
extern int32_t data_ov000_02169800;
extern uint8_t data_ov000_0216de40[];
extern uint8_t data_ov000_0216de20[];
extern uint8_t data_ov000_0216de60[];

int func_ov000_02148c18(void)
{
    int32_t m = ~0;
    int ret;
    uint32_t sz = 0x20;
    if (data_ov000_02169800 != m) {
        return 0;
    }
    func_02085a68();
    ret = 0;
    func_02087874(data_ov000_0216de40, sz);
    if (func_ov000_02148e2c(0x1fe, sz, data_ov000_0216de40) != 0) {
        ret = m;
    } else {
        data_ov000_0216de20[0] = data_ov000_0216de40[0];
        func_02087874(data_ov000_0216de60, sz);
        if (func_ov000_02148e2c(sz, sz, data_ov000_0216de60) != 0) {
            ret = m;
        } else {
            data_ov000_02169800 = (int32_t)((*(uint16_t *)data_ov000_0216de60 << 3) - (sz << 5));
        }
    }
    return ret;
}
