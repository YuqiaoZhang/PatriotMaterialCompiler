#include <stdint.h>

//--------------------------------------------------------------------------------------
// Macros
//--------------------------------------------------------------------------------------
#ifndef DDS_MAKEFOURCC
#define DDS_MAKEFOURCC(ch0, ch1, ch2, ch3)                        \
    ((uint32_t)(uint8_t)(ch0) | ((uint32_t)(uint8_t)(ch1) << 8) | \
     ((uint32_t)(uint8_t)(ch2) << 16) | ((uint32_t)(uint8_t)(ch3) << 24))
#endif /* defined(MAKEFOURCC) */

//--------------------------------------------------------------------------------------
// DDS file structure definitions
//
// See DDS.h in the 'Texconv' sample and the 'DirectXTex' library
//--------------------------------------------------------------------------------------

const uint32_t DDS_MAGIC = DDS_MAKEFOURCC('D', 'D', 'S', ' '); //0x20534444; // "DDS "

struct DDS_PIXELFORMAT
{
    uint32_t size;
    uint32_t flags;
    uint32_t fourCC;
    uint32_t RGBBitCount;
    uint32_t RBitMask;
    uint32_t GBitMask;
    uint32_t BBitMask;
    uint32_t ABitMask;
};

#define DDS_FOURCC 0x00000004    // DDPF_FOURCC
#define DDS_RGB 0x00000040       // DDPF_RGB
#define DDS_LUMINANCE 0x00020000 // DDPF_LUMINANCE
#define DDS_ALPHA 0x00000002     // DDPF_ALPHA
#define DDS_BUMPDUDV 0x00080000  // DDPF_BUMPDUDV

#define DDS_HEADER_FLAGS_VOLUME 0x00800000 // DDSD_DEPTH

#define DDS_HEIGHT 0x00000002 // DDSD_HEIGHT

#define DDS_CUBEMAP_POSITIVEX 0x00000600 // DDSCAPS2_CUBEMAP | DDSCAPS2_CUBEMAP_POSITIVEX
#define DDS_CUBEMAP_NEGATIVEX 0x00000a00 // DDSCAPS2_CUBEMAP | DDSCAPS2_CUBEMAP_NEGATIVEX
#define DDS_CUBEMAP_POSITIVEY 0x00001200 // DDSCAPS2_CUBEMAP | DDSCAPS2_CUBEMAP_POSITIVEY
#define DDS_CUBEMAP_NEGATIVEY 0x00002200 // DDSCAPS2_CUBEMAP | DDSCAPS2_CUBEMAP_NEGATIVEY
#define DDS_CUBEMAP_POSITIVEZ 0x00004200 // DDSCAPS2_CUBEMAP | DDSCAPS2_CUBEMAP_POSITIVEZ
#define DDS_CUBEMAP_NEGATIVEZ 0x00008200 // DDSCAPS2_CUBEMAP | DDSCAPS2_CUBEMAP_NEGATIVEZ

#define DDS_CUBEMAP_ALLFACES (DDS_CUBEMAP_POSITIVEX | DDS_CUBEMAP_NEGATIVEX | \
                              DDS_CUBEMAP_POSITIVEY | DDS_CUBEMAP_NEGATIVEY | \
                              DDS_CUBEMAP_POSITIVEZ | DDS_CUBEMAP_NEGATIVEZ)

#define DDS_CUBEMAP 0x00000200 // DDSCAPS2_CUBEMAP

enum DDS_MISC_FLAGS2
{
    DDS_MISC_FLAGS2_ALPHA_MODE_MASK = 0x7L,
};

struct DDS_HEADER
{
    uint32_t size;
    uint32_t flags;
    uint32_t height;
    uint32_t width;
    uint32_t pitchOrLinearSize;
    uint32_t depth; // only if DDS_HEADER_FLAGS_VOLUME is set in flags
    uint32_t mipMapCount;
    uint32_t reserved1[11];
    DDS_PIXELFORMAT ddspf;
    uint32_t caps;
    uint32_t caps2;
    uint32_t caps3;
    uint32_t caps4;
    uint32_t reserved2;
};

enum DDS_DXGI_FORMAT : uint32_t
{
    DDS_DXGI_FORMAT_UNKNOWN,
    DDS_DXGI_FORMAT_R32G32B32A32_TYPELESS,
    DDS_DXGI_FORMAT_R32G32B32A32_FLOAT,
    DDS_DXGI_FORMAT_R32G32B32A32_UINT,
    DDS_DXGI_FORMAT_R32G32B32A32_SINT,
    DDS_DXGI_FORMAT_R32G32B32_TYPELESS,
    DDS_DXGI_FORMAT_R32G32B32_FLOAT,
    DDS_DXGI_FORMAT_R32G32B32_UINT,
    DDS_DXGI_FORMAT_R32G32B32_SINT,
    DDS_DXGI_FORMAT_R16G16B16A16_TYPELESS,
    DDS_DXGI_FORMAT_R16G16B16A16_FLOAT,
    DDS_DXGI_FORMAT_R16G16B16A16_UNORM,
    DDS_DXGI_FORMAT_R16G16B16A16_UINT,
    DDS_DXGI_FORMAT_R16G16B16A16_SNORM,
    DDS_DXGI_FORMAT_R16G16B16A16_SINT,
    DDS_DXGI_FORMAT_R32G32_TYPELESS,
    DDS_DXGI_FORMAT_R32G32_FLOAT,
    DDS_DXGI_FORMAT_R32G32_UINT,
    DDS_DXGI_FORMAT_R32G32_SINT,
    DDS_DXGI_FORMAT_R32G8X24_TYPELESS,
    DDS_DXGI_FORMAT_D32_FLOAT_S8X24_UINT,
    DDS_DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS,
    DDS_DXGI_FORMAT_X32_TYPELESS_G8X24_UINT,
    DDS_DXGI_FORMAT_R10G10B10A2_TYPELESS,
    DDS_DXGI_FORMAT_R10G10B10A2_UNORM,
    DDS_DXGI_FORMAT_R10G10B10A2_UINT,
    DDS_DXGI_FORMAT_R11G11B10_FLOAT,
    DDS_DXGI_FORMAT_R8G8B8A8_TYPELESS,
    DDS_DXGI_FORMAT_R8G8B8A8_UNORM,
    DDS_DXGI_FORMAT_R8G8B8A8_UNORM_SRGB,
    DDS_DXGI_FORMAT_R8G8B8A8_UINT,
    DDS_DXGI_FORMAT_R8G8B8A8_SNORM,
    DDS_DXGI_FORMAT_R8G8B8A8_SINT,
    DDS_DXGI_FORMAT_R16G16_TYPELESS,
    DDS_DXGI_FORMAT_R16G16_FLOAT,
    DDS_DXGI_FORMAT_R16G16_UNORM,
    DDS_DXGI_FORMAT_R16G16_UINT,
    DDS_DXGI_FORMAT_R16G16_SNORM,
    DDS_DXGI_FORMAT_R16G16_SINT,
    DDS_DXGI_FORMAT_R32_TYPELESS,
    DDS_DXGI_FORMAT_D32_FLOAT,
    DDS_DXGI_FORMAT_R32_FLOAT,
    DDS_DXGI_FORMAT_R32_UINT,
    DDS_DXGI_FORMAT_R32_SINT,
    DDS_DXGI_FORMAT_R24G8_TYPELESS,
    DDS_DXGI_FORMAT_D24_UNORM_S8_UINT,
    DDS_DXGI_FORMAT_R24_UNORM_X8_TYPELESS,
    DDS_DXGI_FORMAT_X24_TYPELESS_G8_UINT,
    DDS_DXGI_FORMAT_R8G8_TYPELESS,
    DDS_DXGI_FORMAT_R8G8_UNORM,
    DDS_DXGI_FORMAT_R8G8_UINT,
    DDS_DXGI_FORMAT_R8G8_SNORM,
    DDS_DXGI_FORMAT_R8G8_SINT,
    DDS_DXGI_FORMAT_R16_TYPELESS,
    DDS_DXGI_FORMAT_R16_FLOAT,
    DDS_DXGI_FORMAT_D16_UNORM,
    DDS_DXGI_FORMAT_R16_UNORM,
    DDS_DXGI_FORMAT_R16_UINT,
    DDS_DXGI_FORMAT_R16_SNORM,
    DDS_DXGI_FORMAT_R16_SINT,
    DDS_DXGI_FORMAT_R8_TYPELESS,
    DDS_DXGI_FORMAT_R8_UNORM,
    DDS_DXGI_FORMAT_R8_UINT,
    DDS_DXGI_FORMAT_R8_SNORM,
    DDS_DXGI_FORMAT_R8_SINT,
    DDS_DXGI_FORMAT_A8_UNORM,
    DDS_DXGI_FORMAT_R1_UNORM,
    DDS_DXGI_FORMAT_R9G9B9E5_SHAREDEXP,
    DDS_DXGI_FORMAT_R8G8_B8G8_UNORM,
    DDS_DXGI_FORMAT_G8R8_G8B8_UNORM,
    DDS_DXGI_FORMAT_BC1_TYPELESS,
    DDS_DXGI_FORMAT_BC1_UNORM,
    DDS_DXGI_FORMAT_BC1_UNORM_SRGB,
    DDS_DXGI_FORMAT_BC2_TYPELESS,
    DDS_DXGI_FORMAT_BC2_UNORM,
    DDS_DXGI_FORMAT_BC2_UNORM_SRGB,
    DDS_DXGI_FORMAT_BC3_TYPELESS,
    DDS_DXGI_FORMAT_BC3_UNORM,
    DDS_DXGI_FORMAT_BC3_UNORM_SRGB,
    DDS_DXGI_FORMAT_BC4_TYPELESS,
    DDS_DXGI_FORMAT_BC4_UNORM,
    DDS_DXGI_FORMAT_BC4_SNORM,
    DDS_DXGI_FORMAT_BC5_TYPELESS,
    DDS_DXGI_FORMAT_BC5_UNORM,
    DDS_DXGI_FORMAT_BC5_SNORM,
    DDS_DXGI_FORMAT_B5G6R5_UNORM,
    DDS_DXGI_FORMAT_B5G5R5A1_UNORM,
    DDS_DXGI_FORMAT_B8G8R8A8_UNORM,
    DDS_DXGI_FORMAT_B8G8R8X8_UNORM,
    DDS_DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM,
    DDS_DXGI_FORMAT_B8G8R8A8_TYPELESS,
    DDS_DXGI_FORMAT_B8G8R8A8_UNORM_SRGB,
    DDS_DXGI_FORMAT_B8G8R8X8_TYPELESS,
    DDS_DXGI_FORMAT_B8G8R8X8_UNORM_SRGB,
    DDS_DXGI_FORMAT_BC6H_TYPELESS,
    DDS_DXGI_FORMAT_BC6H_UF16,
    DDS_DXGI_FORMAT_BC6H_SF16,
    DDS_DXGI_FORMAT_BC7_TYPELESS,
    DDS_DXGI_FORMAT_BC7_UNORM,
    DDS_DXGI_FORMAT_BC7_UNORM_SRGB,
    DDS_DXGI_FORMAT_AYUV,
    DDS_DXGI_FORMAT_Y410,
    DDS_DXGI_FORMAT_Y416,
    DDS_DXGI_FORMAT_NV12,
    DDS_DXGI_FORMAT_P010,
    DDS_DXGI_FORMAT_P016,
    DDS_DXGI_FORMAT_420_OPAQUE,
    DDS_DXGI_FORMAT_YUY2,
    DDS_DXGI_FORMAT_Y210,
    DDS_DXGI_FORMAT_Y216,
    DDS_DXGI_FORMAT_NV11,
    DDS_DXGI_FORMAT_AI44,
    DDS_DXGI_FORMAT_IA44,
    DDS_DXGI_FORMAT_P8,
    DDS_DXGI_FORMAT_A8P8,
    DDS_DXGI_FORMAT_B4G4R4A4_UNORM,
    DDS_DXGI_FORMAT_P208,
    DDS_DXGI_FORMAT_V208,
    DDS_DXGI_FORMAT_V408,
    DDS_DXGI_FORMAT_FORCE_UINT
};

struct DDS_HEADER_DXT10
{
    DDS_DXGI_FORMAT dxgiFormat;
    uint32_t resourceDimension;
    uint32_t miscFlag; // see D3D11_RESOURCE_MISC_FLAG
    uint32_t arraySize;
    uint32_t miscFlags2;
};