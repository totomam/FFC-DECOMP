/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint8_t pad[0xc]; uint8_t *p; } G;
extern G data_ov000_0216e26c;
extern uint32_t func_ov000_02152ce0(void);
extern void *func_ov000_02150268(int a);
extern void func_02087874(void *a, int b);
extern int func_ov000_021545c8(void *a, void *b);
extern void func_02084b2c(void *a, int b, int c);
void func_ov000_02152ba4(void) {
    uint8_t v = data_ov000_0216e26c.p[0x22];
    void *r;
    int z = 0;
    if (v == 0) v = (uint8_t)func_ov000_02152ce0();
    data_ov000_0216e26c.p[0x17] = v;
    r = func_ov000_02150268(z);
    if (r != 0) {
        func_02087874(r, 0x20);
        if (func_ov000_021545c8(r, data_ov000_0216e26c.p + 0x18) == 0)
            func_02084b2c(data_ov000_0216e26c.p + 0x18, z, 10);
    } else {
        func_02084b2c(data_ov000_0216e26c.p + 0x18, z, 10);
    }
}
