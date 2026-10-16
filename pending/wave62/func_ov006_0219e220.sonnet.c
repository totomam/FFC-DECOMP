#include "ffc/types.h"
extern uint8_t data_ov006_021b8b8c[];
extern int func_ov006_0219f090(void *p);
extern void func_ov006_0219ed94(void *a, int b, void *c, int d);
extern int func_ov006_0219ef3c(void *a, void *b, int c);
extern int func_ov006_0219f078(int a);
int func_ov006_0219e220(uint8_t *a, uint8_t *b) {
    int r = 0;
    int t = func_ov006_0219f090(data_ov006_021b8b8c);
    func_ov006_0219ed94(b, 8, data_ov006_021b8b8c, t);
    if (func_ov006_0219ef3c(a, b, 6) != 0) {
        r -= 1;
    } else {
        int x = func_ov006_0219f078(*(uint16_t *)(a + 6));
        int y = func_ov006_0219f078(*(uint16_t *)(b + 6));
        if (x + 1 != y) r -= 2;
    }
    return r;
}
