#include "ffc/types.h"

extern void func_ov006_0219ef6c(void *dst, int val, uint32_t size);
extern int func_ov006_0219f078(int x);
extern void func_ov006_0219ef5c(void *dst, void *src, int size);
extern void func_ov006_0219e328(void *src, int size);
extern uint32_t func_ov006_0219f050(void);
extern uint8_t data_ov006_021ba1dc[];

int func_ov006_0219e26c(uint8_t *p, uint8_t *dst)
{
    uint8_t *rec = p;
    uint8_t *d1 = dst + 0x80;
    int size;

    func_ov006_0219ef6c(dst, 0, 0x104);
    while (1) {
        size = func_ov006_0219f078(*(uint16_t *)(rec + 2));
        if (size <= 0) {
            return -1;
        }
        switch (rec[0]) {
        case 0:
            func_ov006_0219ef5c(dst, rec + 6, size);
            break;
        case 1:
            func_ov006_0219ef5c(d1, rec + 6, size);
            break;
        case 2:
            func_ov006_0219ef5c(dst + 0x100, rec + 6, size);
            break;
        case 3:
            if (func_ov006_0219f078(rec[6]) <= 0) {
                return -1;
            }
            break;
        case 4:
            func_ov006_0219e328(rec + 6, size);
            *(uint32_t *)(data_ov006_021ba1dc + 0x34) = func_ov006_0219f050();
            break;
        case 5:
            func_ov006_0219e328(rec + 6, size);
            *(uint32_t *)(data_ov006_021ba1dc + 0x38) = func_ov006_0219f050();
            break;
        case 6:
            func_ov006_0219ef5c(dst, rec + 6, size);
            break;
        default:
            return -1;
        }
        if (*(uint16_t *)(rec + 4) == 0) {
            return 0;
        }
        rec = p + func_ov006_0219f078(*(uint16_t *)(rec + 4));
    }
}
