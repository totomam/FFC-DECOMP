/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint32_t data_ov006_021bb170[];
extern int32_t data_ov006_021b8bc4[];
extern int32_t func_ov006_021a32b0(void);
int func_ov006_021a34e4(int32_t *p);
}
struct G { int v; G(int x) : v(x) {} ~G() {} };
inline int32_t sub(const G &a, int32_t b) { return a.v - b; }
int func_ov006_021a34e4(int32_t *p)
{
    p[0] = data_ov006_021bb170[14];
    if (data_ov006_021b8bc4[3] == -1) {
        p[1] = -1;
    } else {
        p[1] = sub(data_ov006_021b8bc4[3], func_ov006_021a32b0());
    }
    p[2] = data_ov006_021bb170[30];
    return 1;
}
