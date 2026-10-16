/* cflags:  */
/* From arcnid/ffc-decomp src/battle/factory_a4360.c, externs renamed. */
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


/* 021A4360 (size 0x6e) — build r=F(self), g=G(...), alloc(0x28)+init a record
   with args a1..a5 (and adjusted g), then wire it in via H. NOTE: -O4,p. */
extern void* func_0203b6fc(void*);
extern void* func_0203bd04(u32, int, int, int);
extern void func_02056bc0(void*, void*);
extern void* func_0205681c(u32);
extern void* func_02055a2c(void*, void*);

void* func_ov002_021a4360(void* self, void* a1, void* a2, void* a3, void* a4, void* a5) {
    void* r; void* g; void* obj; void* h;
    r = func_0203b6fc(self);
    g = func_0203bd04(0x00010109, 0, 0, 1);
    func_02056bc0(r, g);
    obj = func_0205681c(0x28);
    if (obj) {
        if (g != 0) g = (u8*)g + 0x14;
        *(u32*)((u8*)obj + 8) = 0;
        *(u32*)((u8*)obj + 0xc) = 0x00010108;
        *(u32*)obj = 0x020abdd8;
        *(u32*)((u8*)obj + 0x10) = (u32)g;
        *(u32*)((u8*)obj + 0x14) = (u32)a1;
        *(u32*)((u8*)obj + 0x18) = (u32)a2;
        *(u32*)((u8*)obj + 0x1c) = (u32)a3;
        *(u32*)((u8*)obj + 0x20) = (u32)a4;
        *(u32*)((u8*)obj + 0x24) = (u32)a5;
    }
    self = (u8*)self + 0xf0;
    h = func_02055a2c(*(void**)self, obj);
    func_02056bc0(r, h);
    return r;
}
