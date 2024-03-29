/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/util/Font.h"
#include <string.h>

namespace GP {
    
    const unsigned char Font::font[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x7e, 0x81, 0xa9, 0x8d, 0x8d, 0xa9, 0x81, 0x7e, 
	0x7e, 0xff, 0xd7, 0xf3, 0xf3, 0xd7, 0xff, 0x7e, 
	0x70, 0xf8, 0xfc, 0x7e, 0xfc, 0xf8, 0x70, 0x00, 
	0x10, 0x38, 0x7c, 0xfe, 0x7c, 0x38, 0x10, 0x00, 
	0x18, 0x18, 0xda, 0xf6, 0xf6, 0xda, 0x18, 0x18, 
	0x18, 0x38, 0x7a, 0xf6, 0x7a, 0x38, 0x18, 0x00, 
	0x00, 0x00, 0x18, 0x3c, 0x3c, 0x18, 0x00, 0x00, 
	0xff, 0xff, 0xe7, 0xc3, 0xc3, 0xe7, 0xff, 0xff, 
	0x00, 0x3c, 0x66, 0x42, 0x42, 0x66, 0x3c, 0x00, 
	0xff, 0xc3, 0x99, 0xbd, 0xbd, 0x99, 0xc3, 0xff, 
	0x0e, 0x1f, 0x11, 0x11, 0xbf, 0xfe, 0xe0, 0xf0, 
	0x00, 0x72, 0xfa, 0x8f, 0x8f, 0xfa, 0x72, 0x00, 
	0x02, 0x06, 0x06, 0x06, 0xfc, 0x40, 0x30, 0x00, 
	0x04, 0x0c, 0x0c, 0xf9, 0xa3, 0x53, 0x3e, 0x00, 
	0x10, 0x54, 0x38, 0xee, 0x38, 0x54, 0x10, 0x00, 
	0xfe, 0x7c, 0x7c, 0x38, 0x38, 0x10, 0x10, 0x00, 
	0x10, 0x10, 0x38, 0x38, 0x7c, 0x7c, 0xfe, 0x00, 
	0x00, 0x28, 0x44, 0xfe, 0xfe, 0x44, 0x28, 0x00, 
	0x00, 0xfa, 0xfa, 0x00, 0x00, 0xfa, 0xfa, 0x00, 
	0x70, 0xf8, 0x88, 0xfe, 0xfe, 0x80, 0xfe, 0xfe, 
	0x02, 0x19, 0x65, 0xa5, 0xa6, 0x98, 0x40, 0x00, 
	0x00, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x00, 
	0x00, 0x29, 0x45, 0xff, 0xff, 0x45, 0x29, 0x00, 
	0x00, 0x20, 0x40, 0xfe, 0xfe, 0x40, 0x20, 0x00, 
	0x00, 0x08, 0x04, 0xfe, 0xfe, 0x04, 0x08, 0x00, 
	0x10, 0x10, 0x10, 0x54, 0x7c, 0x38, 0x10, 0x00, 
	0x10, 0x38, 0x7c, 0x54, 0x10, 0x10, 0x10, 0x00, 
	0x3c, 0x3c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 
	0x10, 0x38, 0x54, 0x10, 0x10, 0x54, 0x38, 0x10, 
	0x0c, 0x1c, 0x3c, 0x7c, 0x3c, 0x1c, 0x0c, 0x00, 
	0x60, 0x70, 0x78, 0x7c, 0x78, 0x70, 0x60, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x60, 0xfa, 0xfa, 0x60, 0x00, 0x00, 
	0x00, 0x80, 0xe0, 0x00, 0x80, 0xe0, 0x00, 0x00, 
	0x28, 0xfe, 0xfe, 0x28, 0xfe, 0xfe, 0x28, 0x00, 
	0x24, 0x74, 0x54, 0xfe, 0x54, 0x5c, 0x08, 0x00, 
	0x32, 0x56, 0x6c, 0x18, 0x36, 0x6a, 0x4c, 0x00, 
	0x0c, 0x5e, 0xb2, 0xb2, 0xfe, 0x4c, 0x0a, 0x00, 
	0x00, 0x00, 0xa0, 0xc0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x38, 0x7c, 0xc6, 0x82, 0x00, 0x00, 0x00, 
	0x00, 0x82, 0xc6, 0x7c, 0x38, 0x00, 0x00, 0x00, 
	0x10, 0x54, 0x7c, 0x38, 0x38, 0x7c, 0x54, 0x10, 
	0x10, 0x10, 0x7c, 0x7c, 0x10, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x00, 
	0x7c, 0xfe, 0x9e, 0xb2, 0xe2, 0xfe, 0x7c, 0x00, 
	0x00, 0x22, 0x62, 0xfe, 0xfe, 0x02, 0x02, 0x00, 
	0x46, 0xce, 0x8a, 0x9a, 0x92, 0xf6, 0x66, 0x00, 
	0x44, 0xc6, 0x92, 0x92, 0x92, 0xfe, 0x6c, 0x00, 
	0x18, 0x38, 0x68, 0xca, 0xfe, 0xfe, 0x0a, 0x00, 
	0xe4, 0xe6, 0xa2, 0xa2, 0xa2, 0xbe, 0x9c, 0x00, 
	0x7c, 0xfe, 0x92, 0x92, 0x92, 0xde, 0x4c, 0x00, 
	0xc0, 0xc0, 0x8e, 0x9e, 0xb0, 0xe0, 0xc0, 0x00, 
	0x6c, 0xfe, 0x92, 0x92, 0x92, 0xfe, 0x6c, 0x00, 
	0x64, 0xf6, 0x92, 0x92, 0x92, 0xfe, 0x7c, 0x00, 
	0x00, 0x00, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x45, 0x46, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x10, 0x38, 0x6c, 0xc6, 0x82, 0x00, 0x00, 
	0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 
	0x00, 0x82, 0xc6, 0x6c, 0x38, 0x10, 0x00, 0x00, 
	0x40, 0xc0, 0x8a, 0x9a, 0xf0, 0x60, 0x00, 0x00, 
	0x7c, 0x82, 0x92, 0xaa, 0xaa, 0xba, 0x78, 0x00, 
	0x7e, 0xfe, 0x90, 0x90, 0x90, 0xfe, 0x7e, 0x00, 
	0x82, 0xfe, 0xfe, 0x92, 0x92, 0xfe, 0x6c, 0x00, 
	0x7c, 0xfe, 0x82, 0x82, 0x82, 0xc6, 0x44, 0x00, 
	0x82, 0xfe, 0xfe, 0x82, 0x82, 0xfe, 0x7c, 0x00, 
	0x82, 0xfe, 0xfe, 0x92, 0xba, 0x82, 0xc6, 0x00, 
	0x82, 0xfe, 0xfe, 0x92, 0xb8, 0x80, 0xc0, 0x00, 
	0x7c, 0xfe, 0x82, 0x82, 0x8a, 0xee, 0x6e, 0x00, 
	0xfe, 0xfe, 0x10, 0x10, 0x10, 0xfe, 0xfe, 0x00, 
	0x00, 0x00, 0x82, 0xfe, 0xfe, 0x82, 0x00, 0x00, 
	0x0c, 0x0e, 0x02, 0x82, 0xfe, 0xfc, 0x80, 0x00, 
	0x82, 0xfe, 0xfe, 0x10, 0x38, 0xee, 0xc6, 0x00, 
	0x82, 0xfe, 0xfe, 0x82, 0x02, 0x06, 0x0e, 0x00, 
	0xfe, 0x7e, 0x30, 0x18, 0x30, 0x7e, 0xfe, 0x00, 
	0xfe, 0xfe, 0x60, 0x30, 0x18, 0xfe, 0xfe, 0x00, 
	0x7c, 0xfe, 0x82, 0x82, 0x82, 0xfe, 0x7c, 0x00, 
	0x82, 0xfe, 0xfe, 0x92, 0x90, 0xf0, 0x60, 0x00, 
	0x7c, 0xfe, 0x82, 0x8e, 0x86, 0xff, 0x7d, 0x00, 
	0x82, 0xfe, 0xfe, 0x90, 0x90, 0xfe, 0x6e, 0x00, 
	0x64, 0xf6, 0x92, 0x92, 0x92, 0xde, 0x4c, 0x00, 
	0x00, 0xe0, 0x82, 0xfe, 0xfe, 0x82, 0xe0, 0x00, 
	0xfc, 0xfe, 0x02, 0x02, 0x02, 0xfe, 0xfc, 0x00, 
	0xf0, 0xf8, 0x0c, 0x06, 0x0c, 0xf8, 0xf0, 0x00, 
	0xfe, 0xfc, 0x18, 0x30, 0x18, 0xfc, 0xfe, 0x00, 
	0x82, 0xc6, 0x7c, 0x38, 0x7c, 0xc6, 0x82, 0x00, 
	0x00, 0xe0, 0xf2, 0x1e, 0x1e, 0xf2, 0xe0, 0x00, 
	0xe2, 0xc6, 0x8e, 0x9a, 0xb2, 0xe6, 0xce, 0x00, 
	0x00, 0xfe, 0xfe, 0x82, 0x82, 0x00, 0x00, 0x00, 
	0x80, 0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x00, 
	0x00, 0x82, 0x82, 0xfe, 0xfe, 0x00, 0x00, 0x00, 
	0x10, 0x30, 0x60, 0xc0, 0x60, 0x30, 0x10, 0x00, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x00, 0x00, 0xc0, 0xa0, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0x2e, 0x2a, 0x2a, 0x3c, 0x1e, 0x02, 0x00, 
	0x80, 0xfe, 0xfe, 0x12, 0x12, 0x1e, 0x0c, 0x00, 
	0x1c, 0x3e, 0x22, 0x22, 0x22, 0x36, 0x14, 0x00, 
	0x0c, 0x1e, 0x12, 0x92, 0xfc, 0xfe, 0x02, 0x00, 
	0x1c, 0x3e, 0x2a, 0x2a, 0x2a, 0x3a, 0x18, 0x00, 
	0x00, 0x12, 0x7e, 0xfe, 0x92, 0xc0, 0x40, 0x00, 
	0x18, 0x3d, 0x25, 0x25, 0x1f, 0x3e, 0x20, 0x00, 
	0x82, 0xfe, 0xfe, 0x10, 0x20, 0x3e, 0x1e, 0x00, 
	0x00, 0x00, 0x22, 0xbe, 0xbe, 0x02, 0x00, 0x00, 
	0x02, 0x03, 0x01, 0x11, 0x5f, 0x5e, 0x00, 0x00, 
	0x82, 0xfe, 0xfe, 0x08, 0x1c, 0x36, 0x22, 0x00, 
	0x00, 0x00, 0x82, 0xfe, 0xfe, 0x02, 0x00, 0x00, 
	0x3e, 0x3e, 0x10, 0x1e, 0x30, 0x3e, 0x1e, 0x00, 
	0x20, 0x3e, 0x1e, 0x20, 0x20, 0x3e, 0x1e, 0x00, 
	0x1c, 0x3e, 0x22, 0x22, 0x22, 0x3e, 0x1c, 0x00, 
	0x21, 0x3f, 0x1f, 0x25, 0x24, 0x3c, 0x18, 0x00, 
	0x18, 0x3c, 0x24, 0x25, 0x3f, 0x3f, 0x01, 0x00, 
	0x22, 0x3e, 0x1e, 0x32, 0x20, 0x30, 0x30, 0x00, 
	0x10, 0x3a, 0x2a, 0x2a, 0x2a, 0x2e, 0x04, 0x00, 
	0x20, 0x20, 0x7c, 0xfe, 0x22, 0x24, 0x00, 0x00, 
	0x3c, 0x3e, 0x02, 0x02, 0x3c, 0x3e, 0x02, 0x00, 
	0x30, 0x38, 0x0c, 0x06, 0x0c, 0x38, 0x30, 0x00, 
	0x3c, 0x3e, 0x06, 0x1c, 0x06, 0x3e, 0x3c, 0x00, 
	0x22, 0x36, 0x1c, 0x08, 0x1c, 0x36, 0x22, 0x00, 
	0x39, 0x3d, 0x05, 0x05, 0x3f, 0x3e, 0x00, 0x00, 
	0x32, 0x26, 0x2e, 0x3a, 0x32, 0x26, 0x00, 0x00, 
	0x00, 0x00, 0x10, 0x7c, 0xee, 0x82, 0x82, 0x00, 
	0x00, 0x00, 0x00, 0xee, 0xee, 0x00, 0x00, 0x00, 
	0x82, 0x82, 0xee, 0x7c, 0x10, 0x00, 0x00, 0x00, 
	0x40, 0xc0, 0x80, 0xc0, 0x40, 0xc0, 0x80, 0x00, 
	0x0e, 0x1e, 0x32, 0x62, 0x32, 0x1e, 0x0e, 0x00, 
	0x78, 0xfd, 0x85, 0x87, 0x86, 0xcc, 0x48, 0x00, 
	0xbc, 0xbe, 0x02, 0x02, 0xbc, 0xbe, 0x02, 0x00, 
	0x1c, 0x3e, 0x2a, 0x6a, 0xaa, 0xba, 0x98, 0x00, 
	0x44, 0x8e, 0xaa, 0xaa, 0xbc, 0x9e, 0x42, 0x00, 
	0x84, 0xae, 0x2a, 0x2a, 0xbc, 0x9e, 0x02, 0x00, 
	0x84, 0xae, 0xaa, 0x6a, 0x3c, 0x1e, 0x02, 0x00, 
	0x04, 0x2e, 0xea, 0xea, 0x3c, 0x1e, 0x02, 0x00, 
	0x18, 0x3d, 0x25, 0x27, 0x26, 0x24, 0x00, 0x00, 
	0x5c, 0xbe, 0xaa, 0xaa, 0xaa, 0xba, 0x58, 0x00, 
	0x9c, 0xbe, 0x2a, 0x2a, 0x2a, 0xba, 0x98, 0x00, 
	0x9c, 0xbe, 0xaa, 0x6a, 0x2a, 0x3a, 0x18, 0x00, 
	0x00, 0x80, 0xa2, 0x3e, 0x3e, 0x82, 0x80, 0x00, 
	0x40, 0x80, 0xa2, 0xbe, 0xbe, 0x82, 0x40, 0x00, 
	0x80, 0x80, 0xa2, 0x7e, 0x3e, 0x02, 0x00, 0x00, 
	0x9e, 0xbe, 0x28, 0x28, 0x28, 0xbe, 0x9e, 0x00, 
	0x1e, 0x3e, 0xe8, 0xe8, 0xe8, 0x3e, 0x1e, 0x00, 
	0x22, 0x3e, 0x3e, 0x6a, 0xaa, 0xa2, 0xa2, 0x00, 
	0x04, 0x2e, 0x2a, 0x3e, 0x2a, 0x2a, 0x1a, 0x00, 
	0x7e, 0xfe, 0x90, 0x90, 0xfe, 0x92, 0x92, 0x00, 
	0x5c, 0xbe, 0xa2, 0xa2, 0xa2, 0xbe, 0x5c, 0x00, 
	0x9c, 0xbe, 0x22, 0x22, 0x22, 0xbe, 0x9c, 0x00, 
	0x9c, 0xbe, 0xa2, 0x62, 0x22, 0x3e, 0x1c, 0x00, 
	0x7c, 0xbe, 0x82, 0x82, 0xbc, 0xbe, 0x42, 0x00, 
	0xbc, 0xbe, 0x82, 0x42, 0x3c, 0x3e, 0x02, 0x00, 
	0xb9, 0xbd, 0x05, 0x05, 0xbf, 0xbe, 0x00, 0x00, 
	0xbc, 0xfe, 0x42, 0x42, 0x42, 0xfe, 0xbc, 0x00, 
	0xbc, 0xbe, 0x02, 0x02, 0x02, 0xbe, 0xbc, 0x00, 
	0x38, 0x7c, 0x44, 0xfe, 0xc6, 0x6c, 0x28, 0x00, 
	0x16, 0x7e, 0xfc, 0x96, 0xc2, 0x42, 0x04, 0x00, 
	0x00, 0x94, 0xd4, 0x7e, 0x7e, 0xd4, 0x94, 0x00, 
	0xfe, 0xfe, 0xa0, 0xa4, 0xee, 0x5f, 0x05, 0x00, 
	0x02, 0x03, 0x11, 0x7f, 0xfe, 0x90, 0xc0, 0x40, 
	0x04, 0x2e, 0x2a, 0x6a, 0xbc, 0x9e, 0x82, 0x00, 
	0x00, 0x00, 0x22, 0x7e, 0xbe, 0x82, 0x80, 0x00, 
	0x1c, 0x3e, 0x22, 0x62, 0xa2, 0xbe, 0x9c, 0x00, 
	0x3c, 0x3e, 0x02, 0x42, 0xbc, 0xbe, 0x82, 0x00, 
	0x60, 0xbe, 0x9e, 0x60, 0x60, 0xbe, 0x9e, 0x00, 
	0x7e, 0xbe, 0xb0, 0x58, 0x4c, 0xbe, 0xbe, 0x00, 
	0x00, 0x04, 0xb4, 0xb4, 0xe4, 0x74, 0x04, 0x00, 
	0x00, 0x64, 0xf4, 0x94, 0xf4, 0x64, 0x00, 0x00, 
	0x0c, 0x1e, 0xb2, 0xa2, 0x02, 0x0e, 0x0c, 0x00, 
	0x1c, 0x1c, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 
	0x10, 0x10, 0x10, 0x10, 0x1c, 0x1c, 0x00, 0x00, 
	0xf4, 0xf8, 0x10, 0x32, 0x56, 0x1e, 0x1a, 0x00, 
	0xf4, 0xf8, 0x14, 0x2c, 0x5e, 0x1e, 0x04, 0x00, 
	0x00, 0x00, 0x0c, 0xbe, 0xbe, 0x0c, 0x00, 0x00, 
	0x10, 0x38, 0x6c, 0x54, 0x38, 0x6c, 0x44, 0x00, 
	0x44, 0x6c, 0x38, 0x54, 0x6c, 0x38, 0x10, 0x00, 
	0x55, 0x00, 0xaa, 0x00, 0x55, 0x00, 0xaa, 0x00, 
	0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 
	0xbb, 0xff, 0x55, 0xee, 0xbb, 0x55, 0xff, 0xee, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
	0x08, 0x08, 0x08, 0xff, 0xff, 0x00, 0x00, 0x00, 
	0x28, 0x28, 0x28, 0xff, 0xff, 0x00, 0x00, 0x00, 
	0x08, 0x08, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
	0x08, 0x08, 0x0f, 0x0f, 0x08, 0x0f, 0x0f, 0x00, 
	0x28, 0x28, 0x28, 0x3f, 0x3f, 0x00, 0x00, 0x00, 
	0x28, 0x28, 0xef, 0xef, 0x00, 0xff, 0xff, 0x00, 
	0x00, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 
	0x28, 0x28, 0x2f, 0x2f, 0x20, 0x3f, 0x3f, 0x00, 
	0x28, 0x28, 0xe8, 0xe8, 0x08, 0xf8, 0xf8, 0x00, 
	0x08, 0x08, 0xf8, 0xf8, 0x08, 0xf8, 0xf8, 0x00, 
	0x28, 0x28, 0x28, 0xf8, 0xf8, 0x00, 0x00, 0x00, 
	0x08, 0x08, 0x08, 0x0f, 0x0f, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf8, 0xf8, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0xf8, 0xf8, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x0f, 0x0f, 0x08, 0x08, 0x08, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0xff, 0xff, 0x08, 0x08, 0x08, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0x28, 0x28, 0x28, 
	0x00, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x08, 
	0x00, 0x00, 0xf8, 0xf8, 0x08, 0xe8, 0xe8, 0x28, 
	0x00, 0x00, 0x3f, 0x3f, 0x20, 0x2f, 0x2f, 0x28, 
	0x28, 0x28, 0xe8, 0xe8, 0x08, 0xe8, 0xe8, 0x28, 
	0x28, 0x28, 0x2f, 0x2f, 0x20, 0x2f, 0x2f, 0x28, 
	0x00, 0x00, 0xff, 0xff, 0x00, 0xef, 0xef, 0x28, 
	0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 
	0x28, 0x28, 0xef, 0xef, 0x00, 0xef, 0xef, 0x28, 
	0x28, 0x28, 0x28, 0xe8, 0xe8, 0x28, 0x28, 0x28, 
	0x08, 0x08, 0xf8, 0xf8, 0x08, 0xf8, 0xf8, 0x08, 
	0x28, 0x28, 0x28, 0x2f, 0x2f, 0x28, 0x28, 0x28, 
	0x08, 0x08, 0x0f, 0x0f, 0x08, 0x0f, 0x0f, 0x08, 
	0x00, 0x00, 0xf8, 0xf8, 0x08, 0xf8, 0xf8, 0x08, 
	0x00, 0x00, 0x00, 0xf8, 0xf8, 0x28, 0x28, 0x28, 
	0x00, 0x00, 0x00, 0x3f, 0x3f, 0x28, 0x28, 0x28, 
	0x00, 0x00, 0x0f, 0x0f, 0x08, 0x0f, 0x0f, 0x08, 
	0x08, 0x08, 0xff, 0xff, 0x08, 0xff, 0xff, 0x08, 
	0x28, 0x28, 0x28, 0xff, 0xff, 0x28, 0x28, 0x28, 
	0x08, 0x08, 0x08, 0xf8, 0xf8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0f, 0x0f, 0x08, 0x08, 0x08, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
	0x1c, 0x3e, 0x22, 0x26, 0x1c, 0x36, 0x02, 0x00, 
	0x7e, 0xff, 0x80, 0xa2, 0xf2, 0x5e, 0x0c, 0x00, 
	0x82, 0xfe, 0xfe, 0x82, 0x80, 0x80, 0xc0, 0x00, 
	0x10, 0x3e, 0x3c, 0x20, 0x3e, 0x3c, 0x60, 0x00, 
	0x82, 0xc6, 0xee, 0xba, 0x92, 0x82, 0xc6, 0x00, 
	0x1c, 0x3e, 0x22, 0x32, 0x2c, 0x20, 0x20, 0x00, 
	0x3f, 0x3e, 0x02, 0x02, 0x3e, 0x3c, 0x00, 0x00, 
	0x10, 0x30, 0x20, 0x3e, 0x3c, 0x20, 0x20, 0x00, 
	0x18, 0x3c, 0xa5, 0xff, 0xa5, 0x3c, 0x18, 0x00, 
	0x7c, 0xfe, 0x92, 0x92, 0x92, 0xfe, 0x7c, 0x00, 
	0x72, 0xfa, 0x8e, 0x80, 0x8e, 0xfa, 0x72, 0x00, 
	0x0c, 0x1e, 0xd2, 0xb2, 0xbe, 0x9c, 0x40, 0x00, 
	0x18, 0x24, 0x24, 0x18, 0x18, 0x24, 0x24, 0x18, 
	0x1a, 0x2e, 0x2c, 0x3c, 0x34, 0x74, 0x58, 0x00, 
	0x1c, 0x3e, 0x2a, 0x2a, 0x2a, 0x22, 0x00, 0x00, 
	0x3e, 0x7e, 0x40, 0x40, 0x40, 0x7e, 0x3e, 0x00, 
	0x54, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54, 0x00, 
	0x00, 0x22, 0x22, 0xfa, 0xfa, 0x22, 0x22, 0x00, 
	0x00, 0x02, 0x8a, 0xda, 0x72, 0x22, 0x00, 0x00, 
	0x00, 0x22, 0x72, 0xda, 0x8a, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0xe0, 0x60, 
	0x06, 0x07, 0x01, 0xff, 0xfe, 0x00, 0x00, 0x00, 
	0x00, 0x10, 0x10, 0x54, 0x54, 0x10, 0x10, 0x00, 
	0x24, 0x6c, 0x48, 0x6c, 0x24, 0x6c, 0x48, 0x00, 
	0x00, 0x40, 0xe0, 0xa0, 0xe0, 0x40, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 
	0x08, 0x0c, 0x0e, 0x02, 0xfe, 0xfe, 0x80, 0x80, 
	0x80, 0xf0, 0x70, 0x80, 0xf0, 0x70, 0x00, 0x00, 
	0xb0, 0xb0, 0xd0, 0xd0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x3c, 0x3c, 0x3c, 0x3c, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    };
    
    void Font::drawCharacter(u8 *screen, char character, int x, int y, Color color)
    {
        u32 yy;
        u8 *screenPos, *screenStart = screen + (x * SCREEN_HEIGHT + SCREEN_HEIGHT - y - 1) * BYTES_PER_PIXEL;

        u32 charPos = character * FONT_SIZE;
        u8 charVal;
        for (screenPos = screenStart; screenPos < screenStart + (SCREEN_HEIGHT - FONT_SIZE) * BYTES_PER_PIXEL * FONT_SIZE; screenPos += (SCREEN_HEIGHT - FONT_SIZE) * BYTES_PER_PIXEL)
        {
            charVal = Font::font[charPos++];
            for (yy = FONT_SIZE; yy--;)
            {
                if (charVal & 1)
                {
                    *(screenPos++) = color.b;
                    *(screenPos++) = color.g;
                    *(screenPos++) = color.r;
                }
                else
                {
                    screenPos += 3;
                }
                charVal >>= 1;
            }
        }
    }
    
    void Font::drawString(u8 *screen, const char *str, int x, int y, Color color)
    {
        for (int i = 0; i < (int)strlen(str); i++) {
            Font::drawCharacter(screen, str[i], x + i * FONT_SIZE, y, color);
        }
    }
    
    int Font::stringLength(const char *str) {
        return (FONT_SIZE * strlen(str));
    }
    
    void Font::drawString(u8 *screen, Rectangle2D dimensions, const char *str, Color color) {
        int length = Font::stringLength(str) / 2;
        Font::drawString(screen, str, dimensions.x + dimensions.width / 2 - length, dimensions.y + dimensions.height / 2 + 2, color);
    }

    void Font::drawString(u8 *screen, Vector2 position, const char *str, Color color) {
        Font::drawString(screen, str, position.x, position.y, color);
    }
}