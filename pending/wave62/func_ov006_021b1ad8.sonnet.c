#include "ffc/types.h"
typedef struct { uint16_t h[8]; } S;
extern S *data_ov006_021bc7fc;
extern int func_ov006_021996e8(int a, int b);
extern int func_02088978(void);
extern void func_0208898c(int);
extern void func_ov006_0219c710(int a);
void func_ov006_021b1ad8(int n) {
    if (func_ov006_021996e8(n, 0) == 0) {
        uint16_t m = ~(1 << n);
        int o = func_02088978();
        data_ov006_021bc7fc->h[1] &= m;
        data_ov006_021bc7fc->h[2] &= m;
        data_ov006_021bc7fc->h[3] &= m;
        data_ov006_021bc7fc->h[4] &= m;
        data_ov006_021bc7fc->h[5] &= m;
        data_ov006_021bc7fc->h[6] &= m;
        func_0208898c(o);
        func_ov006_0219c710(n);
        return;
    }
    int o = func_02088978();
    {
        uint16_t m = ~(1 << n);
        data_ov006_021bc7fc->h[2] &= m;
        data_ov006_021bc7fc->h[1] &= m;
    }
    func_0208898c(o);
}
