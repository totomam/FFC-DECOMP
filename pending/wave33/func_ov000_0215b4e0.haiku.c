#include "ffc/types.h"

extern uint32_t data_ov000_02170064[];
extern uint8_t data_ov000_0217006c[];
extern int func_ov000_0215bf78(uint32_t v);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern int func_ov000_02163408(void);
extern void *func_ov000_02163634(int i);

int func_ov000_0215b4e0(void **out)
{
    int i;

    if (data_ov000_02170064[1] == 0 || func_ov000_0215bf78(data_ov000_02170064[1]) == 0) {
        return 0;
    }
    func_02084b2c(data_ov000_0217006c, 0, 0x20);
    if (func_ov000_02163408() > 0) {
        i = 0;
        do {
            data_ov000_0217006c[i] = ((uint8_t *)func_ov000_02163634(i))[0x16];
            i++;
        } while (i < func_ov000_02163408());
    }
    *out = data_ov000_0217006c;
    return func_ov000_02163408();
}
