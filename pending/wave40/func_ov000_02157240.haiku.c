#include "ffc/types.h"

extern void func_ov000_021569f0(void);
extern void func_ov000_021556d4(void);

struct G {
    uint32_t a;
    uint8_t *obj;
};
extern struct G data_ov000_0216ff6c;

typedef void (*fn_t)(uint32_t, uint32_t, uint32_t);

void func_ov000_02157240(void)
{
    fn_t fn = *(fn_t *)(data_ov000_0216ff6c.obj + 0x110c);
    if (data_ov000_0216ff6c.a != 0) {
        func_ov000_021569f0();
        fn(0, data_ov000_0216ff6c.a, 0);
        data_ov000_0216ff6c.a = 0;
    }
    func_ov000_021556d4();
    if (data_ov000_0216ff6c.obj != 0) {
        if (*(uint32_t *)(data_ov000_0216ff6c.obj + 0x1114) != 0) {
            fn(0, *(uint32_t *)(data_ov000_0216ff6c.obj + 0x1114), 0);
            *(uint32_t *)(data_ov000_0216ff6c.obj + 0x1114) = 0;
        }
        if (*(uint32_t *)(data_ov000_0216ff6c.obj + 0x1118) != 0) {
            fn(0, *(uint32_t *)(data_ov000_0216ff6c.obj + 0x1118), 0);
            *(uint32_t *)(data_ov000_0216ff6c.obj + 0x1118) = 0;
        }
        fn(0, (uint32_t)data_ov000_0216ff6c.obj, 0);
        data_ov000_0216ff6c.obj = 0;
    }
}
