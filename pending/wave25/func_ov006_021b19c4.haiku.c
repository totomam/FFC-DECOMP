#include "ffc/types.h"

extern void func_ov006_021b1f60(int x);
extern int func_ov006_0219c604(int x);
extern int func_ov006_021b19f4(int x);
extern void func_02088f30(void);

void func_ov006_021b19c4(int a, int b) {
    func_ov006_021b1f60(2);
    if (func_ov006_0219c604(b) != 0) {
        func_ov006_021b1f60(7);
        return;
    }
    if (func_ov006_021b19f4(a) == 0) {
        func_02088f30();
    }
}
