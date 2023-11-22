/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t light_info = {
    .bid_value = "S98016AA1",
    .sku_value = "",

    .brand = "Redmi",
    .device = "light",
    .name = "light",
    .marketname = "Redmi Note 11R",
    .model = "22095RA98C",
    .build_fingerprint = "Redmi/light/light:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t light_info = {
    .bid_value = "S98016BA1",
    .sku_value = "",

    .brand = "Redmi",
    .device = "light",
    .name = "light",
    .marketname = "Redmi 11 Prime 5G",
    .model =  "22041219I",
    .build_fingerprint = "Redmi/light/light:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t light_global_info = {
    .bid_value = "S98016LA1",
    .sku_value = "",

    .brand = "POCO",
    .device = "light",
    .name = "light_global",
    .marketname = "POCO M4 5G",
    .model = " 22041219PG",
    .build_fingerprint = "POCO/light/light_global:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t light_in_info = {
    .bid_value = "S98017AA1",
    .sku_value = "",

    .brand = "POCO",
    .device = "light",
    .name = "light_in",
    .marketname = "POCO M4 5G",
    .model = "22041219PI",
    .build_fingerprint = "POCO/light/light_in:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t light_global_info = {
    .bid_value = "S98018AA1",
    .sku_value = "",

    .brand = "Redmi",
    .device = "light",
    .name = "light_global",
    .marketname = "Redmi 10 5G",
    .model = "22041219G",
    .build_fingerprint = "Redmi/light/light:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys",
    .nfc = false,
};
static const variant_info_t light_global_info = {
    .bid_value = "S98018AA1",
    .sku_value = "",

    .brand = "Redmi",
    .device = "light",
    .name = "light_global",
    .marketname = "Redmi 10 Prime+ 5G",
    .model = "22041219I",
    .build_fingerprint = "Redmi/light/light:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys",

    .nfc = false,
};
static const variant_info_t light_global_info = {
    .bid_value = "S98018AA1",
    .sku_value = "",

    .brand = "Redmi",
    .device = "light",
    .name = "light_global",
    .marketname = "Redmi Note 11E",
    .model = " 22041219C",
    .build_fingerprint = "Redmi/light/light:13/ΤΡ1Α.220624.014/V14.0.5.0.TLSMIXM:user/release-keys",

    .nfc = false,
};


static const std::vector<variant_info_t> variants = {
    light_info,
    light_info,
    light_global_info,
    light_in_info,
    light_global_info,
    light_global_info,    
    light_global_info

};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
