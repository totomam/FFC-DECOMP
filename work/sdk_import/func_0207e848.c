/* From libntr libntr/libraries/fs/src/fs_file.c (thumb build): func_0207e848 */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
static inline BOOL FSi_IsSlash(u32 c) { return (c == '/') || (c == '\\'); }
int func_0207e7e4(const char *str, int pos);
int func_0207e848(const char *str, int pos);
int func_0207e7e4(const char *str, int pos);
int func_0207e848(const char *str, int pos) {
for (;;) {
pos = func_0207e7e4(str, pos);
if ((pos < 0) || FSi_IsSlash((u8)str[pos])) {
break;
}
}
return pos;
}
