#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern uint8_t data_ov000_0216de9c[];

void func_ov000_0214976c(uint8_t *p) {
    uint32_t s = func_02088978();
    int i = 0;
    uint8_t *src = p + 0x74;
    for (; i < 4; i++) {
        uint8_t *e = data_ov000_0216de9c + i * 0x5c;
        if (e[0x5a] != 0 && func_02090410(e, src, 0x20) == 0) {
            e[0x5a] = 0;
            break;
        }
    }
    func_0208898c(s);
}
