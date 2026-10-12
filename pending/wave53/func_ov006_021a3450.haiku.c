#include "ffc/types.h"

typedef struct {
    uint32_t w0, w4, w8;
    void (*fn0c)(void);
    uint32_t w10;
    uint32_t pad14[7];
    void (*fn30)(void);
    int w34;
    int w38;
    uint32_t pad3c[10];
    int w64;
    uint32_t pad68[3];
    int w74;
} Obj;

extern Obj data_ov006_021bb170;
extern uint32_t data_ov006_021bb21c;

extern void func_020871d8(int v);
extern int func_02086fe4(void *object);
extern void func_020870a0(void *object);
extern void func_02086fbc(void *object);
extern void func_ov006_021a3530(void);
extern int func_ov006_021a0578(void);

int func_ov006_021a3450(void)
{
    if (data_ov006_021bb170.w64 != 0) {
        int r6 = data_ov006_021bb170.w38;
        data_ov006_021bb170.w10 = 1;
        while (data_ov006_021bb170.w38 >= 1 && data_ov006_021bb170.w38 <= 5) {
            func_020871d8(100);
        }
        func_020871d8(500);
        while (func_02086fe4(&data_ov006_021bb21c) == 0) {
            func_020870a0(&data_ov006_021bb21c);
            func_02086fbc(&data_ov006_021bb21c);
        }
        if (data_ov006_021bb170.fn30 != 0) {
            data_ov006_021bb170.fn0c();
            data_ov006_021bb170.fn30 = 0;
        }
        data_ov006_021bb170.w64 = 0;
        if (r6 != data_ov006_021bb170.w38) {
            func_ov006_021a3530();
        }
    }
    if (data_ov006_021bb170.w74 > 0) {
        int ret = func_ov006_021a0578();
        data_ov006_021bb170.w74 = 0;
        return ret;
    }
    return -10;
}
