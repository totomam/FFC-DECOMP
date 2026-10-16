/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint8_t pad0[0x38]; int32_t a; uint8_t pad1[0x3c]; int32_t b; } S;
typedef struct { uint8_t pad[0xc]; int32_t c; } T;
extern int32_t func_ov006_021a1530(void);
extern void func_ov006_021a06f4(void);
extern void func_ov006_021a3530(void);
extern S data_ov006_021bb170;
extern T data_ov006_021b8bc4;
void func_ov006_021a1914(void) {
    int32_t r = func_ov006_021a1530();
    data_ov006_021bb170.b = r;
    func_ov006_021a06f4();
    if (r == 1) data_ov006_021bb170.a = 6; if (r != 1) data_ov006_021bb170.a = 7;
    data_ov006_021b8bc4.c = -1;
    func_ov006_021a3530();
}
