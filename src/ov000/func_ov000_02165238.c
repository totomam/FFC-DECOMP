#include "ffc/types.h"

extern void func_ov000_0216582c(void *p);
extern void func_ov000_02165834(void *p);
extern void func_ov000_0216522c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_ov000_0216583c(void *p);
extern uint32_t data_ov000_02170a94[];
extern uint32_t data_ov000_02170a9c[];
extern uint8_t data_ov000_02170ab4[];

typedef void (*ov000_fn_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

void func_ov000_02165238(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) {
    if (data_ov000_02170a94[1] == 0) {
        data_ov000_02170a94[1] = 1;
        func_ov000_0216582c(data_ov000_02170a9c);
    }
    func_ov000_02165834(data_ov000_02170a9c);
    if ((data_ov000_02170ab4 + a * 5)[b] & c) {
        ov000_fn_t fn = (ov000_fn_t)data_ov000_02170a94[0];
        if (fn != 0) {
            fn(a, b, c, d, e);
        } else {
            func_ov000_0216522c(a, b, c, d, e);
        }
    }
    func_ov000_0216583c(data_ov000_02170a9c);
}
