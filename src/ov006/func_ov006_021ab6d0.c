#include "ffc/types.h"

extern void func_ov006_021afd28(void);
extern int func_ov006_021ac1ec(void);
extern int func_ov006_021abea4(void);
extern void func_ov006_021b0600(int);
extern void func_ov006_021ac5d4(int);
extern void func_ov006_021ac7d4(void);
extern void func_ov006_021ab72c(int);

int func_ov006_021ab6d0(void) {
    int r4;
    func_ov006_021afd28();
    r4 = func_ov006_021ac1ec();
    if (r4 == 0xe) {
        return 0;
    }
    if (func_ov006_021abea4() == 0) {
        func_ov006_021b0600(9);
        return 1;
    }
    func_ov006_021ac5d4(r4);
    switch (r4) {
    case 2:
    case 3:
    case 7:
    case 8:
        func_ov006_021ac7d4();
        break;
    default:
        break;
    }
    func_ov006_021ab72c(r4);
    return 1;
}
