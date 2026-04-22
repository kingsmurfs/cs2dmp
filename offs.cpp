#pragma once
#include <cstdint>
#include <cstddef>

namespace Offsets
{
    // -> offsets.h on a2x dumper (verified from main.cpp working version)
    constexpr uintptr_t dwEntityList       = 0x24CED50;    // Verified working offset
    constexpr uintptr_t dwLocalPlayerPawn  = 0x20547A0;    // Verified working offset
    constexpr uintptr_t dwViewMatrix       = 0x232EAC0;    // Verified working offset
   
    // -> client.dll.hpp on a2x dumper -> C_BaseEntity
    constexpr uintptr_t m_iHealth          = 0x34C;        // 852
    constexpr uintptr_t m_iTeamNum         = 0x3EB;        // 1011
    constexpr uintptr_t m_vOldOrigin       = 0x1390;       // 5512
    constexpr uintptr_t m_pGameSceneNode   = 0x330;        // 824
    constexpr std::ptrdiff_t m_hPawn              = 0x6BC;     // CBasePlayerController

    // -> CbaseModelEntity
    constexpr uintptr_t m_vecViewOffset    = 0xE70;        // 3416

    // -> C_CSPlayerPawn
    constexpr uintptr_t m_iShotsFired      = 0x1C9C;       // 9996
    constexpr uintptr_t m_aimPunchAngle    = 0x14D4;       // 5836
    constexpr uintptr_t m_entitySpottedState = 0x1C70;     // 9952
    
    // -> EntitySpottedState_t
    constexpr uintptr_t m_bSpotted         = 0x8;          // 8

    // -> C_CSPlayerController
    constexpr uintptr_t m_iszPlayerName    = 0x6F0;        // 1784
    constexpr uintptr_t m_hPlayerPawn      = 0x904;        // 2316
    constexpr uintptr_t m_bPawnIsAlive     = 0x90C;        // 2324

    // -> CGameSceneNode
    constexpr uintptr_t m_modelState       = 0x150;        // 352

    // -> New Offsets (Update these for Weapon/Armor indicator to work)
    constexpr uintptr_t m_ArmorValue       = 0x1CB4;       // C_CSPlayerPawn -> m_ArmorValue
    constexpr uintptr_t m_pClippingWeapon  = 0x3DC0;       // C_CSPlayerPawn -> m_pClippingWeapon
    constexpr uintptr_t m_AttributeManager = 0x13B8;       // C_EconEntity -> m_AttributeManager (FIXED!)
    constexpr uintptr_t m_Item             = 0x50;         // C_AttributeContainer -> m_Item
    constexpr uintptr_t m_iItemDefinitionIndex = 0x1BA;    // C_EconItemView -> m_iItemDefinitionIndex

    constexpr uintptr_t m_hActiveWeapon = 0x60; // CHandle<C_BasePlayerWeapon>
    constexpr uintptr_t m_hLastWeapon = 0x64; // CHandle<C_BasePlayerWeapon>
    constexpr uintptr_t m_iAmmo = 0x68; // uint16[32]
    constexpr uintptr_t m_pAimPunchServices  = 0x1490;
    
    constexpr uintptr_t m_bIsDefusing      = 0x1C8A;       // C_CSPlayerPawn -> m_bIsDefusing
    constexpr uintptr_t m_bIsScoped        = 0x1C88;       // C_CSPlayerPawn -> m_bIsScoped
    constexpr uintptr_t m_flFlashOverlayAlpha  = 0x13F4;       // C_CSPlayerPawn -> m_flFlashOverlayAlpha

    constexpr uintptr_t m_weaponMode = 0x17B8; // CSWeaponMode
    constexpr uintptr_t m_flRecoilIndex = 0x17E0; // float32

    constexpr uintptr_t m_fFlags = 0x3F8 // uint32
    constexpr uintptr_t m_iIDEntIndex = 0x341C; // CEntityIndex
    constexpr uintptr_t m_vecVelocity = 0x430;

    constexpr unitptr_t m_hObserverPawn = 0x908; // CHandle<C_CSObserverPawn>
    constexpr uintptr_t m_pObserverServices = 0x11F8; // CPlayer_ObserverServices*
    constexpr uintptr_t m_hObserverTarget = 0x4C; // CHandle<C_BaseEntity>
    constexpr uintptr_t m_iObserverMode = 0x48; // uint8

    constexpr uintptr_t m_hMyWeapons = 0x48; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
}

