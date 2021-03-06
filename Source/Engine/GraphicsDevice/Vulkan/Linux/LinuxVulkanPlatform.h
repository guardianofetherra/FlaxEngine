// Copyright (c) 2012-2020 Wojciech Figat. All rights reserved.

#pragma once

#include "../VulkanPlatformBase.h"

#if GRAPHICS_API_VULKAN && PLATFORM_LINUX

#define VULKAN_USE_DEBUG_LAYER GPU_ENABLE_DIAGNOSTICS
#define VULKAN_HAS_PHYSICAL_DEVICE_PROPERTIES2 1
#define VULKAN_ENABLE_DESKTOP_HMD_SUPPORT 0

/// <summary>
/// The implementation for the Vulkan API support for Linux platform.
/// </summary>
class LinuxVulkanPlatform : public VulkanPlatformBase
{
public:

	static void GetInstanceExtensions(Array<const char*>& outExtensions);
	static void CreateSurface(void* windowHandle, VkInstance instance, VkSurfaceKHR* outSurface);
};

typedef LinuxVulkanPlatform VulkanPlatform;

#endif
