#include "ffc/types.h"
void func_02078fb8(uint16_t *dst, int w, int h, int stride, uint32_t v, uint32_t hi){int i,j; uint32_t top=(hi<<28)>>16; for(i=0;i<h;i++){uint16_t*q=dst; for(j=0;j<w;j++){*q=v|top;v++;q++;} dst+=stride;}}
