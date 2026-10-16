/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern int data_ov000_0217004c[];
extern int func_ov000_0215aab4();
extern int func_ov000_0215a638();
extern int func_ov000_021553c4(int, int);
extern int func_ov001_02175e40(int, int, int*);
extern int func_ov001_02175d6c(int, int, int);
int func_ov000_02159ec8(int a, int b) {
    int out = 0;
    int r = 0;
    int n;
    if (data_ov000_0217004c[3] != 0 && func_ov000_0215aab4() != 0) {
        n = func_ov000_021553c4(func_ov000_0215a638(), a);
        if (n > 0 && func_ov001_02175e40(((int*)data_ov000_0217004c[3])[1], n, &out) != 0) {
            return r;
        }
        if (n <= 0 || out == -1) {
            r = 0;
        } else {
            r = func_ov001_02175d6c(((int*)data_ov000_0217004c[3])[1], out, b) == 0;
        }
        return r;
    }
    return 0;
}
