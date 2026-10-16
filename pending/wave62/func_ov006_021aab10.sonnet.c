#include "ffc/types.h"
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b51a8(int);
extern void func_ov006_021b4488(int);
extern void func_ov006_021a3b88(void*, void*);
extern void func_ov006_021b4734(int, int);
extern void func_ov006_021a6508(int*, int);
extern void func_ov006_021a64d4(int, int);
extern void func_ov006_021a64fc(int, int);
extern void func_ov006_021a64c8(void*);
extern void func_ov006_021b49fc(void*);
extern int *data_ov006_021bc784[];
extern char data_ov006_021b95bc[];
extern void func_0208243c(void);
extern void func_ov006_021ab254(void);
void func_ov006_021aab10(void) {
    int x;
    func_ov006_021a3b28();
    func_ov006_021b51a8(((int**)data_ov006_021bc784)[0][1]);
    func_ov006_021b4488(0);
    func_ov006_021a3b88(data_ov006_021b95bc, (void*)func_0208243c);
    func_ov006_021b4734(1, 1);
    func_ov006_021b4734(0, 0x15);
    func_ov006_021a6508(&x, 0);
    if (x >= 3) x++;
    func_ov006_021a64d4(2, 1);
    func_ov006_021a64fc(0, x + 3);
    func_ov006_021a64c8((void*)func_ov006_021ab254);
    func_ov006_021b49fc(data_ov006_021bc784);
}
