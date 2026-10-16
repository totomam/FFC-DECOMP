/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern void func_ov001_021870e8(uint32_t a, uint32_t b);
void func_ov001_02187114(uint32_t a, uint32_t b){
    uint32_t t = (((b>>8)&0xff00u)|(b>>24)|((b<<8)&0xff0000u)) | ((b<<24)&0xff000000u);
    uint32_t u = ((t<<24)|0) | ((t&0xff00u)<<8) | ((t&0xff0000u)>>8) | ((t&0xff000000u)>>24);
    func_ov001_021870e8(a, u);
}
