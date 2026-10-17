/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/dtor_vtbl_mgr_notify_021BD82C.c, externs renamed. */
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

/* Matched 021BD82C (size 0x3C, -O4). Multi-function unit:
   021BD82C: dtor — set vtable, H(*(*(GetMgr(self)+0x18)+0x18), *(self+0x88)), I(self), J(self); return self.
   GetMgr MUST take self as arg: keeps r0=s live so the vtable literal schedules into r1 first.
   021BD85C: tail-thunk — Next(p, 0, 0). */
extern u32 data_ov002_021d6c14[];
extern u8* func_02056dd4(void* s);
extern void func_0205ffd0(u32 a, u32 b);
extern void func_02056db0(void* s);
extern void func_02056844(void* s);

void* func_ov002_021bd82c(void* s) {
    *(u32*)s = (u32)data_ov002_021d6c14;
    func_0205ffd0(*(u32*)(*(u32*)((u8*)func_02056dd4(s) + 0x18) + 0x18), *(u32*)((u8*)s + 0x88));
    func_02056db0(s);
    func_02056844(s);
    return s;
}

extern void Next_021BD868(void* p, u32 a, u32 b);

static void f_021BD85C(void* p) {
    Next_021BD868(p, 0, 0);
}
