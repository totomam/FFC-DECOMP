#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e0;
extern void func_0208d3e4(void *p);
extern uint32_t func_0208d8c8(void (*f)(void));
extern uint32_t func_0208d8ec(void (*f)(void));
extern void func_ov006_021afb78(void);

uint32_t func_ov006_021afadc(void) {
    data_ov006_021bc7e0[0x1e5c] = 1;
    func_0208d3e4(data_ov006_021bc7e0 + 0x168c);
    if (*(uint16_t *)(data_ov006_021bc7e0 + 0x168c) != 2) {
        if (func_0208d8c8(func_ov006_021afb78) != 2) {
            return 0;
        }
        do {
            func_0208d3e4(data_ov006_021bc7e0 + 0x168c);
        } while (*(uint16_t *)(data_ov006_021bc7e0 + 0x168c) != 2);
    }
    if (func_0208d8ec(func_ov006_021afb78) != 2) {
        return 0;
    }
    return 1;
}
