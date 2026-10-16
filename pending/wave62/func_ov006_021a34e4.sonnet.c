/* cflags: -noO4,p -O0 -inline auto */
#include "ffc/types.h"
extern uint8_t data_ov006_021bb170[];
extern int32_t data_ov006_021b8bc4[];
extern int32_t func_ov006_021a32b0(void);
static inline int32_t get(void) {
    if (data_ov006_021b8bc4[3] == -1) return -1;
    return data_ov006_021b8bc4[3] - func_ov006_021a32b0();
}
int32_t func_ov006_021a34e4(int32_t *p) {
    p[0] = *(int32_t *)(data_ov006_021bb170 + 0x38);
    p[1] = get();
    p[2] = *(int32_t *)(data_ov006_021bb170 + 0x78);
    return 1;
}
