/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated by an internal plugin build system
 */

#ifdef ABI39_0_0RN_DISABLE_OSS_PLUGIN_HEADER

// FB Internal: FBABI39_0_0RCTBlobPlugins.h is autogenerated by the build system.
#import <ABI39_0_0React/ABI39_0_0FBABI39_0_0RCTBlobPlugins.h>

#else

// OSS-compatibility layer

#import <Foundation/Foundation.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type-c-linkage"

#ifdef __cplusplus
extern "C" {
#endif

// ABI39_0_0RCTTurboModuleManagerDelegate should call this to resolve module classes.
Class ABI39_0_0RCTBlobClassProvider(const char *name);

// Lookup functions
Class ABI39_0_0RCTFileReaderModuleCls(void) __attribute__((used));
Class ABI39_0_0RCTBlobManagerCls(void) __attribute__((used));

#ifdef __cplusplus
}
#endif

#pragma GCC diagnostic pop

#endif // ABI39_0_0RN_DISABLE_OSS_PLUGIN_HEADER
