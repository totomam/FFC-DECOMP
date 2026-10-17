/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/realloc_slot_21b1680.c, externs renamed. */
/* 021B1680 (size 0x58) - matched with -O4
 * Clears the current sub-object's status, releases the slot, allocates a
 * fresh 0x94 object (pointing at either heap or inline data by a bitflag),
 * stores it back, notifies, and marks status=2. */
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


typedef struct { u32 flag : 1; } Bits1680;

extern void* func_0205681c(u32 sz);
extern void* func_ov002_021ad8e0(void* p, void* a1, u32 a2, u32 a3);
extern void func_ov002_021b0ce0(void* p, s32 one);

void func_ov002_021b1680(void* s)
{
    void* obj = *(*(void***)((u8*)s + 0x14));
    *(u32*)((u8*)obj + 0xc) = (*(u32*)((u8*)obj + 0xc) & ~0xff) | 2;
    *(*(void***)((u8*)s + 0x14)) = 0;
    {
        void* p = func_0205681c(0x94);
        if (p != 0) {
            void* arg1;
            if (((Bits1680*)((u8*)s + 0x1c))->flag == 0)
                arg1 = (u8*)((Bits1680*)((u8*)s + 0x1c)) + 1;
            else
                arg1 = *(void**)((u8*)s + 0x24);
            p = func_ov002_021ad8e0(p, arg1, *(u32*)((u8*)s + 0x28), *(u32*)((u8*)s + 0x2c));
        }
        *(*(void***)((u8*)s + 0x14)) = p;
    }
    func_ov002_021b0ce0(*(void**)((u8*)s + 0x18), 1);
    *(u32*)((u8*)s + 0xc) = (*(u32*)((u8*)s + 0xc) & ~0xff) | 2;
}
