/* Force-included in host builds of src/ (port/). Maps CodeWarrior-isms to clang. */
#ifndef FFC_CW_COMPAT_H
#define FFC_CW_COMPAT_H
#define FFC_HOST 1
#ifdef __cplusplus
/* Opaque pointer: stops clang devirtualizing obj.method() calls (port_configure MEMBER_CALL_RE). */
template<class T> static inline T *ffc_opaque(T *p) { T *volatile q = p; return q; }
#endif
#endif
