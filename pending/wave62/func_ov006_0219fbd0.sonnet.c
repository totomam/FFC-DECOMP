/* cflags: -O4,p -opt noloop,nocse */
#include "ffc/types.h"
extern int func_02088978(void);
extern void func_0208898c(int);
extern int func_ov000_0214f588(void);
extern int func_ov006_0219f9c0(void);
extern struct { int a[6]; int s; } data_ov006_021bb120;
int func_ov006_0219fbd0(void) {
    int r = func_02088978();
    if (data_ov006_021bb120.s == 3) {
        if (func_ov000_0214f588() != 3) { func_0208898c(r); return 0; }
        data_ov006_021bb120.s = 2;
        func_0208898c(r);
        return 1;
    }
    if (func_ov006_0219f9c0() == 1) {
        data_ov006_021bb120.s = 2;
        func_0208898c(r);
        return 1;
    }
    func_0208898c(r);
    return 0;
}
