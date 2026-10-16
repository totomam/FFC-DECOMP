#include "ffc/types.h"
extern uint8_t *func_ov000_0214fa54(void);
extern int func_02088978(void);
extern void func_0208898c(int);
uint8_t *func_ov000_02150268(uint16_t *out) {
    uint8_t *res = 0;
    uint16_t v = 0;
    uint8_t *p = func_ov000_0214fa54();
    int t = func_02088978();
    if (p != 0 && p[0x12de] == 9 && p[0x12dd] == 0) {
        res = p + 0x12ec;
        v = *(uint16_t *)(p + 0x12ea);
    }
    func_0208898c(t);
    if (out != 0) *out = v;
    return res;
}
