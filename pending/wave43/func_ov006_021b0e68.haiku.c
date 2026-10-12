#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x13b8];
    volatile uint16_t f13b8;
    uint8_t pad1[0x1b90 - 0x13b8 - 2];
    uint32_t f1b90;
    volatile uint8_t f1b94;
} S;

extern S *data_ov006_021bc7f4;
extern void func_0208d3e4(void *p);
extern int func_0208d8c8(void (*f)(void));
extern int func_0208d8ec(void (*f)(void));
extern void func_ov006_021b0f08(void);
extern void func_ov006_021b578c(int x);
extern void func_ov006_021b49fc(S **pp);

int func_ov006_021b0e68(void) {
    data_ov006_021bc7f4->f1b94 = 1;
    func_0208d3e4(&data_ov006_021bc7f4->f13b8);
    if (data_ov006_021bc7f4->f13b8 != 2) {
        if (func_0208d8c8(func_ov006_021b0f08) != 2) {
            return 0;
        }
        do {
            func_0208d3e4(&data_ov006_021bc7f4->f13b8);
        } while (data_ov006_021bc7f4->f13b8 != 2);
    }
    if (func_0208d8ec(func_ov006_021b0f08) != 2) {
        return 0;
    }
    if (data_ov006_021bc7f4->f1b90 != 0) {
        func_ov006_021b578c(0);
    }
    while (data_ov006_021bc7f4->f1b94 != 2) {
    }
    func_ov006_021b49fc(&data_ov006_021bc7f4);
    return 1;
}
