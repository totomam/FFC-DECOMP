#include "ffc/types.h"
extern void func_02088978(void);
extern void func_0208898c(void);
extern struct { uint8_t pad[0x68]; int32_t head; int32_t tail; } data_ov006_021bb170;
extern uint32_t data_ov006_021bb1f4[];
uint32_t func_ov006_021a0460(void) {
    uint32_t r;
    func_02088978();
    if (data_ov006_021bb170.head == data_ov006_021bb170.tail) {
        r = 0;
    } else {
        int32_t t = data_ov006_021bb170.tail;
        r = data_ov006_021bb1f4[t];
        t++;
        data_ov006_021bb170.tail = t;
        if (t >= 4) data_ov006_021bb170.tail = 0;
    }
    func_0208898c();
    return r;
}
