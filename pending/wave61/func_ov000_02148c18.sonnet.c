#include "ffc/types.h"
extern void func_02085a68(void);
extern void func_02087874(void *p, int n);
extern int func_ov000_02148e2c(int a, int b, void *c);
extern int data_ov000_02169800;
extern uint8_t data_ov000_0216de40[];
extern uint8_t data_ov000_0216de20;
extern uint16_t data_ov000_0216de60[];
int func_ov000_02148c18(void)
{
    int r = 0;
    int m = -1;
    int n = 0x20;
    if (data_ov000_02169800 != m) return 0;
    func_02085a68();
    func_02087874(data_ov000_0216de40, 0x20);
    if (func_ov000_02148e2c(0x1fe, 0x20, data_ov000_0216de40) == 0) {
        data_ov000_0216de20 = data_ov000_0216de40[0];
        func_02087874(data_ov000_0216de60, n);
        if (func_ov000_02148e2c(n, n, data_ov000_0216de60) == 0) {
            data_ov000_02169800 = data_ov000_0216de60[0] * 8 - (n << 5);
            return r;
        }
    }
    return m;
}
