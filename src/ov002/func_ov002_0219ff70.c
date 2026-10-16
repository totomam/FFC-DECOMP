/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/factory_ff70.c, externs renamed. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif


/* 0219FF70 (size 0x6c) — build r=F(self), make g=G(...), alloc(0x14)+init a
   record referencing g, wire via H, then build j=J() and register i,r into it. */
extern void* func_0203b6fc(void*);
extern void* func_0203bd04(u32, int, int, int);
extern void func_02056bc0(void*, void*);
extern void* func_0205681c(u32);
extern void* func_02055a2c(void*, void*);
extern void* func_0203b720(void);
extern void* func_0203b688(void);

void* func_ov002_0219ff70(void* self) {
    void* r; void* g; void* obj; void* h; void* i; void* j;
    r = func_0203b6fc(self);
    g = func_0203bd04(0x00010143, 0, 0, 1);
    func_02056bc0(r, g);
    obj = func_0205681c(0x14);
    if (obj) {
        if (g != 0) g = (u8*)g + 0x14;
        *(u32*)((u8*)obj + 8) = 0;
        *(u32*)((u8*)obj + 0xc) = 0x00010142;
        *(u32*)obj = 0x020abe18;
        *(u32*)((u8*)obj + 0x10) = (u32)g;
    }
    self = (u8*)self + 0xf0;
    h = func_02055a2c(*(void**)self, obj);
    func_02056bc0(r, h);
    i = func_0203b720();
    j = func_0203b688();
    func_02056bc0(j, i);
    func_02056bc0(j, r);
    return j;
}
