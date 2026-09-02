[English](README.md) | **Asante Twi** | [Español](README_ES.md) | [简体中文](README_CN.md) | [繁體中文](README_TW.md) | [日本語](README_JP.md) | [한국어](README_KR.md) | [Polski](README_PL.md) | [Português (Brasil)](README_PT-BR.md) | [Türkçe](README_TR.md) | [Русский](README_RU.md) | [Tiếng Việt](README_VI.md) | [Indonesia](README_ID.md) | [עברית](README_IW.md) | [हिंदी](README_IN.md) | [Italiano](README_IT.md)

# KernelSU

<img src="https://kernelsu.org/logo.png" style="width: 96px;" alt="logo">

Kernel-based root solutions a wɔayɛ ama Android mfidie ahorow

[![Latest release](https://img.shields.io/github/v/release/tiann/KernelSU?label=Release&logo=github)](https://github.com/tiann/KernelSU/releases/latest)
[![Weblate](https://img.shields.io/badge/Localization-Weblate-teal?logo=weblate)](https://hosted.weblate.org/engage/kernelsu)
[![Channel](https://img.shields.io/badge/Follow-Telegram-blue.svg?logo=telegram)](https://t.me/KernelSU)
[![License: GPL v2](https://img.shields.io/badge/License-GPL%20v2-orange.svg?logo=gnu)](https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html)
[![GitHub License](https://img.shields.io/github/license/tiann/KernelSU?logo=gnu)](/LICENSE)

## KernelSU ho su-ban

1. Kernel-based `su` and root access management.
2. Module system based on [metamodules](https://kernelsu.org/guide/metamodule.html): Pluggable infrastructure for systemless modifications.
3. [App Profile](https://kernelsu.org/guide/app-profile.html): Lock up the root power in a cage.

## Compatibility state

KernelSU officially supports Android GKI 2.0 devices (kernel 5.10+). Older kernels (4.14+) are also supported, but the kernel will need to be built manually.

With this, WSA, ChromeOS, and container-based Android are all supported.

Currently, the `arm64-v8a` and `x86_64` architectures are supported.

> [!CAUTION]
> Recent kernel versions have implemented a breaking change causing KernelSU to fail and potentially trigger a kernel panic on `x86_64`! Check the website for more info!

## Sɛnea yɛde di dwuma

- [Installation](https://kernelsu.org/guide/installation.html)
- [How to build](https://kernelsu.org/guide/how-to-build.html)
- [Official website](https://kernelsu.org/)

## Kasa nkyerɛaseɛ

Sɛnea ɛbɛyɛ a yɛbɛboa ma wɔakyerɛ KernelSU ase akɔ kasa foforɔ mu no, yɛrengye nkyerɛase ntoboa nfa Weblate so bio. Mprempren yi, yɛde LLM ahorow na edi nkyerɛase nyinaa ho dwuma.

Sɛ wopɛ sɛ woboa ma yɛ yɛ nkyerɛaseɛ ma kasa foforo a, ntwentwɛn wo nan ase sɛ wubebue PR. Yɛsrɛ, monhyɛ no nsow sɛ yɛrengye nsakrae a wobɛyɛ wɔ Engiresi ne China nkyerɛase a ɛwɔ hɔ dedaw no mu ntom.

## Nkitahodie

- Telegram: [@KernelSU](https://t.me/KernelSU)

## Project ho ahobanbɔ

Sɛ wopɛ nsɛm a ɛfa amanneɛbɔ a ɛfa ahobanbɔ ho mmerɛwyɛ ho wɔ KernelSU mu a, hwɛ [SECURITY.md](/SECURITY.md) fael no.

## Project yi ho tumi nkrataa

- Faels a ɛwɔ `kernel` directory no mu no nyinaa yɛ [GPL-2.0-pɛ](https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html).
- Afã afoforo nyinaa a ɛwɔ project yi mu, gye `kernel` directory no pɛ, yɛ [GPL-3.0-anaa-n'abadiakyire](https://www.gnu.org/licenses/gpl-3.0.html).

## Ndaase nkɔ mma

- [Kernel-Assisted Superuser](https://git.zx2c4.com/kernel-assisted-superuser/about/): KernelSU project adwen no.
- [Magisk](https://github.com/topjohnwu/Magisk): Root tool kokroko a tumi wom'.
- [genuine](https://github.com/brevent/genuine/): APK v2 signatures a w'agye atum.
- [Diamorphine](https://github.com/m0nad/Diamorphine): Rootkitskills ho nneɛma bi ho nimdeɛ.
