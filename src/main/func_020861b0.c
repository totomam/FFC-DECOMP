#include "ffc/types.h"

extern void func_02085b60(uint32_t a, uint32_t b);
extern void func_02085cc4(uint32_t a, uint32_t b);
extern void func_02086040(uint32_t a, uint32_t b);
extern int32_t data_02141400;

void func_020861b0(uint32_t x, uint32_t a, uint32_t b) {
    switch (data_02141400) {
    case 1:
        func_02085b60(a, b);
        break;
    case 2:
        func_02085cc4(a, b);
        break;
    case 3:
        func_02086040(a, b);
        break;
    }
}
