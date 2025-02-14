/*
 * key_sources.h
 *
 * Copyright (c) 2019-2023, shchmue.
 * Copyright (c) 2020-2024, DarkMatterCore <pabloacurielz@gmail.com>.
 *
 * This file is part of nxdumptool (https://github.com/DarkMatterCore/nxdumptool).
 *
 * nxdumptool is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * nxdumptool is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

/* Last updated on: 2024-03-31. */
/* Current key generation: NcaKeyGeneration_Since1800NUP (18 / 11). */

#pragma once

#ifndef __KEY_SOURCES_H__
#define __KEY_SOURCES_H__

#ifdef __cplusplus
extern "C" {
#endif

/* TODO: update on TSEC root key changes. */
#define TSEC_ROOT_KEY_VERSION 2

/* Used to derive all previous master keys using the latest master key on retail units. */
/* TODO: update on master key changes. */
static const u8 g_masterKeyVectorsProd[NcaKeyGeneration_Current][AES_128_KEY_SIZE] = {
    { 0x0C, 0xF0, 0x59, 0xAC, 0x85, 0xF6, 0x26, 0x65, 0xE1, 0xE9, 0x19, 0x55, 0xE6, 0xF2, 0x67, 0x3D }, ///< Zeroes encrypted with master key 00.
    { 0x29, 0x4C, 0x04, 0xC8, 0xEB, 0x10, 0xED, 0x9D, 0x51, 0x64, 0x97, 0xFB, 0xF3, 0x4D, 0x50, 0xDD }, ///< Master key 00 encrypted with master key 01.
    { 0xDE, 0xCF, 0xEB, 0xEB, 0x10, 0xAE, 0x74, 0xD8, 0xAD, 0x7C, 0xF4, 0x9E, 0x62, 0xE0, 0xE8, 0x72 }, ///< Master key 01 encrypted with master key 02.
    { 0x0A, 0x0D, 0xDF, 0x34, 0x22, 0x06, 0x6C, 0xA4, 0xE6, 0xB1, 0xEC, 0x71, 0x85, 0xCA, 0x4E, 0x07 }, ///< Master key 02 encrypted with master key 03.
    { 0x6E, 0x7D, 0x2D, 0xC3, 0x0F, 0x59, 0xC8, 0xFA, 0x87, 0xA8, 0x2E, 0xD5, 0x89, 0x5E, 0xF3, 0xE9 }, ///< Master key 03 encrypted with master key 04.
    { 0xEB, 0xF5, 0x6F, 0x83, 0x61, 0x9E, 0xF8, 0xFA, 0xE0, 0x87, 0xD7, 0xA1, 0x4E, 0x25, 0x36, 0xEE }, ///< Master key 04 encrypted with master key 05.
    { 0x1E, 0x1E, 0x22, 0xC0, 0x5A, 0x33, 0x3C, 0xB9, 0x0B, 0xA9, 0x03, 0x04, 0xBA, 0xDB, 0x07, 0x57 }, ///< Master key 05 encrypted with master key 06.
    { 0xA4, 0xD4, 0x52, 0x6F, 0xD1, 0xE4, 0x36, 0xAA, 0x9F, 0xCB, 0x61, 0x27, 0x1C, 0x67, 0x65, 0x1F }, ///< Master key 06 encrypted with master key 07.
    { 0xEA, 0x60, 0xB3, 0xEA, 0xCE, 0x8F, 0x24, 0x46, 0x7D, 0x33, 0x9C, 0xD1, 0xBC, 0x24, 0x98, 0x29 }, ///< Master key 07 encrypted with master key 08.
    { 0x4D, 0xD9, 0x98, 0x42, 0x45, 0x0D, 0xB1, 0x3C, 0x52, 0x0C, 0x9A, 0x44, 0xBB, 0xAD, 0xAF, 0x80 }, ///< Master key 08 encrypted with master key 09.
    { 0xB8, 0x96, 0x9E, 0x4A, 0x00, 0x0D, 0xD6, 0x28, 0xB3, 0xD1, 0xDB, 0x68, 0x5F, 0xFB, 0xE1, 0x2A }, ///< Master key 09 encrypted with master key 0A.
    { 0xC1, 0x8D, 0x16, 0xBB, 0x2A, 0xE4, 0x1D, 0xD4, 0xC2, 0xC1, 0xB6, 0x40, 0x94, 0x35, 0x63, 0x98 }, ///< Master key 0A encrypted with master key 0B.
    { 0xA3, 0x24, 0x65, 0x75, 0xEA, 0xCC, 0x6E, 0x8D, 0xFB, 0x5A, 0x16, 0x50, 0x74, 0xD2, 0x15, 0x06 }, ///< Master key 0B encrypted with master key 0C.
    { 0x83, 0x67, 0xAF, 0x01, 0xCF, 0x93, 0xA1, 0xAB, 0x80, 0x45, 0xF7, 0x3F, 0x72, 0xFD, 0x3B, 0x38 }, ///< Master key 0C encrypted with master key 0D.
    { 0xB1, 0x81, 0xA6, 0x0D, 0x72, 0xC7, 0xEE, 0x15, 0x21, 0xF3, 0xC0, 0xB5, 0x6B, 0x61, 0x6D, 0xE7 }, ///< Master key 0D encrypted with master key 0E.
    { 0xAF, 0x11, 0x4C, 0x67, 0x17, 0x7A, 0x52, 0x43, 0xF7, 0x70, 0x2F, 0xC7, 0xEF, 0x81, 0x72, 0x16 }, ///< Master key 0E encrypted with master key 0F.
    { 0x25, 0x12, 0x8B, 0xCB, 0xB5, 0x46, 0xA1, 0xF8, 0xE0, 0x52, 0x15, 0xB7, 0x0B, 0x57, 0x00, 0xBD }, ///< Master key 0F encrypted with master key 10.
    { 0x58, 0x15, 0xD2, 0xF6, 0x8A, 0xE8, 0x19, 0xAB, 0xFB, 0x2D, 0x52, 0x9D, 0xE7, 0x55, 0xF3, 0x93 }, ///< Master key 10 encrypted with master key 11.
};

/* Used to derive all previous master keys using the latest master key on development units. */
/* TODO: update on master key changes. */
static const u8 g_masterKeyVectorsDev[NcaKeyGeneration_Current][AES_128_KEY_SIZE] = {
    { 0x46, 0x22, 0xB4, 0x51, 0x9A, 0x7E, 0xA7, 0x7F, 0x62, 0xA1, 0x1F, 0x8F, 0xC5, 0x3A, 0xDB, 0xFE }, ///< Zeroes encrypted with master key 00.
    { 0x39, 0x33, 0xF9, 0x31, 0xBA, 0xE4, 0xA7, 0x21, 0x2C, 0xDD, 0xB7, 0xD8, 0xB4, 0x4E, 0x37, 0x23 }, ///< Master key 00 encrypted with master key 01.
    { 0x97, 0x29, 0xB0, 0x32, 0x43, 0x14, 0x8C, 0xA6, 0x85, 0xE9, 0x5A, 0x94, 0x99, 0x39, 0xAC, 0x5D }, ///< Master key 01 encrypted with master key 02.
    { 0x2C, 0xCA, 0x9C, 0x31, 0x1E, 0x07, 0xB0, 0x02, 0x97, 0x0A, 0xD8, 0x03, 0xA2, 0x76, 0x3F, 0xA3 }, ///< Master key 02 encrypted with master key 03.
    { 0x9B, 0x84, 0x76, 0x14, 0x72, 0x94, 0x52, 0xCB, 0x54, 0x92, 0x9B, 0xC4, 0x8C, 0x5B, 0x0F, 0xBA }, ///< Master key 03 encrypted with master key 04.
    { 0x78, 0xD5, 0xF1, 0x20, 0x3D, 0x16, 0xE9, 0x30, 0x32, 0x27, 0x34, 0x6F, 0xCF, 0xE0, 0x27, 0xDC }, ///< Master key 04 encrypted with master key 05.
    { 0x6F, 0xD2, 0x84, 0x1D, 0x05, 0xEC, 0x40, 0x94, 0x5F, 0x18, 0xB3, 0x81, 0x09, 0x98, 0x8D, 0x4E }, ///< Master key 05 encrypted with master key 06.
    { 0x37, 0xAF, 0xAB, 0x35, 0x79, 0x09, 0xD9, 0x48, 0x29, 0xD2, 0xDB, 0xA5, 0xA5, 0xF5, 0x30, 0x19 }, ///< Master key 06 encrypted with master key 07.
    { 0xEC, 0xE1, 0x46, 0x89, 0x37, 0xFD, 0xD2, 0x15, 0x8C, 0x3F, 0x24, 0x82, 0xEF, 0x49, 0x68, 0x04 }, ///< Master key 07 encrypted with master key 08.
    { 0x43, 0x3D, 0xC5, 0x3B, 0xEF, 0x91, 0x02, 0x21, 0x61, 0x54, 0x63, 0x8A, 0x35, 0xE7, 0xCA, 0xEE }, ///< Master key 08 encrypted with master key 09.
    { 0x6C, 0x2E, 0xCD, 0xB3, 0x34, 0x61, 0x77, 0xF5, 0xF9, 0xB1, 0xDD, 0x61, 0x98, 0x19, 0x3E, 0xD4 }, ///< Master key 09 encrypted with master key 0A.
    { 0x21, 0x88, 0x6B, 0x10, 0x9E, 0x83, 0xD6, 0x52, 0xAB, 0x08, 0xDB, 0x6D, 0x39, 0xFF, 0x1C, 0x9C }, ///< Master key 0A encrypted with master key 0B.
    { 0x8A, 0xCE, 0xC4, 0x7F, 0xBE, 0x08, 0x61, 0x88, 0xD3, 0x73, 0x64, 0x51, 0xE2, 0xB6, 0x53, 0x15 }, ///< Master key 0B encrypted with master key 0C.
    { 0x08, 0xE0, 0xF4, 0xBE, 0xAA, 0x6E, 0x5A, 0xC3, 0xA6, 0xBC, 0xFE, 0xB9, 0xE2, 0xA3, 0x24, 0x12 }, ///< Master key 0C encrypted with master key 0D.
    { 0xD6, 0x80, 0x98, 0xC0, 0xFA, 0xC7, 0x13, 0xCB, 0x93, 0xD2, 0x0B, 0x82, 0x4C, 0xA1, 0x7B, 0x8D }, ///< Master key 0D encrypted with master key 0E.
    { 0x78, 0x66, 0x19, 0xBD, 0x86, 0xE7, 0xC1, 0x09, 0x9B, 0x6F, 0x92, 0xB2, 0x58, 0x7D, 0xCF, 0x26 }, ///< Master key 0E encrypted with master key 0F.
    { 0x39, 0x1E, 0x7E, 0xF8, 0x7E, 0x73, 0xEA, 0x6F, 0xAF, 0x00, 0x3A, 0xB4, 0xAA, 0xB8, 0xB7, 0x59 }, ///< Master key 0F encrypted with master key 10.
    { 0x0C, 0x75, 0x39, 0x15, 0x53, 0xEA, 0x81, 0x11, 0xA3, 0xE0, 0xDC, 0x3D, 0x0E, 0x76, 0xC6, 0xB8 }, ///< Master key 10 encrypted with master key 11.
};

/* Used to derive a master KEK using the TSEC root key on Erista units. */
/* TODO: update on master key changes. */
static const u8 g_eristaMasterKekSource[AES_128_KEY_SIZE] = {
    0x00, 0x04, 0x5D, 0xF0, 0x4D, 0xCD, 0x14, 0xA3, 0x1C, 0xBF, 0xDE, 0x48, 0x55, 0xBA, 0x35, 0xC1
};

/* Used to derive a master KEK on retail Mariko units. */
/* TODO: update on master key changes. */
static const u8 g_marikoMasterKekSourceProd[AES_128_KEY_SIZE] = {
    0x4F, 0x41, 0x3C, 0x3B, 0xFB, 0x6A, 0x01, 0x2A, 0x68, 0x9F, 0x83, 0xE9, 0x53, 0xBD, 0x16, 0xD2
};

/* Used to derive a master KEK on development Mariko units. */
/* TODO: update on master key changes. */
static const u8 g_marikoMasterKekSourceDev[AES_128_KEY_SIZE] = {
    0xE4, 0x45, 0xD0, 0x14, 0xA0, 0xE5, 0xE9, 0x4B, 0xFE, 0x76, 0xF4, 0x29, 0x41, 0xBB, 0x64, 0xED
};

/* Used to derive master keys from master KEKs. Found in TrustZone / Secure Monitor. */
static const u8 g_masterKeySource[AES_128_KEY_SIZE] = {
    0xD8, 0xA2, 0x41, 0x0A, 0xC6, 0xC5, 0x90, 0x01, 0xC6, 0x1D, 0x6A, 0x26, 0x7C, 0x51, 0x3F, 0x3C
};

/* Randomly generated KEK source used to derive official CardInfo area keys. */
static const u8 g_gcCardInfoKekSource[AES_128_KEY_SIZE] = {
    0xDE, 0xC6, 0x3F, 0x6A, 0xBF, 0x37, 0x72, 0x0B, 0x7E, 0x54, 0x67, 0x6A, 0x2D, 0xEF, 0xDD, 0x97
};

/* CardInfo area key used in retail units. Obfuscated using g_gcCardInfoKekSource and SMC AES engine keydata. */
/* Hardcoded because it can only be retrieved in plaintext form from FS program memory under HOS 9.0.0+ -- and we wish to use it under previous HOS versions as well. */
static const u8 g_gcCardInfoKeySourceProd[AES_128_KEY_SIZE] = {
    0xF4, 0x92, 0x06, 0x52, 0xD6, 0x37, 0x70, 0xAF, 0xB1, 0x9C, 0x6F, 0x63, 0x09, 0x01, 0xF6, 0x29
};

/* CardInfo area key used in development units. Obfuscated using g_gcCardInfoKekSource and SMC AES engine keydata. */
/* Hardcoded because it can only be retrieved in plaintext form from FS program memory under HOS 9.0.0+ -- and we wish to use it under previous HOS versions as well. */
static const u8 g_gcCardInfoKeySourceDev[AES_128_KEY_SIZE] = {
    0x54, 0xC3, 0xE1, 0xF2, 0x5B, 0x3A, 0x5E, 0xC0, 0x4C, 0xA7, 0xCF, 0xFB, 0xE1, 0xAE, 0x16, 0xCA
};

/* KEK source used to generate ticket common keys, which in turn are used to decrypt titlekeys from tickets. Also known as "titlekek_source". */
/* Found in TrustZone / Secure Monitor. */
static const u8 g_ticketCommonKeySource[AES_128_KEY_SIZE] = {
    0x1E, 0xDC, 0x7B, 0x3B, 0x60, 0xE6, 0xB4, 0xD8, 0x78, 0xB8, 0x17, 0x15, 0x98, 0x5E, 0x62, 0x9B
};

/* Used by GenerateAesKek to derive keys. Found in TrustZone / Secure Monitor. */
static const u8 g_smcKeyTypeSources[SmcKeyType_Count][AES_128_KEY_SIZE] = {
    [SmcKeyType_Default]           = { 0x4D, 0x87, 0x09, 0x86, 0xC4, 0x5D, 0x20, 0x72, 0x2F, 0xBA, 0x10, 0x53, 0xDA, 0x92, 0xE8, 0xA9 }, ///< Also known as "aes_kek_generation_source".
    [SmcKeyType_NormalOnly]        = { 0x25, 0x03, 0x31, 0xFB, 0x25, 0x26, 0x0B, 0x79, 0x8C, 0x80, 0xD2, 0x69, 0x98, 0xE2, 0x22, 0x77 },
    [SmcKeyType_RecoveryOnly]      = { 0x76, 0x14, 0x1D, 0x34, 0x93, 0x2D, 0xE1, 0x84, 0x24, 0x7B, 0x66, 0x65, 0x55, 0x04, 0x65, 0x81 },
    [SmcKeyType_NormalAndRecovery] = { 0xAF, 0x3D, 0xB7, 0xF3, 0x08, 0xA2, 0xD8, 0xA2, 0x08, 0xCA, 0x18, 0xA8, 0x69, 0x46, 0xC9, 0x0B },
};

/* Used by GenerateAesKek to derive keys. Found in TrustZone / Secure Monitor. */
static const u8 g_smcSealKeyMasks[SmcSealKey_Count][AES_128_KEY_SIZE] = {
    [SmcSealKey_LoadAesKey]                = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
    [SmcSealKey_DecryptDeviceUniqueData]   = { 0xA2, 0xAB, 0xBF, 0x9C, 0x92, 0x2F, 0xBB, 0xE3, 0x78, 0x79, 0x9B, 0xC0, 0xCC, 0xEA, 0xA5, 0x74 },
    [SmcSealKey_ImportLotusKey]            = { 0x57, 0xE2, 0xD9, 0x45, 0xE4, 0x92, 0xF4, 0xFD, 0xC3, 0xF9, 0x86, 0x38, 0x89, 0x78, 0x9F, 0x3C },
    [SmcSealKey_ImportEsDeviceKey]         = { 0xE5, 0x4D, 0x9A, 0x02, 0xF0, 0x4F, 0x5F, 0xA8, 0xAD, 0x76, 0x0A, 0xF6, 0x32, 0x95, 0x59, 0xBB },
    [SmcSealKey_ReencryptDeviceUniqueData] = { 0x59, 0xD9, 0x31, 0xF4, 0xA7, 0x97, 0xB8, 0x14, 0x40, 0xD6, 0xA2, 0x60, 0x2B, 0xED, 0x15, 0x31 },
    [SmcSealKey_ImportSslKey]              = { 0xFD, 0x6A, 0x25, 0xE5, 0xD8, 0x38, 0x7F, 0x91, 0x49, 0xDA, 0xF8, 0x59, 0xA8, 0x28, 0xE6, 0x75 },
    [SmcSealKey_ImportEsClientCertKey]     = { 0x89, 0x96, 0x43, 0x9A, 0x7C, 0xD5, 0x59, 0x55, 0x24, 0xD5, 0x24, 0x18, 0xAB, 0x6C, 0x04, 0x61 }
};

/* Used by GenerateAesKey. Found in SPL. */
static const u8 g_aesKeyGenerationSource[AES_128_KEY_SIZE] = {
    0x89, 0x61, 0x5E, 0xE0, 0x5C, 0x31, 0xB6, 0x80, 0x5F, 0xE5, 0x8F, 0x3D, 0xA2, 0x4F, 0x7A, 0xA8
};

/* Used to derive the NCA header key. Found in the .rodata segment from the FS sysmodule. */
static const u8 g_ncaHeaderKekSource[AES_128_KEY_SIZE] = {
    0x1F, 0x12, 0x91, 0x3A, 0x4A, 0xCB, 0xF0, 0x0D, 0x4C, 0xDE, 0x3A, 0xF6, 0xD5, 0x23, 0x88, 0x2A
};

/* Used to derive the NCA header key. Found in the .data segment from the FS sysmodule. */
static const u8 g_ncaHeaderKeySource[AES_128_KEY_SIZE * 2] = {
    0x5A, 0x3E, 0xD8, 0x4F, 0xDE, 0xC0, 0xD8, 0x26, 0x31, 0xF7, 0xE2, 0x5D, 0x19, 0x7B, 0xF5, 0xD0,
    0x1C, 0x9B, 0x7B, 0xFA, 0xF6, 0x28, 0x18, 0x3D, 0x71, 0xF6, 0x4D, 0x73, 0xF1, 0x50, 0xB9, 0xD2
};

/* Key sources used to derive NCA key area encryption keys required to handle key areas from NCA headers. Found in the .rodata segment from the FS sysmodule. */
static const u8 g_ncaKeyAreaEncryptionKeySources[NcaKeyAreaEncryptionKeyIndex_Count][AES_128_KEY_SIZE] = {
    { 0x7F, 0x59, 0x97, 0x1E, 0x62, 0x9F, 0x36, 0xA1, 0x30, 0x98, 0x06, 0x6F, 0x21, 0x44, 0xC3, 0x0D }, ///< Application.
    { 0x32, 0x7D, 0x36, 0x08, 0x5A, 0xD1, 0x75, 0x8D, 0xAB, 0x4E, 0x6F, 0xBA, 0xA5, 0x55, 0xD8, 0x82 }, ///< Ocean.
    { 0x87, 0x45, 0xF1, 0xBB, 0xA6, 0xBE, 0x79, 0x64, 0x7D, 0x04, 0x8B, 0xA6, 0x7B, 0x5F, 0xDA, 0x4A }  ///< System.
};

#ifdef __cplusplus
}
#endif

#endif /* __KEY_SOURCES_H__ */
