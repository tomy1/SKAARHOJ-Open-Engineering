#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 12	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 1264 814\" width=\"70%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"1184\" height=\"780\" x=40 y=17 style=\"fill:url(#grad1);\" /><rect width=\"1184\" height=\"10\" x=40 y=85 style=\"fill:rgb(0,0,100);\" /><rect width=\"1184\" height=\"10\" x=40 y=729 style=\"fill:rgb(0,0,100);\" /><rect width=\"90\" height=\"814\" x=0 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /><rect width=\"90\" height=\"814\" x=1174 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 17392, GZIP size: 5614 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6B, 0x73, 0x9B, 0xC8, 0x96, 0xDF, 0xF7, 0x57, 
	0x10, 0x52, 0x23, 0x8B, 0x15, 0x92, 0x01, 0x09, 0x49, 0x16, 
	0x96, 0xBD, 0xB6, 0xE3, 0x4C, 0x5C, 0x63, 0x4F, 0x5C, 0x51, 
	0x1E, 0xB3, 0xAB, 0x52, 0xA5, 0x10, 0x34, 0x12, 0x36, 0x02, 
	0x2D, 0x20, 0x3B, 0x5E, 0xDB, 0xFF, 0x7D, 0xCF, 0xE9, 0x6E, 
	0xA0, 0x41, 0x92, 0x23, 0x27, 0xF7, 0x66, 0x6A, 0xD4, 0xCF, 
	0xF3, 0xE8, 0xF3, 0xEA, 0xD3, 0xDD, 0xF8, 0xCE, 0x8E, 0xA5, 
	0x0F, 0xDF, 0x9C, 0xE1, 0x78, 0xAC, 0xAB, 0x86, 0xDE, 0x57, 
	0x4D, 0xA3, 0xA3, 0xCA, 0xBA, 0xAC, 0x1A, 0x13, 0x15, 0x7A, 
	0xDA, 0x3D, 0x9D, 0xF5, 0x18, 0x59, 0x8F, 0x69, 0x98, 0xAC, 
	0xA7, 0x9D, 0xF5, 0x74, 0x7B, 0x07, 0xAC, 0xA7, 0x93, 0xF5, 
	0xF4, 0xDB, 0x06, 0xEB, 0x31, 0xB3, 0x1E, 0x5D, 0x33, 0xDB, 
	0xAC, 0xEB, 0xEC, 0xCB, 0xE7, 0xA7, 0x93, 0x2F, 0x9F, 0x3F, 
	0x66, 0x23, 0x48, 0xB3, 0x6D, 0x18, 0xAA, 0x7C, 0x22, 0xD2, 
	0xA4, 0x3D, 0xA7, 0xAC, 0xA7, 0xA3, 0x76, 0xBB, 0x26, 0xEB, 
	0x19, 0x5D, 0x5E, 0xBC, 0x3B, 0xFF, 0x04, 0xDD, 0x1A, 0xF4, 
	0xB7, 0x11, 0xAD, 0xD6, 0x57, 0x8D, 0xBE, 0xA9, 0xCA, 0xEF, 
	0xFC, 0x64, 0x19, 0xD8, 0x0F, 0xB2, 0xDA, 0xE6, 0x43, 0x07, 
	0x66, 0x36, 0x02, 0x8B, 0xE9, 0xE5, 0xF3, 0xF3, 0x5E, 0x83, 
	0xF6, 0x4E, 0xAC, 0xFF, 0xB8, 0x03, 0x01, 0xB8, 0xE4, 0xEE, 
	0x32, 0x49, 0xA9, 0x0C, 0xE4, 0x93, 0xCF, 0xE7, 0x57, 0xB2, 
	0xAA, 0x23, 0x2B, 0x30, 0x6F, 0xF4, 0x90, 0xA4, 0x64, 0x21, 
	0x0B, 0x13, 0xDF, 0xAF, 0x42, 0x94, 0xD6, 0x58, 0x87, 0xB9, 
	0xD7, 0x71, 0x34, 0x8B, 0xED, 0x85, 0x34, 0x8A, 0x1D, 0x59, 
	0x6D, 0xEA, 0x6A, 0xD3, 0x50, 0xC7, 0xB2, 0xAC, 0xCA, 0x1F, 
	0xA2, 0xC0, 0x95, 0xDE, 0x45, 0xF7, 0x21, 0xD4, 0x3F, 0x47, 
	0xB3, 0x59, 0x40, 0xA0, 0x72, 0xF6, 0xE0, 0x40, 0x39, 0x41, 
	0xC4, 0x14, 0x94, 0xDC, 0xF9, 0xE4, 0x7E, 0x0D, 0xB4, 0x3A, 
	0xEB, 0x6E, 0xFF, 0x3A, 0x9E, 0xFD, 0x64, 0xD6, 0xC9, 0x97, 
	0x7F, 0xA4, 0x8F, 0xAB, 0x74, 0xB9, 0x4A, 0xF9, 0xC4, 0xF6, 
	0xCB, 0x9C, 0xD0, 0xCE, 0x3F, 0xE3, 0x68, 0xB5, 0x94, 0x4E, 
	0xCA, 0xCD, 0xD3, 0x35, 0xDC, 0x5F, 0x96, 0x49, 0x1A, 0x13, 
	0x58, 0xE3, 0x5F, 0xE4, 0x81, 0xC4, 0x8C, 0x89, 0x8E, 0xDA, 
	0x34, 0x37, 0x0E, 0x4B, 0xEF, 0xFD, 0x20, 0xC8, 0xE7, 0x18, 
	0x9B, 0xE7, 0xC0, 0xEF, 0xDA, 0x14, 0xE4, 0xB0, 0x42, 0xA7, 
	0x5B, 0x10, 0xA9, 0x8E, 0x66, 0x64, 0xBA, 0xDB, 0x11, 0x70, 
	0x2A, 0xC2, 0x8C, 0xAB, 0x6B, 0x69, 0x94, 0x32, 0xB8, 0x1E, 
	0x35, 0x33, 0x1C, 0xD8, 0x45, 0x59, 0x46, 0x5F, 0x95, 0xEB, 
	0x19, 0xB4, 0x44, 0x07, 0x94, 0x02, 0x09, 0x98, 0x48, 0x6A, 
	0xC7, 0xA9, 0x3C, 0xC9, 0x9A, 0xE7, 0xA1, 0x8B, 0x0D, 0x4D, 
	0xD5, 0x0D, 0x0D, 0x54, 0xB3, 0x4A, 0x23, 0xE9, 0x22, 0x4C, 
	0x49, 0x7C, 0x67, 0x07, 0x32, 0xA7, 0xF8, 0xC9, 0x0E, 0xDD, 
	0x68, 0x41, 0x5B, 0x39, 0xC1, 0x8F, 0x48, 0xFE, 0xA3, 0xE7, 
	0x95, 0x18, 0x2A, 0xD1, 0x3F, 0x0B, 0xFC, 0x25, 0x23, 0x6C, 
	0x94, 0xBA, 0xA3, 0x30, 0x8D, 0xA3, 0x80, 0x8D, 0x34, 0xFB, 
	0x7C, 0xB5, 0x67, 0xAB, 0x14, 0x85, 0x9C, 0x19, 0x08, 0x70, 
	0x21, 0x34, 0xDF, 0x7F, 0x3E, 0x15, 0x5A, 0x9F, 0x63, 0x3B, 
	0x4C, 0xFC, 0xD4, 0x8F, 0x42, 0x58, 0xE2, 0x03, 0x32, 0x83, 
	0xCA, 0x39, 0xA0, 0x34, 0x4A, 0xA3, 0xD7, 0x51, 0x22, 0x80, 
	0x5D, 0x83, 0xBB, 0x49, 0x57, 0xB6, 0x13, 0x03, 0x66, 0xEA, 
	0xE1, 0xB8, 0x9C, 0x6B, 0xEA, 0x83, 0x20, 0x92, 0x68, 0xB9, 
	0x66, 0x70, 0x5C, 0xC4, 0x5C, 0xB2, 0x4C, 0x12, 0x97, 0x11, 
	0x4C, 0x2C, 0x56, 0xF9, 0x89, 0x38, 0x51, 0xEC, 0x32, 0xAC, 
	0x0A, 0x45, 0x0B, 0x9E, 0x9E, 0x8F, 0x8E, 0xA2, 0x55, 0xEC, 
	0x90, 0x5C, 0x03, 0x63, 0xF9, 0x6A, 0xFF, 0x5C, 0x02, 0xEF, 
	0xA6, 0x25, 0xF8, 0x33, 0xF5, 0x03, 0x9D, 0x97, 0x59, 0xBB, 
	0xCD, 0xCB, 0x0E, 0x2F, 0x4D, 0x5E, 0x76, 0x91, 0x85, 0xA6, 
	0xA8, 0xBE, 0xE6, 0xAB, 0x95, 0x07, 0xAD, 0xAF, 0x76, 0xFC, 
	0x20, 0xA5, 0xFE, 0xC2, 0x0F, 0x67, 0x92, 0xA1, 0xFD, 0x51, 
	0xE9, 0x31, 0xA1, 0x67, 0x47, 0x2D, 0x53, 0x2D, 0xB9, 0x3E, 
	0x55, 0x93, 0x06, 0xFF, 0xEB, 0x3B, 0x19, 0x67, 0x8F, 0x43, 
	0x49, 0x5F, 0xA3, 0x60, 0xB5, 0xA0, 0xAA, 0xD3, 0xC4, 0xEE, 
	0x53, 0x3B, 0xB0, 0x43, 0x27, 0xEF, 0xC7, 0x00, 0xCC, 0x06, 
	0x2E, 0xC9, 0x1D, 0x09, 0x12, 0x61, 0xBE, 0xA0, 0xE7, 0x4F, 
	0x76, 0xCA, 0x8C, 0x60, 0xCC, 0x29, 0x81, 0x84, 0xFD, 0x1F, 
	0x32, 0x06, 0x59, 0xD4, 0xEA, 0x37, 0x7F, 0x89, 0x5D, 0xEF, 
	0xBE, 0x9E, 0xCB, 0xDC, 0x94, 0xE4, 0x77, 0xA3, 0xBF, 0x74, 
	0x56, 0x18, 0xCC, 0x11, 0x0C, 0x13, 0x62, 0xE7, 0x7B, 0x08, 
	0x8D, 0x24, 0x11, 0xD4, 0xAB, 0x30, 0xAC, 0xDB, 0x86, 0x2B, 
	0x71, 0xE2, 0xDA, 0x86, 0x09, 0x08, 0x02, 0x71, 0x42, 0x2F, 
	0x4C, 0x7E, 0xCD, 0xD3, 0xF3, 0x79, 0x5D, 0x3E, 0xAF, 0x0D, 
	0xB8, 0x23, 0x67, 0x45, 0x57, 0xD7, 0x66, 0xAB, 0xBB, 0x88, 
	0xFD, 0xBC, 0x09, 0xC3, 0x23, 0x12, 0x26, 0x51, 0x2C, 0xFD, 
	0x69, 0xFB, 0x21, 0xED, 0x15, 0x56, 0xAA, 0xB9, 0x53, 0xF8, 
	0xED, 0xD2, 0x5F, 0xDD, 0x60, 0x45, 0x1F, 0x8A, 0x09, 0x87, 
	0x9C, 0xAF, 0xD2, 0x94, 0xC5, 0x41, 0x11, 0x4A, 0xDF, 0x37, 
	0x35, 0x5A, 0x74, 0x59, 0xD1, 0x33, 0x69, 0x71, 0xC0, 0x5A, 
	0xB0, 0x4D, 0xB1, 0xD2, 0xE0, 0x25, 0x9F, 0xAC, 0xF7, 0x59, 
	0x69, 0xF0, 0x76, 0x9B, 0x43, 0x9B, 0x7C, 0x7E, 0xCF, 0x30, 
	0x33, 0x78, 0x0E, 0xD0, 0xE1, 0x33, 0x0D, 0xEC, 0xE1, 0x2C, 
	0x7D, 0x9B, 0xFB, 0x29, 0x11, 0x35, 0x2D, 0x32, 0x06, 0xA8, 
	0xB5, 0xBF, 0xB0, 0xEC, 0xB3, 0xB2, 0xAD, 0xF1, 0xD2, 0xE0, 
	0x65, 0x87, 0x97, 0x5D, 0x56, 0x76, 0xF8, 0x78, 0x87, 0xC3, 
	0x75, 0x38, 0x9C, 0xC9, 0xFB, 0x4D, 0x0E, 0x67, 0x72, 0x38, 
	0x93, 0xC3, 0x75, 0xF9, 0x78, 0x97, 0xC3, 0xF5, 0x78, 0xBB, 
	0xC7, 0xDB, 0x7D, 0xDA, 0xE6, 0x26, 0x7B, 0xE9, 0x7B, 0x34, 
	0x3A, 0x75, 0x0A, 0x05, 0xFD, 0x69, 0x2F, 0x16, 0xF6, 0x5A, 
	0x1F, 0x53, 0x8F, 0xD0, 0xF5, 0x61, 0x45, 0x04, 0xAD, 0xD2, 
	0xD0, 0x67, 0x27, 0xA9, 0xD0, 0x35, 0xB2, 0xD3, 0x55, 0x6C, 
	0xA3, 0x19, 0x67, 0x92, 0xF8, 0x3B, 0x8A, 0x17, 0xE0, 0xBD, 
	0x60, 0x9D, 0x24, 0x61, 0x83, 0xC4, 0x65, 0x46, 0x07, 0x19, 
	0x86, 0x1D, 0x27, 0xD9, 0xBC, 0x9F, 0xF8, 0x28, 0x0D, 0xEF, 
	0x1A, 0x9A, 0x8E, 0x13, 0x85, 0x6E, 0x92, 0x09, 0xFF, 0x1D, 
	0x49, 0x6D, 0x3F, 0xC8, 0x70, 0x30, 0xA8, 0xCB, 0xE8, 0x1E, 
	0x5D, 0x86, 0xB8, 0xFE, 0x6A, 0x81, 0x48, 0xFC, 0xD9, 0x3C, 
	0x9B, 0x7E, 0x76, 0xF6, 0x45, 0x1A, 0x91, 0x34, 0x85, 0xE0, 
	0x90, 0x13, 0xC6, 0x98, 0x42, 0x1C, 0x1B, 0x77, 0x26, 0x60, 
	0xFF, 0x8E, 0x30, 0x5A, 0x5D, 0xE4, 0x2E, 0xBC, 0xCD, 0x38, 
	0xFD, 0x44, 0x12, 0x92, 0x66, 0x10, 0x4C, 0x7E, 0x99, 0xCC, 
	0xB8, 0x9C, 0xE4, 0x13, 0xC0, 0x80, 0xB3, 0x0F, 0x20, 0x06, 
	0xF9, 0x2E, 0x89, 0xA4, 0xCF, 0x80, 0x13, 0x37, 0x41, 0x4C, 
	0x05, 0x78, 0xA6, 0x22, 0xE7, 0x89, 0x87, 0xCC, 0xB2, 0x97, 
	0x7D, 0x6C, 0x66, 0x60, 0x2C, 0x34, 0x64, 0x60, 0x34, 0x32, 
	0x30, 0x9F, 0x3B, 0x9B, 0xC7, 0xD1, 0xC2, 0x46, 0x7F, 0xCB, 
	0xB9, 0xA7, 0x01, 0x78, 0x03, 0xEB, 0xE0, 0xAD, 0x55, 0xEE, 
	0x29, 0x8A, 0xEB, 0x8B, 0x6B, 0xEA, 0xFE, 0x26, 0x97, 0x1B, 
	0x46, 0x0F, 0x96, 0x04, 0x00, 0x73, 0x11, 0x8B, 0x3C, 0x88, 
	0x05, 0xB0, 0x01, 0xFA, 0x2C, 0xBC, 0x82, 0xE5, 0xFF, 0xD1, 
	0x04, 0x93, 0xFB, 0x43, 0xFA, 0x9F, 0x08, 0x83, 0x2E, 0xE2, 
	0x63, 0x79, 0xD9, 0x1C, 0x64, 0xC0, 0xA2, 0x98, 0xCC, 0xE2, 
	0x35, 0xC8, 0x9D, 0xB6, 0x7E, 0xBA, 0xAB, 0x4B, 0x5F, 0x96, 
	0x79, 0xB5, 0x88, 0xBF, 0x26, 0xDD, 0x09, 0x30, 0xF0, 0x01, 
	0xB6, 0x83, 0xAC, 0xF1, 0xEB, 0xC8, 0xAE, 0xC8, 0x22, 0x8A, 
	0x1F, 0x50, 0x48, 0x98, 0x62, 0xD1, 0xBC, 0x0A, 0x6D, 0x10, 
	0x30, 0x62, 0xF0, 0x7B, 0x35, 0x56, 0x06, 0x71, 0x4D, 0xE2, 
	0xC4, 0x07, 0x7B, 0xE7, 0x7E, 0xC4, 0x26, 0x6C, 0xA7, 0x04, 
	0x2B, 0xE1, 0x91, 0x96, 0x6D, 0x58, 0xBC, 0xF9, 0x39, 0xDA, 
	0x71, 0xEC, 0x84, 0xED, 0x86, 0x55, 0xCA, 0x34, 0x85, 0x08, 
	0xEC, 0x19, 0x15, 0x55, 0xB7, 0xCD, 0x1B, 0x38, 0x71, 0x84, 
	0x36, 0xBA, 0x69, 0x5D, 0x1C, 0xCB, 0x45, 0x78, 0x47, 0xD8, 
	0x66, 0x4B, 0x95, 0xBB, 0x48, 0xA8, 0x8A, 0x79, 0xC1, 0x4A, 
	0x93, 0x97, 0x3A, 0xFE, 0x18, 0x09, 0xE3, 0x86, 0x12, 0x21, 
	0xC4, 0x9D, 0xDA, 0xCE, 0xAD, 0x94, 0x53, 0x13, 0x10, 0xD2, 
	0x59, 0xF2, 0x67, 0x9F, 0x48, 0xB0, 0x63, 0x7F, 0xF8, 0x76, 
	0xF6, 0x56, 0xC6, 0xB3, 0x01, 0xEB, 0x65, 0x29, 0x3C, 0xEC, 
	0xE3, 0x1E, 0x5F, 0x1B, 0x84, 0x04, 0xE9, 0xC4, 0xA1, 0x06, 
	0xC7, 0xDA, 0xDF, 0x6C, 0x3F, 0x95, 0x30, 0xCC, 0x26, 0x52, 
	0x42, 0xDD, 0x1B, 0x4E, 0x18, 0x26, 0x87, 0x3E, 0x5B, 0x25, 
	0x69, 0xB4, 0x90, 0x3E, 0xC0, 0xAE, 0x1F, 0x40, 0xDC, 0xE7, 
	0xCB, 0xBF, 0x08, 0x6D, 0x40, 0x70, 0xC7, 0x4D, 0x04, 0x7B, 
	0x30, 0xE5, 0x91, 0x00, 0x36, 0x24, 0x0E, 0x4B, 0x06, 0x99, 
	0xD5, 0xDB, 0x21, 0x09, 0xA4, 0xD3, 0x18, 0x42, 0x40, 0x1A, 
	0x92, 0x04, 0xBD, 0x46, 0x70, 0xAB, 0x4B, 0xC8, 0x12, 0xD2, 
	0x84, 0xF2, 0xAB, 0x64, 0x0C, 0xB3, 0x91, 0xF7, 0x7E, 0x48, 
	0x60, 0x1F, 0x0E, 0x67, 0x44, 0x1C, 0xCD, 0x4E, 0x21, 0x90, 
	0x8D, 0xC0, 0x71, 0x25, 0x81, 0x53, 0x48, 0x25, 0x05, 0x42, 
	0xA9, 0x9C, 0x06, 0x20, 0x24, 0x98, 0xAF, 0x1A, 0x6A, 0x5B, 
	0xED, 0xA8, 0x26, 0xF8, 0x62, 0x4F, 0xED, 0x83, 0x49, 0x43, 
	0x5A, 0x01, 0x8C, 0x82, 0xA3, 0x40, 0x0C, 0x81, 0x98, 0x0A, 
	0x46, 0xAA, 0x77, 0x55, 0xBD, 0xA7, 0xC2, 0x01, 0x4C, 0x3F, 
	0x50, 0x31, 0xDF, 0x61, 0xE1, 0x10, 0xC2, 0x6A, 0x10, 0xC5, 
	0x7A, 0x56, 0xC1, 0x44, 0xEA, 0xEA, 0x9A, 0xD2, 0xB8, 0xC6, 
	0xFA, 0x68, 0xB5, 0x84, 0x4D, 0x97, 0xE5, 0x62, 0x38, 0x27, 
	0x20, 0x76, 0x48, 0x59, 0x60, 0xB5, 0xD7, 0xE7, 0x61, 0x80, 
	0xF8, 0x5C, 0x97, 0xE0, 0x94, 0x93, 0xD7, 0xEE, 0x68, 0xCD, 
	0xC8, 0xFB, 0x8C, 0xAC, 0xEF, 0x2B, 0x28, 0x89, 0x97, 0x06, 
	0x2F, 0xDB, 0xBC, 0xEC, 0xF0, 0xD2, 0xE4, 0x65, 0x97, 0x97, 
	0x3D, 0x5E, 0xF6, 0x69, 0x69, 0x70, 0x78, 0x83, 0xC3, 0x1B, 
	0x1C, 0xDE, 0xE0, 0xF0, 0x06, 0x87, 0x37, 0x38, 0xBC, 0xC1, 
	0xE1, 0x0D, 0x06, 0x0F, 0x66, 0x74, 0xC2, 0xCB, 0x53, 0x5E, 
	0x9E, 0xF1, 0x92, 0xFA, 0xDB, 0xEB, 0x33, 0x50, 0x99, 0xE5, 
	0x30, 0x08, 0xC3, 0x6A, 0x46, 0x5E, 0x6B, 0xE7, 0xB5, 0xCE, 
	0x0E, 0x49, 0x24, 0x4F, 0xF2, 0x71, 0x22, 0xA4, 0x61, 0x12, 
	0x4F, 0xC7, 0xB8, 0x4D, 0xC0, 0x31, 0x81, 0x29, 0x90, 0xB7, 
	0x69, 0x9A, 0x3E, 0x79, 0x39, 0xBF, 0x1B, 0x61, 0x98, 0xC7, 
	0x4C, 0x87, 0xC6, 0x6A, 0x96, 0xD5, 0xBD, 0xDA, 0xA2, 0xFE, 
	0xB9, 0xFC, 0x84, 0x9C, 0x9D, 0x8F, 0x70, 0xA7, 0x38, 0x3B, 
	0xA9, 0x98, 0xD2, 0x15, 0xEC, 0xDD, 0x94, 0xC2, 0x55, 0x14, 
	0xFA, 0x69, 0x14, 0xEF, 0x24, 0x62, 0xBA, 0xFA, 0x93, 0xF7, 
	0x5F, 0x91, 0x45, 0xB0, 0x4F, 0x2E, 0x1A, 0x64, 0xFC, 0x34, 
	0x4A, 0xC1, 0x55, 0x71, 0x03, 0x26, 0x74, 0x7F, 0xFC, 0x84, 
	0x5E, 0x07, 0xE5, 0x3F, 0xF0, 0xFF, 0x7F, 0xD3, 0x85, 0xB9, 
	0xE9, 0x1C, 0x85, 0x46, 0xF8, 0x00, 0x80, 0xED, 0x97, 0x80, 
	0xF6, 0x73, 0x90, 0xFD, 0x1C, 0x60, 0x9F, 0x4F, 0xA7, 0xE2, 
	0x82, 0xA4, 0x93, 0x9A, 0x3A, 0x94, 0x06, 0x2F, 0xDB, 0xBC, 
	0xEC, 0xF0, 0xD2, 0xE4, 0x65, 0x97, 0x97, 0x3D, 0x5E, 0xF6, 
	0x79, 0x79, 0xC0, 0x4B, 0x5D, 0xDB, 0x69, 0xB9, 0xC8, 0x07, 
	0xCA, 0xF0, 0x4F, 0x1A, 0xDB, 0x45, 0x9D, 0x41, 0x9A, 0x01, 
	0xB6, 0x91, 0x71, 0xCC, 0xF6, 0x82, 0xC4, 0xFF, 0x3F, 0x9A, 
	0x52, 0x5B, 0xFF, 0xE1, 0xAD, 0x42, 0x1A, 0xE2, 0xA4, 0xD9, 
	0xF9, 0xE9, 0x45, 0xDD, 0x56, 0x1E, 0x63, 0x02, 0xC9, 0x4F, 
	0x28, 0xB9, 0x90, 0x19, 0x2F, 0x48, 0x98, 0xB6, 0x66, 0x24, 
	0x3D, 0x0F, 0x08, 0x56, 0x4F, 0x1F, 0x2E, 0x5C, 0x98, 0xF1, 
	0x9C, 0x83, 0x40, 0xAA, 0x71, 0x52, 0xB7, 0xD5, 0xA9, 0xF2, 
	0xE8, 0x45, 0x71, 0x1D, 0x23, 0x8E, 0x23, 0xF9, 0xA1, 0x34, 
	0x55, 0xEC, 0x16, 0x0E, 0xA5, 0x69, 0xEC, 0x4F, 0x57, 0x29, 
	0xA9, 0x3B, 0xEA, 0x74, 0xEC, 0x4C, 0x14, 0x8B, 0xA3, 0xB6, 
	0x4B, 0x18, 0x2E, 0x19, 0x06, 0x3E, 0xC6, 0x51, 0x3E, 0x46, 
	0xA1, 0x13, 0xF8, 0xCE, 0xED, 0x60, 0x8F, 0xB2, 0x25, 0x7B, 
	0xE1, 0x5E, 0x63, 0xDA, 0xD8, 0x93, 0x95, 0x56, 0x02, 0x47, 
	0xBE, 0x20, 0x80, 0xC3, 0x56, 0xF4, 0x15, 0xB2, 0x93, 0xBA, 
	0x62, 0xED, 0xA9, 0xCE, 0x2A, 0x86, 0x2C, 0x7D, 0x20, 0x2F, 
	0x23, 0x1F, 0xCF, 0x60, 0xF2, 0xB3, 0xC0, 0xE2, 0x12, 0x72, 
	0x9E, 0xF4, 0x4A, 0x58, 0x57, 0x46, 0xC0, 0x83, 0x43, 0xFA, 
	0x40, 0x7E, 0xEB, 0xD2, 0x7F, 0xB2, 0x0A, 0x27, 0x85, 0xE8, 
	0x96, 0x40, 0x07, 0x4B, 0xA1, 0x59, 0xB3, 0x79, 0x4F, 0x2D, 
	0x61, 0x20, 0x1B, 0xEB, 0x38, 0x47, 0xDB, 0x71, 0x3A, 0xF4, 
	0x9F, 0x80, 0xB3, 0xDB, 0xED, 0xAE, 0xE3, 0xD4, 0x4B, 0x38, 
	0x9D, 0xF8, 0x7C, 0x5D, 0x0E, 0xB9, 0x0E, 0x1C, 0x38, 0xC6, 
	0xA4, 0x84, 0xAB, 0x01, 0x08, 0xC3, 0x44, 0x11, 0x74, 0xB4, 
	0x33, 0xEC, 0xDF, 0xA3, 0xBA, 0x3C, 0x4F, 0xD3, 0xE5, 0x60, 
	0x7F, 0xFF, 0xFE, 0xFE, 0xBE, 0x75, 0xDF, 0x6E, 0x45, 0xF1, 
	0x8C, 0x9E, 0x12, 0xF6, 0x93, 0x3B, 0x08, 0xA2, 0x15, 0xD4, 
	0x76, 0x86, 0xD9, 0x3E, 0xAB, 0x33, 0x45, 0x38, 0x69, 0x1C, 
	0xF8, 0x8B, 0x99, 0xDC, 0xA8, 0x4F, 0x8F, 0xA7, 0x03, 0x59, 
	0x56, 0x14, 0x84, 0x49, 0xE6, 0xF7, 0xA3, 0xBA, 0x08, 0x48, 
	0x3B, 0x40, 0x40, 0x55, 0x20, 0xFB, 0xD8, 0xA6, 0x40, 0xAD, 
	0x04, 0x6F, 0x10, 0x5A, 0x2E, 0xBB, 0x8D, 0x1B, 0xCA, 0xB2, 
	0x40, 0xF3, 0x8C, 0x93, 0x6C, 0xD9, 0xCB, 0x25, 0x09, 0xDD, 
	0xB3, 0xB9, 0x1F, 0xB8, 0x65, 0xE4, 0xE9, 0xDF, 0xF6, 0xE2, 
	0x7D, 0xE0, 0x26, 0x85, 0xED, 0xD9, 0x2D, 0x1F, 0x76, 0xD4, 
	0xF8, 0xC3, 0xE7, 0xAB, 0x4B, 0x40, 0xA6, 0xDE, 0x0C, 0x35, 
	0xEB, 0xE6, 0x50, 0x87, 0x9F, 0x46, 0x43, 0x99, 0x1E, 0xDD, 
	0xD4, 0x6A, 0x75, 0x8A, 0x16, 0xA5, 0x2C, 0xFB, 0xE1, 0x12, 
	0x2F, 0x3D, 0x1E, 0x7D, 0x77, 0x20, 0x53, 0x54, 0xDF, 0xE5, 
	0xC6, 0x8D, 0x1A, 0xC2, 0x21, 0x53, 0x6C, 0x53, 0x06, 0x07, 
	0x32, 0xD5, 0xD6, 0x00, 0x04, 0xB4, 0xFC, 0x61, 0xC9, 0x2A, 
	0x6C, 0xA8, 0x2B, 0x32, 0x48, 0x30, 0xE5, 0x4B, 0xC6, 0x37, 
	0x93, 0xE3, 0xBC, 0x06, 0x8B, 0x7A, 0x46, 0x51, 0x14, 0x6C, 
	0x34, 0x86, 0xF2, 0xE1, 0x34, 0xDE, 0x3F, 0x92, 0x05, 0xC6, 
	0xE3, 0xCB, 0x69, 0x20, 0x98, 0x8D, 0xDD, 0x8A, 0x09, 0x2C, 
	0xDF, 0x21, 0x75, 0xF9, 0x09, 0xEC, 0x03, 0xA6, 0x97, 0x66, 
	0xDF, 0xC7, 0xA3, 0x53, 0xB6, 0x42, 0xDF, 0xAB, 0x3B, 0x43, 
	0x26, 0xCA, 0xE4, 0x74, 0x2E, 0x37, 0xEC, 0x86, 0x0C, 0x3C, 
	0x4E, 0x15, 0xF5, 0xCD, 0x87, 0x6F, 0x20, 0xC2, 0xB1, 0x3D, 
	0x51, 0x1E, 0x37, 0x4F, 0x70, 0xCA, 0x72, 0x71, 0xB8, 0xDC, 
	0xE9, 0xAA, 0x86, 0x57, 0x76, 0x3A, 0x6F, 0x79, 0x41, 0x04, 
	0xF2, 0xD3, 0xD1, 0x00, 0xE8, 0x62, 0x5A, 0x01, 0x09, 0x67, 
	0xE9, 0xBC, 0xA9, 0x2B, 0x0D, 0xF9, 0x0F, 0xD9, 0xA2, 0x97, 
	0x99, 0x43, 0x2A, 0xB7, 0x79, 0x47, 0x56, 0xAC, 0xD2, 0xA4, 
	0x23, 0x1D, 0x04, 0xEB, 0x0A, 0x24, 0xCA, 0xA3, 0x5A, 0x26, 
	0x9F, 0xE9, 0xA4, 0xA8, 0x0D, 0xB4, 0xE1, 0x70, 0x7A, 0x9C, 
	0x9D, 0xB6, 0x06, 0x2C, 0x7F, 0x96, 0x80, 0x59, 0xB4, 0x0B, 
	0x15, 0xB4, 0xE4, 0xA8, 0x2E, 0x2D, 0xDD, 0xB2, 0xB6, 0xB2, 
	0x80, 0x20, 0xBB, 0x01, 0x88, 0x85, 0x2E, 0x51, 0x05, 0xA8, 
	0x06, 0xF0, 0x24, 0xAB, 0xE9, 0xC3, 0x12, 0x74, 0x05, 0xB1, 
	0x26, 0xC5, 0xC3, 0x01, 0xD3, 0x92, 0xDC, 0x84, 0x7E, 0x3F, 
	0x45, 0x25, 0xBE, 0x23, 0x01, 0xC1, 0x8C, 0xDD, 0x09, 0xEC, 
	0x24, 0x19, 0xC8, 0xC4, 0x4D, 0x99, 0xB6, 0xB6, 0x13, 0x71, 
	0x96, 0x0F, 0x3B, 0x52, 0x39, 0xBB, 0xCE, 0xC9, 0x9C, 0x45, 
	0xCB, 0x87, 0xD7, 0x10, 0xF1, 0xC3, 0x64, 0x47, 0x22, 0x17, 
	0x7F, 0x8F, 0x72, 0x2A, 0x17, 0x61, 0x82, 0xA9, 0x6C, 0x46, 
	0x07, 0x90, 0x48, 0x9C, 0xD6, 0x73, 0x16, 0x85, 0xC9, 0x50, 
	0x53, 0x3D, 0x70, 0x01, 0xEF, 0x70, 0xF4, 0xD7, 0xF7, 0xAB, 
	0x93, 0x7F, 0x4E, 0xCE, 0x3E, 0x5F, 0x7C, 0xFC, 0x7B, 0x64, 
	0x79, 0xE0, 0x0D, 0x60, 0x4B, 0x54, 0xC8, 0x94, 0xA5, 0x64, 
	0x69, 0x87, 0xDC, 0x13, 0xBC, 0xD0, 0xA1, 0x9C, 0x34, 0x29, 
	0x27, 0xF0, 0xEB, 0x71, 0xEE, 0xD7, 0xA7, 0xE2, 0x25, 0xD7, 
	0xFA, 0x54, 0xD0, 0xAB, 0x57, 0xAB, 0xA1, 0x76, 0x9F, 0x9E, 
	0x3E, 0x7C, 0xBB, 0x03, 0xA3, 0xAC, 0xD5, 0x58, 0x09, 0x5A, 
	0x17, 0xAA, 0x63, 0x0F, 0x5A, 0xDA, 0x9B, 0x61, 0x5D, 0x37, 
	0x4B, 0x9D, 0x63, 0x6D, 0xA2, 0x28, 0x6E, 0xFC, 0x3E, 0x1C, 
	0xA1, 0xD1, 0xAB, 0x9E, 0x62, 0x91, 0x20, 0x21, 0x12, 0xF0, 
	0xFB, 0x86, 0xD4, 0x6A, 0x82, 0xA5, 0x93, 0xA1, 0x4E, 0xCD, 
	0x72, 0x36, 0xCC, 0xF6, 0x86, 0x2A, 0xE7, 0x8A, 0x85, 0xF1, 
	0x6A, 0x9B, 0xFD, 0x50, 0x12, 0x82, 0xD4, 0xE1, 0xD7, 0x7B, 
	0x41, 0xF6, 0x0D, 0x2A, 0x5A, 0x21, 0xDC, 0x52, 0xD3, 0x28, 
	0xEF, 0x7A, 0xC3, 0x3C, 0xDA, 0xFE, 0xEF, 0x8A, 0xC4, 0x0F, 
	0x23, 0xB0, 0x37, 0x07, 0xF2, 0x14, 0x38, 0x69, 0xD7, 0x65, 
	0x70, 0x8F, 0x04, 0x2C, 0xDB, 0x05, 0x7D, 0xB8, 0x87, 0x0E, 
	0xF7, 0x0D, 0xCB, 0x05, 0x55, 0x38, 0x63, 0x77, 0xC2, 0x1D, 
	0xF2, 0xCE, 0x4F, 0xFC, 0xA9, 0x1F, 0xF8, 0x29, 0xC4, 0x42, 
	0x5A, 0x87, 0x9D, 0xDB, 0xF2, 0x93, 0xD8, 0x19, 0xDA, 0xEA, 
	0x0D, 0x16, 0xD3, 0x82, 0x01, 0x66, 0x36, 0x94, 0x01, 0x26, 
	0xBF, 0xA7, 0xA7, 0x3A, 0xAB, 0x0C, 0xC7, 0x13, 0x45, 0xCD, 
	0x65, 0x3A, 0xC4, 0x1A, 0xE2, 0xE0, 0xD2, 0xA7, 0xD5, 0x31, 
	0x62, 0x9B, 0x1C, 0x57, 0xDA, 0x83, 0xF1, 0x44, 0xCD, 0xC3, 
	0x8D, 0xF5, 0xEF, 0x59, 0xD6, 0xDC, 0x77, 0x5D, 0x12, 0x0A, 
	0x81, 0x9E, 0x3A, 0xB2, 0xB0, 0x0C, 0x88, 0x25, 0x05, 0xEF, 
	0xB8, 0x92, 0x9C, 0x23, 0x71, 0xED, 0x7E, 0x5A, 0x57, 0x1E, 
	0xEF, 0x63, 0x3F, 0x25, 0x67, 0xA3, 0x51, 0xBD, 0x60, 0xD6, 
	0xCE, 0xAC, 0x01, 0xA6, 0x02, 0x5F, 0x53, 0xE0, 0x6B, 0x7A, 
	0xF8, 0xE1, 0x5B, 0xCE, 0xD9, 0x94, 0xD9, 0x3E, 0xF4, 0xA0, 
	0xB9, 0x99, 0x93, 0x23, 0xAD, 0x56, 0xBB, 0xFA, 0xF8, 0x0E, 
	0x8D, 0x2A, 0xEF, 0x6B, 0xEA, 0xB4, 0xBB, 0xCE, 0x6C, 0x0D, 
	0xB8, 0xD0, 0x51, 0x9C, 0xAC, 0xAE, 0x3C, 0x0A, 0xA1, 0xD0, 
	0xF5, 0xEF, 0x72, 0xB7, 0x01, 0x1B, 0x7A, 0xA6, 0x06, 0x67, 
	0x43, 0xE0, 0xCA, 0xD9, 0xF1, 0x81, 0xBE, 0x7F, 0x58, 0x8A, 
	0x87, 0x96, 0x0F, 0x2C, 0x3C, 0x32, 0xCB, 0xAD, 0x60, 0xA1, 
	0x41, 0x7B, 0x4A, 0x83, 0xB6, 0xCF, 0x90, 0xB9, 0xEA, 0x8C, 
	0x0B, 0x60, 0xAA, 0xFA, 0x60, 0x7E, 0xE8, 0x0B, 0x8F, 0x4C, 
	0x29, 0x8F, 0xFA, 0x60, 0x8C, 0xD7, 0xCE, 0x3A, 0xBE, 0x6E, 
	0x19, 0x50, 0x37, 0xA1, 0x8E, 0xC7, 0xD0, 0x36, 0xD4, 0x7B, 
	0x90, 0x5E, 0xF7, 0x3A, 0x13, 0xB5, 0x23, 0xCC, 0x31, 0x07, 
	0xE3, 0xBE, 0xA6, 0xF6, 0xA1, 0xD6, 0x1D, 0x8C, 0xBB, 0x70, 
	0x4A, 0x86, 0x5A, 0x0F, 0xC6, 0xA1, 0xAA, 0x77, 0xA0, 0xAE, 
	0x6B, 0x83, 0x31, 0xEC, 0x70, 0x90, 0x8B, 0x63, 0x03, 0xB1, 
	0x1F, 0xC0, 0xC1, 0x1E, 0x4F, 0x99, 0xBA, 0x49, 0xA7, 0x41, 
	0x05, 0x20, 0x0D, 0x3A, 0x17, 0x00, 0x3B, 0x74, 0xE8, 0x80, 
	0x0F, 0x19, 0x08, 0x0D, 0x64, 0xF1, 0x41, 0xCD, 0x00, 0xE0, 
	0x36, 0xC0, 0x22, 0x07, 0x06, 0xB0, 0x66, 0x02, 0x0B, 0xB4, 
	0xBF, 0x4D, 0xFB, 0x4D, 0xCA, 0x31, 0xB0, 0xD6, 0xED, 0x99, 
	0xAC, 0xDF, 0xA4, 0xFD, 0xD0, 0x84, 0x3A, 0x65, 0x0E, 0x26, 
	0xF5, 0xA1, 0x0E, 0x54, 0xCC, 0x3E, 0x30, 0x8A, 0x73, 0xFA, 
	0x80, 0x9F, 0x02, 0x02, 0x45, 0xB3, 0xDD, 0x86, 0x75, 0x22, 
	0xC5, 0x0E, 0x1C, 0x2E, 0x60, 0x66, 0x1B, 0x28, 0x1A, 0x70, 
	0xB8, 0xE8, 0xF5, 0x7B, 0xD0, 0x00, 0x92, 0x50, 0x01, 0x36, 
	0x74, 0x68, 0xA0, 0x38, 0x3A, 0x70, 0xE6, 0x30, 0x10, 0x04, 
	0x88, 0x9A, 0x1A, 0x1C, 0x37, 0x3A, 0x06, 0x34, 0xFA, 0x38, 
	0x02, 0x9C, 0xE1, 0x82, 0xDA, 0x07, 0xB8, 0x78, 0x10, 0x18, 
	0x22, 0x05, 0x49, 0x62, 0x9F, 0x09, 0xF5, 0x0E, 0xAE, 0x03, 
	0x79, 0x34, 0x91, 0x02, 0x34, 0x3A, 0xB4, 0x01, 0x78, 0xDA, 
	0xBD, 0x1E, 0x74, 0x62, 0x03, 0x38, 0xEE, 0x9B, 0xBA, 0xDA, 
	0xEE, 0x02, 0xB9, 0x2E, 0xC0, 0x00, 0x42, 0xA0, 0x00, 0x6B, 
	0xEF, 0xEA, 0xAC, 0x61, 0x18, 0x40, 0xAE, 0x07, 0x23, 0x07, 
	0x5C, 0xEA, 0xD8, 0x0F, 0x62, 0x47, 0x41, 0xF7, 0x50, 0x75, 
	0x46, 0x97, 0xBE, 0x39, 0xF6, 0x91, 0x20, 0x9C, 0x89, 0x0C, 
	0xE4, 0xB5, 0x0F, 0x93, 0xFA, 0x3D, 0x43, 0xED, 0xF4, 0xBB, 
	0x13, 0x98, 0x09, 0x10, 0xC8, 0x16, 0x82, 0x1C, 0xE8, 0xB4, 
	0x01, 0x15, 0x0A, 0xAB, 0x4D, 0x9E, 0xAD, 0xE4, 0xDE, 0x4F, 
	0x9D, 0x79, 0x66, 0xD6, 0x1D, 0x30, 0x53, 0x97, 0x78, 0xF6, 
	0x2A, 0x48, 0x07, 0x98, 0x34, 0x8C, 0xF3, 0xFE, 0xC9, 0x58, 
	0x9F, 0x28, 0x99, 0x05, 0x43, 0x56, 0x27, 0xC7, 0x78, 0xFF, 
	0xA0, 0x3E, 0xFE, 0x18, 0xF0, 0x29, 0xFA, 0xA4, 0x59, 0x9A, 
	0xAE, 0x4D, 0xF6, 0x0D, 0xF5, 0x21, 0x1B, 0x35, 0x2A, 0xA3, 
	0x3A, 0x8E, 0xC6, 0x3F, 0x06, 0x70, 0xB2, 0x8B, 0x1F, 0xF0, 
	0x97, 0xE5, 0x49, 0x15, 0x0C, 0xEA, 0x9C, 0x1E, 0x89, 0x06, 
	0x15, 0xD0, 0x67, 0x1E, 0xDA, 0x45, 0x76, 0x1C, 0x3F, 0xA6, 
	0xA7, 0x95, 0x47, 0x47, 0xE0, 0x48, 0x75, 0x04, 0x06, 0xD4, 
	0xB8, 0x8A, 0x7E, 0xDF, 0x80, 0x0C, 0x9A, 0x0B, 0x00, 0x33, 
	0x55, 0x7A, 0x98, 0xE0, 0x09, 0xBF, 0x8B, 0x89, 0xAC, 0x9A, 
	0x7B, 0x76, 0x5E, 0x45, 0x09, 0x39, 0x36, 0x10, 0x07, 0xA3, 
	0x2F, 0xC3, 0x8C, 0xEA, 0x5B, 0x05, 0x53, 0xAF, 0x10, 0x6E, 
	0xB6, 0x35, 0xA5, 0x22, 0x9D, 0xAA, 0xAC, 0x9B, 0x26, 0x9D, 
	0xF2, 0x53, 0x11, 0x01, 0xAA, 0x2D, 0x52, 0x02, 0x0C, 0xB8, 
	0xAD, 0x96, 0x56, 0x61, 0x4D, 0x21, 0x99, 0xBF, 0xB5, 0xE8, 
	0x02, 0xC0, 0xEF, 0x58, 0x69, 0xF0, 0xB2, 0xB3, 0xFB, 0x82, 
	0xAA, 0x82, 0x6C, 0x97, 0xD6, 0xD2, 0x35, 0x5A, 0x26, 0xE7, 
	0x16, 0xF2, 0xC2, 0x8C, 0x3D, 0xDD, 0x30, 0x5F, 0xE6, 0x47, 
	0xE7, 0x7C, 0xB4, 0x79, 0x69, 0xEE, 0xCE, 0x0F, 0xA5, 0x28, 
	0xB0, 0xD0, 0xA8, 0x1A, 0x5B, 0x1B, 0xA4, 0x91, 0xB1, 0x64, 
	0x98, 0x39, 0x4B, 0xDA, 0x4F, 0x44, 0xD4, 0xDB, 0x9D, 0x05, 
	0x03, 0x34, 0xF4, 0x12, 0x07, 0x9D, 0x66, 0xAF, 0x9F, 0x8B, 
	0xA5, 0x63, 0x14, 0x62, 0x31, 0x7B, 0x2F, 0xF3, 0x70, 0xB0, 
	0x85, 0x87, 0x9D, 0x2C, 0x5E, 0xEF, 0xF5, 0xD7, 0xB0, 0xAB, 
	0xBF, 0x83, 0x4F, 0xEB, 0xFE, 0x4B, 0xF1, 0xB5, 0x3B, 0x2F, 
	0x2F, 0xBE, 0xFF, 0x3B, 0x8B, 0x3F, 0x58, 0x5F, 0xBB, 0x88, 
	0xBC, 0xBD, 0x0D, 0xF9, 0x06, 0xED, 0x9A, 0x25, 0xE5, 0x36, 
	0xF5, 0xDC, 0x9A, 0x0A, 0xF7, 0x6B, 0x6F, 0x30, 0xA6, 0x2D, 
	0xA2, 0x59, 0x27, 0xD0, 0x30, 0x35, 0xF4, 0xE4, 0x5F, 0xA1, 
	0x21, 0x2E, 0xC9, 0xDC, 0x16, 0x94, 0x36, 0xCA, 0xAB, 0xA1, 
	0x83, 0xCD, 0x56, 0x64, 0xD6, 0xFF, 0x8D, 0x45, 0xE0, 0x03, 
	0x4A, 0x69, 0x09, 0x07, 0xE6, 0x86, 0x00, 0x66, 0x08, 0x21, 
	0xE1, 0xE0, 0x37, 0xA9, 0x35, 0xF4, 0x92, 0xDB, 0x37, 0x7B, 
	0xDA, 0x06, 0x82, 0x7A, 0xAF, 0x20, 0xD8, 0xF9, 0x89, 0xFC, 
	0xF4, 0x5F, 0xB6, 0x37, 0x2A, 0xCC, 0xDF, 0x94, 0x9F, 0x5E, 
	0x91, 0x1F, 0x8A, 0xEA, 0xDF, 0x28, 0xC0, 0x7E, 0x39, 0x66, 
	0x1A, 0xE6, 0x16, 0x82, 0xAF, 0x11, 0xE0, 0x2B, 0x36, 0x11, 
	0xBD, 0xEA, 0x54, 0x07, 0x74, 0xBF, 0x33, 0x91, 0xB6, 0x99, 
	0x9B, 0x7E, 0x61, 0xFB, 0xFD, 0xF5, 0x58, 0xF1, 0x0A, 0xD1, 
	0x96, 0xC3, 0x73, 0xB3, 0xD7, 0x6D, 0x99, 0x6B, 0xD4, 0x0C, 
	0x31, 0x2C, 0xB7, 0x5F, 0x5E, 0x68, 0x77, 0xF7, 0x85, 0x76, 
	0x2A, 0x6A, 0xED, 0xE9, 0x6B, 0x94, 0x31, 0xB7, 0xCC, 0x45, 
	0x6C, 0xFC, 0x56, 0x88, 0x6D, 0xB4, 0x8D, 0xB2, 0x57, 0x37, 
	0xFB, 0xC6, 0xAB, 0x0C, 0x73, 0x37, 0xAC, 0x8D, 0x6D, 0x58, 
	0x45, 0x29, 0x1D, 0xBC, 0x22, 0x49, 0xEA, 0x95, 0x5D, 0xD9, 
	0xE8, 0xE4, 0x39, 0x84, 0x99, 0x6B, 0xA5, 0xB3, 0xC1, 0xDE, 
	0x85, 0x5B, 0x0B, 0xDE, 0xD9, 0x86, 0xE3, 0xE3, 0x12, 0x0E, 
	0x8D, 0x78, 0x2D, 0xA6, 0xF0, 0x8B, 0x0C, 0x92, 0x1D, 0xA2, 
	0xBC, 0xEC, 0x10, 0x95, 0x65, 0x8E, 0x29, 0xF9, 0x51, 0x61, 
	0xA5, 0xE4, 0x15, 0x9D, 0x76, 0xA3, 0xAB, 0xFD, 0xA7, 0xD7, 
	0x84, 0x9F, 0x0C, 0x07, 0xE4, 0x65, 0x14, 0xAA, 0x69, 0x87, 
	0xCE, 0x3C, 0x8A, 0xE5, 0x81, 0xBC, 0x80, 0xB3, 0x29, 0x8A, 
	0x8C, 0x5F, 0xE0, 0xB2, 0x3B, 0x60, 0x2F, 0x0A, 0xD3, 0xE6, 
	0x3D, 0xBB, 0xD4, 0x1F, 0xC8, 0xD3, 0x28, 0x70, 0xB3, 0x4E, 
	0xBC, 0x3D, 0x87, 0xAE, 0xB6, 0x29, 0x43, 0x2A, 0xEB, 0xB6, 
	0x10, 0x17, 0x7E, 0x62, 0x00, 0x07, 0xE5, 0x21, 0x19, 0x7B, 
	0x93, 0x42, 0x2F, 0x6E, 0x65, 0xA9, 0x2F, 0xF3, 0xBD, 0x9E, 
	0x80, 0x37, 0x3A, 0x2F, 0x26, 0x99, 0xC7, 0x95, 0x76, 0x35, 
	0xB9, 0x84, 0x0C, 0xB4, 0x01, 0x6A, 0x5F, 0x5F, 0x15, 0x5F, 
	0x00, 0x7E, 0x66, 0x92, 0x5F, 0x52, 0x67, 0x37, 0xE1, 0xD5, 
	0x7B, 0xEA, 0xEE, 0x12, 0x9F, 0x7C, 0xA8, 0xF6, 0x9B, 0x51, 
	0xEC, 0x12, 0x94, 0x17, 0x9B, 0xB2, 0xBE, 0xFA, 0x69, 0x43, 
	0xDF, 0xBA, 0x78, 0x6B, 0xA7, 0xF3, 0xB3, 0x70, 0x3C, 0x9E, 
	0xB7, 0x65, 0xC5, 0x82, 0x53, 0xCC, 0x4C, 0xB8, 0x60, 0xDC, 
	0x3B, 0xC4, 0x7B, 0x28, 0x89, 0xDE, 0x2E, 0x0C, 0x8B, 0xB5, 
	0x40, 0x52, 0xB8, 0xFC, 0x61, 0x09, 0x0A, 0x1B, 0x84, 0xF4, 
	0x7E, 0xD1, 0xC2, 0x57, 0x5F, 0xDF, 0xB1, 0x83, 0xA6, 0x1D, 
	0xF8, 0xB3, 0x70, 0x90, 0x46, 0x4B, 0x4B, 0x3E, 0x7A, 0xBB, 
	0xD7, 0xA8, 0x03, 0xA7, 0x4A, 0x63, 0x4F, 0xAA, 0x85, 0xD3, 
	0x64, 0x69, 0x49, 0x87, 0xFB, 0x88, 0xF6, 0x48, 0x3A, 0x04, 
	0xC6, 0x24, 0xDF, 0x1D, 0xCA, 0xC1, 0x34, 0x70, 0xBF, 0xB3, 
	0x27, 0x07, 0x89, 0x5E, 0xB4, 0x61, 0x97, 0x7C, 0xB4, 0xD7, 
	0xA0, 0x57, 0xB8, 0xB9, 0x9D, 0x2A, 0x0D, 0xF9, 0x70, 0x1F, 
	0x60, 0x8E, 0x64, 0x35, 0x0A, 0x03, 0x3F, 0x24, 0xCC, 0x34, 
	0xE7, 0xC3, 0xB5, 0x8B, 0x66, 0x40, 0x88, 0x37, 0xB2, 0xFC, 
	0x9A, 0x39, 0x6B, 0xB1, 0x0B, 0x27, 0x66, 0x09, 0xEC, 0xBA, 
	0x29, 0x47, 0x9D, 0x5D, 0x40, 0x7B, 0x41, 0x64, 0xA7, 0x03, 
	0xFA, 0x30, 0x2C, 0x3F, 0xF3, 0x8B, 0xAD, 0xB9, 0xA2, 0xCE, 
	0xCB, 0x2F, 0x2C, 0x72, 0x14, 0xDE, 0x92, 0x87, 0x15, 0xBE, 
	0x6E, 0xD1, 0x6B, 0x90, 0x3D, 0xBA, 0x00, 0x7A, 0xA7, 0xB0, 
	0xA7, 0x08, 0xF2, 0xA3, 0xEC, 0xA7, 0x73, 0x3F, 0x69, 0x51, 
	0x72, 0x8A, 0x25, 0x2B, 0xCF, 0xFC, 0xB6, 0xE1, 0x17, 0xAE, 
	0x2E, 0xF8, 0x15, 0xA4, 0x77, 0x26, 0xAB, 0x3B, 0xDD, 0x62, 
	0x14, 0x77, 0xA1, 0xD3, 0xB8, 0x00, 0x77, 0x82, 0x98, 0x5E, 
	0xB1, 0x89, 0xB7, 0x38, 0x94, 0x3A, 0x38, 0xFF, 0x0D, 0x23, 
	0x97, 0xD0, 0x9B, 0xA7, 0xE2, 0xCE, 0x1E, 0xBF, 0x97, 0xC9, 
	0x2F, 0xEC, 0xA1, 0xF1, 0xAC, 0xA8, 0xB7, 0x6B, 0x77, 0x2A, 
	0xE9, 0x3B, 0x14, 0x18, 0xAE, 0x8A, 0xAD, 0x48, 0xD7, 0xE8, 
	0x32, 0x80, 0x89, 0x1B, 0x35, 0x24, 0xF7, 0xD2, 0xC7, 0x25, 
	0x5E, 0x29, 0xD5, 0xD9, 0x0D, 0x74, 0x32, 0x90, 0x80, 0x6B, 
	0xD5, 0x57, 0x35, 0xB5, 0xB4, 0xF2, 0xE1, 0xD0, 0x3F, 0xD6, 
	0x07, 0x9A, 0xB2, 0xE1, 0xE6, 0xBB, 0x78, 0x86, 0xB8, 0x2D, 
	0xC3, 0xD0, 0x6B, 0x53, 0x5B, 0xBD, 0xE1, 0xE5, 0x2D, 0x2C, 
	0x63, 0x4D, 0x5B, 0xCE, 0x1C, 0x1F, 0xED, 0xA9, 0xB7, 0x65, 
	0x58, 0x98, 0xE2, 0x80, 0xED, 0x3D, 0x45, 0x2D, 0xAB, 0xC8, 
	0x12, 0x45, 0xE3, 0x2F, 0xF1, 0x0B, 0x1F, 0x45, 0x2D, 0xBC, 
	0xA4, 0x90, 0x64, 0x1A, 0x07, 0xD9, 0x9A, 0x45, 0xAF, 0x91, 
	0xF9, 0xB7, 0x9F, 0x01, 0x89, 0xA5, 0x8B, 0x6B, 0xE1, 0xC3, 
	0x22, 0xCA, 0xDF, 0x6C, 0xFD, 0xDD, 0xE2, 0xE8, 0xE2, 0x7A, 
	0x00, 0x4E, 0x31, 0x3D, 0x62, 0x4F, 0x18, 0x2A, 0x13, 0x60, 
	0x27, 0x93, 0xDF, 0x86, 0x87, 0x14, 0x24, 0x7D, 0x71, 0x8D, 
	0x9A, 0xE7, 0x8A, 0x11, 0x3A, 0x4A, 0x4F, 0x29, 0xA6, 0xF8, 
	0x92, 0x82, 0x93, 0xCE, 0xBC, 0x19, 0x84, 0xAA, 0xB1, 0x3F, 
	0x59, 0x7B, 0x40, 0xF1, 0x0F, 0xDB, 0xC7, 0xB2, 0xD4, 0x92, 
	0x20, 0xE0, 0xC8, 0x56, 0xE5, 0x95, 0x27, 0x7B, 0x5E, 0xE1, 
	0x3F, 0x47, 0xA3, 0xD5, 0x34, 0x24, 0xA9, 0x74, 0x65, 0x27, 
	0xB7, 0x83, 0x57, 0x31, 0x9E, 0x50, 0x40, 0x81, 0x71, 0xA1, 
	0xE3, 0xE7, 0x8C, 0xEB, 0xBB, 0x31, 0x8E, 0xFA, 0x63, 0x37, 
	0x92, 0xEC, 0x0B, 0xF2, 0xCA, 0xA5, 0x24, 0xEB, 0x44, 0xBF, 
	0xD7, 0x26, 0x47, 0x43, 0x30, 0x2D, 0xB1, 0xE3, 0x70, 0xA8, 
	0x77, 0x4A, 0xBE, 0x47, 0xE3, 0xA2, 0xA8, 0xDE, 0x62, 0x36, 
	0xEC, 0x7D, 0x5C, 0xA5, 0x62, 0x20, 0x15, 0x97, 0x0B, 0x73, 
	0xCF, 0x43, 0x21, 0x12, 0x15, 0x6D, 0x16, 0x8B, 0x9C, 0x39, 
	0x71, 0x6E, 0xA7, 0xD1, 0x0F, 0x0C, 0x68, 0xFC, 0xC2, 0x9C, 
	0xD9, 0x25, 0x4C, 0xBC, 0xB8, 0x9E, 0xE6, 0x21, 0x65, 0xED, 
	0x7E, 0x97, 0x45, 0x15, 0x0A, 0x4E, 0xDC, 0xE3, 0x3D, 0x7E, 
	0x89, 0xBD, 0x37, 0xD8, 0x63, 0xF7, 0xBE, 0x7B, 0x60, 0xC7, 
	0xCF, 0xC8, 0x36, 0x9F, 0x81, 0x4C, 0xA3, 0x00, 0xF1, 0x69, 
	0x20, 0xAF, 0xE2, 0x95, 0x91, 0xC8, 0x7F, 0x50, 0xF5, 0xE9, 
	0x82, 0x89, 0x4C, 0x37, 0xFC, 0x05, 0x71, 0x20, 0xF9, 0x34, 
	0xFE, 0x36, 0xA7, 0x41, 0xE4, 0xDC, 0x5A, 0x52, 0xC1, 0x18, 
	0xFA, 0x75, 0x7D, 0x0B, 0xB1, 0x63, 0x39, 0x99, 0x47, 0xF7, 
	0xA0, 0x25, 0x7E, 0x37, 0x0D, 0xE1, 0x9C, 0x72, 0xC9, 0x54, 
	0xC2, 0xA6, 0xA1, 0x7E, 0xF4, 0xA1, 0x20, 0x63, 0x63, 0xA2, 
	0xA0, 0x4A, 0x83, 0x92, 0x2D, 0x4A, 0x6B, 0xA6, 0x16, 0xAC, 
	0x9B, 0x1A, 0xE5, 0xFE, 0x7B, 0xF6, 0x4A, 0xE1, 0x17, 0x1A, 
	0x28, 0xF5, 0x6E, 0x37, 0xBA, 0x82, 0x75, 0xBF, 0xA1, 0x53, 
	0xAB, 0x0B, 0xB6, 0x5A, 0x1D, 0xBD, 0x60, 0xAB, 0xF0, 0x58, 
	0x1F, 0x91, 0xD8, 0xB7, 0x03, 0x45, 0x66, 0xBB, 0x6D, 0x20, 
	0xBE, 0x6A, 0x14, 0x0F, 0x2F, 0x4E, 0x96, 0x5E, 0x6D, 0x79, 
	0x5D, 0x71, 0x98, 0x7C, 0xCA, 0x0F, 0x8B, 0xDA, 0x9B, 0x21, 
	0xC0, 0xB9, 0x65, 0xFF, 0x9C, 0xA3, 0x0B, 0x5A, 0x2C, 0xB5, 
	0xDB, 0x10, 0xC6, 0x49, 0x10, 0xCC, 0x7C, 0xE7, 0x7B, 0xFE, 
	0x5A, 0x49, 0x7F, 0x9D, 0xCC, 0x0B, 0xB7, 0x8C, 0x66, 0x91, 
	0x73, 0x20, 0xE3, 0x5B, 0x01, 0x1D, 0x9D, 0x8C, 0xE9, 0x30, 
	0x16, 0x0E, 0x16, 0xDA, 0x64, 0x58, 0x7F, 0x61, 0xB0, 0xA6, 
	0x9B, 0xCA, 0x93, 0xB0, 0x07, 0x1E, 0x69, 0xC7, 0x7A, 0x17, 
	0x22, 0xBC, 0x25, 0x67, 0x7B, 0x16, 0xA1, 0x81, 0x9B, 0x94, 
	0x36, 0x09, 0x1B, 0x3F, 0xF6, 0xD2, 0xE0, 0xBF, 0x17, 0x9F, 
	0xB6, 0xF0, 0xA9, 0x45, 0xEF, 0x96, 0x3A, 0xD0, 0xCC, 0xB4, 
	0x81, 0xAE, 0x6C, 0xC0, 0x19, 0xC5, 0x52, 0x3D, 0xC1, 0xEF, 
	0x13, 0xF1, 0xB3, 0xAD, 0x5F, 0x44, 0x4D, 0xF7, 0xA6, 0x67, 
	0xFA, 0xB0, 0x91, 0xBD, 0x8F, 0xA1, 0xC0, 0xBD, 0xB2, 0xE7, 
	0x33, 0xDF, 0xE6, 0x56, 0xAE, 0x72, 0xE9, 0x83, 0x66, 0xB7, 
	0x0B, 0x7F, 0xD3, 0x60, 0x96, 0xA1, 0xBC, 0xC8, 0xE5, 0x71, 
	0xF9, 0x5D, 0x8F, 0x72, 0xA9, 0x50, 0x04, 0xA5, 0x4E, 0x9D, 
	0x3D, 0x99, 0x33, 0x81, 0x7B, 0x4A, 0xF1, 0xBE, 0xE1, 0x6D, 
	0x36, 0x95, 0xD7, 0x32, 0x5B, 0xA0, 0xB6, 0x28, 0xBE, 0x88, 
	0xCA, 0x1C, 0x02, 0xA7, 0xD7, 0xB2, 0x5D, 0xB7, 0x2E, 0xAA, 
	0x01, 0x36, 0x61, 0x59, 0x78, 0x3C, 0x9D, 0x0F, 0xC7, 0xA0, 
	0xE7, 0x09, 0xF7, 0xE7, 0x72, 0xBC, 0x46, 0xDF, 0xCE, 0xE6, 
	0xB1, 0x6F, 0x0C, 0xF8, 0x1F, 0xFA, 0xC0, 0x2E, 0x90, 0xCD, 
	0xB9, 0xC9, 0x63, 0x3A, 0x1F, 0x18, 0xDF, 0x50, 0xB3, 0xC3, 
	0xCC, 0xCE, 0xC6, 0xDA, 0xD3, 0x93, 0x46, 0xE3, 0x49, 0x69, 
	0x98, 0xA9, 0xED, 0x76, 0xF8, 0x53, 0x1B, 0xD8, 0x24, 0xDE, 
	0x3C, 0x3C, 0xF9, 0x94, 0x52, 0xAD, 0x22, 0xE9, 0xE1, 0xF0, 
	0x06, 0xED, 0xC4, 0xBA, 0x05, 0x68, 0x58, 0x9D, 0x38, 0x57, 
	0xBD, 0x99, 0x64, 0x4F, 0x5C, 0xF8, 0x8E, 0x08, 0x22, 0xF3, 
	0x44, 0x13, 0x2D, 0xA6, 0xC2, 0x09, 0x52, 0xC6, 0x50, 0x5A, 
	0xE6, 0x1B, 0xF6, 0x1B, 0x11, 0x1B, 0x15, 0xFD, 0x0D, 0x58, 
	0xF2, 0x2D, 0xC8, 0xD3, 0x8D, 0xBF, 0x06, 0xA3, 0x6F, 0x2C, 
	0xA4, 0xA8, 0x73, 0xFA, 0x1A, 0x80, 0x6F, 0x10, 0x02, 0x35, 
	0x6F, 0x7B, 0x56, 0x44, 0x81, 0x2B, 0x8F, 0xB4, 0x0E, 0x7D, 
	0xA4, 0x55, 0xC4, 0x98, 0x85, 0x93, 0x36, 0xC4, 0xAC, 0xCD, 
	0x26, 0xA1, 0xA8, 0x64, 0xE8, 0xB6, 0x98, 0x21, 0x24, 0x63, 
	0xB7, 0xC5, 0x4C, 0x8C, 0xB8, 0x17, 0xA1, 0x4B, 0x7E, 0x4C, 
	0x58, 0x30, 0xC8, 0x0E, 0x9E, 0xDF, 0x81, 0xD4, 0x8B, 0x8F, 
	0xAB, 0x79, 0xF7, 0x78, 0x5A, 0x19, 0x01, 0x99, 0x8B, 0x83, 
	0xD0, 0x5C, 0x1B, 0xC7, 0x10, 0x05, 0x6A, 0x24, 0x68, 0x0C, 
	0xF5, 0x9C, 0xE5, 0x4D, 0xF1, 0x4E, 0xA9, 0xD5, 0x5E, 0x1E, 
	0x2F, 0xC7, 0x30, 0xB5, 0xAA, 0x79, 0x02, 0x3F, 0x16, 0x73, 
	0xAB, 0x2D, 0xE1, 0xBC, 0xEE, 0xC0, 0x49, 0x08, 0xDC, 0xA2, 
	0x56, 0x7B, 0xE3, 0x15, 0xE1, 0xBB, 0x56, 0xA3, 0xA6, 0xB0, 
	0xFB, 0x0B, 0x3A, 0x45, 0xF3, 0xB3, 0x57, 0x74, 0xB5, 0x78, 
	0x3B, 0x57, 0x4B, 0xE6, 0x81, 0x92, 0x50, 0x91, 0xD7, 0xAA, 
	0x76, 0xB3, 0x09, 0x18, 0x94, 0x1F, 0xC5, 0x75, 0xAC, 0x7D, 
	0x83, 0xE0, 0xA0, 0x6B, 0x8B, 0x7B, 0x52, 0x9E, 0x78, 0xCD, 
	0xC0, 0x51, 0x67, 0x15, 0x47, 0x9E, 0x71, 0x27, 0xCD, 0x3D, 
	0x67, 0xC6, 0x9C, 0x10, 0x61, 0xC2, 0xA1, 0x61, 0x85, 0xB9, 
	0x63, 0xC3, 0x00, 0xC9, 0x7D, 0x3B, 0x2C, 0xFB, 0x36, 0x1D, 
	0x1B, 0x87, 0x13, 0x65, 0x2D, 0xFE, 0xCE, 0x77, 0x88, 0xBF, 
	0xB0, 0x84, 0xAA, 0x3A, 0xE9, 0x6F, 0x58, 0x04, 0xB6, 0xED, 
	0x53, 0x76, 0x8B, 0xC5, 0x25, 0x73, 0x08, 0x8B, 0x90, 0xEB, 
	0xC1, 0x11, 0xB2, 0x08, 0xB9, 0xF3, 0xCD, 0x21, 0xF7, 0xB7, 
	0xF8, 0xDB, 0x61, 0x9F, 0x86, 0x69, 0x50, 0x0C, 0x8B, 0x9D, 
	0xD8, 0xDA, 0xF4, 0xD5, 0x4D, 0xC1, 0xB0, 0xC5, 0x0E, 0xA7, 
	0x27, 0x71, 0x6C, 0x3F, 0xB4, 0xFC, 0x84, 0x96, 0xEB, 0xAA, 
	0x80, 0x23, 0xA3, 0x7F, 0x5C, 0xED, 0x05, 0xDD, 0x0E, 0xAA, 
	0x7D, 0x70, 0x62, 0x6C, 0xDE, 0x34, 0x75, 0x4C, 0x66, 0xF0, 
	0x3E, 0x03, 0xFF, 0x98, 0x60, 0x38, 0x44, 0x45, 0x45, 0x9E, 
	0x74, 0x93, 0x47, 0xF9, 0x00, 0x8C, 0x27, 0x38, 0xAC, 0xC2, 
	0x66, 0xF6, 0x10, 0xB0, 0x5C, 0x6F, 0x5E, 0x89, 0x99, 0x65, 
	0xDA, 0xC1, 0x44, 0x0D, 0x76, 0xD9, 0xDD, 0x2B, 0xCA, 0x1A, 
	0x0E, 0x03, 0x7E, 0xF2, 0xCC, 0x15, 0xB5, 0x18, 0xFA, 0xB5, 
	0xDA, 0x1A, 0xB3, 0x6B, 0x04, 0xB7, 0x70, 0xDB, 0xD4, 0x59, 
	0xFA, 0xBB, 0xEB, 0xE4, 0x75, 0x29, 0x6E, 0x9F, 0x4B, 0x37, 
	0x07, 0x30, 0x2F, 0x35, 0xC2, 0x5D, 0xD3, 0xAB, 0xDF, 0x1C, 
	0x6A, 0xB5, 0x1A, 0xFF, 0xFC, 0x7C, 0x7C, 0x3B, 0xA9, 0x88, 
	0xB3, 0x18, 0x78, 0x49, 0x90, 0x8B, 0x46, 0x31, 0xEF, 0xB7, 
	0x85, 0x08, 0x8C, 0x05, 0x0D, 0xAA, 0xEC, 0x9B, 0x23, 0xED, 
	0xE9, 0xC9, 0xDF, 0x20, 0x09, 0x38, 0x6A, 0xAD, 0xF5, 0xE9, 
	0x22, 0xEB, 0x9B, 0xED, 0x0A, 0x17, 0x34, 0xAC, 0x6F, 0x18, 
	0x83, 0x14, 0xE7, 0x46, 0xD9, 0xB2, 0xB2, 0xE0, 0x5F, 0xB5, 
	0x1A, 0x5F, 0xE0, 0xEF, 0xE6, 0x68, 0xA8, 0x1D, 0x1B, 0x03, 
	0x7D, 0xBB, 0xC1, 0x82, 0xB9, 0xEF, 0x6A, 0xB2, 0xD1, 0x2F, 
	0xF1, 0x17, 0x65, 0xFC, 0x35, 0x1A, 0xCF, 0xCF, 0xF4, 0x22, 
	0xF9, 0x59, 0xFC, 0xA0, 0x31, 0xFB, 0x6A, 0xE7, 0x31, 0xBB, 
	0xE5, 0xA1, 0x5F, 0x14, 0x8A, 0x61, 0x7B, 0x1A, 0xB9, 0x0F, 
	0x8F, 0xF4, 0x22, 0xCF, 0xB3, 0x17, 0x7E, 0xF0, 0x30, 0x38, 
	0xC1, 0x23, 0x8B, 0xFA, 0x01, 0x62, 0x0D, 0xC1, 0x9B, 0x3C, 
	0x35, 0xB1, 0xC3, 0xA4, 0x99, 0xC0, 0x41, 0xC6, 0xB3, 0x9A, 
	0xF7, 0x64, 0x7A, 0xEB, 0xA7, 0xCD, 0x65, 0x8C, 0x77, 0x93, 
	0x0E, 0xFE, 0x11, 0x42, 0xD3, 0x76, 0x6F, 0x56, 0x49, 0x3A, 
	0x20, 0x3F, 0x6C, 0x27, 0xB5, 0x9E, 0xF1, 0x7A, 0xB3, 0x74, 
	0x26, 0x99, 0xB7, 0xA5, 0x47, 0x69, 0x4A, 0xAF, 0x31, 0x07, 
	0xD2, 0xDB, 0x36, 0xFD, 0x27, 0x25, 0x51, 0xE0, 0xBB, 0x92, 
	0x0E, 0x27, 0x2D, 0x69, 0x09, 0xC9, 0x21, 0x38, 0xD7, 0xC0, 
	0xC4, 0xC6, 0xC2, 0x8E, 0x67, 0x7E, 0x38, 0x90, 0x0C, 0x53, 
	0xD2, 0x24, 0xF8, 0xDF, 0x92, 0xF0, 0xEF, 0x4A, 0x66, 0x71, 
	0xB4, 0x0A, 0x5D, 0x46, 0x6E, 0xF0, 0x76, 0x7A, 0x80, 0xFF, 
	0x59, 0x1C, 0x67, 0x33, 0xB6, 0x5D, 0x7F, 0x95, 0x30, 0xF0, 
	0x75, 0xEA, 0xAD, 0x60, 0x2A, 0x3D, 0x66, 0xD4, 0x81, 0x1E, 
	0xA7, 0x8C, 0xDF, 0x07, 0xC3, 0xBF, 0x2A, 0x92, 0x36, 0x22, 
	0x59, 0xA3, 0x28, 0xBD, 0x25, 0xF4, 0x5F, 0xC1, 0x2B, 0xB0, 
	0x46, 0xFF, 0x2B, 0x18, 0xCE, 0x3A, 0xB6, 0x1C, 0x8E, 0xD9, 
	0xDD, 0x37, 0xBD, 0x10, 0x75, 0x08, 0x7E, 0x31, 0x0D, 0x90, 
	0x7E, 0xC8, 0x2E, 0x7C, 0x01, 0x18, 0x8F, 0x9C, 0x1B, 0x78, 
	0xC7, 0x2B, 0x0F, 0x14, 0xDE, 0x9A, 0x08, 0x6C, 0xD7, 0xF1, 
	0xDC, 0xFE, 0xC6, 0xF5, 0x7A, 0x67, 0x00, 0xC1, 0x6E, 0x30, 
	0x03, 0xE2, 0xA5, 0x56, 0x21, 0xFA, 0x03, 0xFA, 0x6F, 0x93, 
	0xE8, 0x8D, 0x8D, 0xCB, 0xCE, 0x57, 0xBD, 0x41, 0x46, 0x9B, 
	0x98, 0x0D, 0x62, 0xA0, 0xEC, 0x04, 0xC4, 0x8E, 0x39, 0xE5, 
	0x67, 0x69, 0x23, 0x7B, 0xF3, 0x0E, 0xCC, 0xCB, 0x15, 0x4D, 
	0xB1, 0xAD, 0x4F, 0x7C, 0x8B, 0x26, 0x9C, 0xCF, 0x6B, 0xA6, 
	0xD1, 0x12, 0xD4, 0x47, 0x3F, 0x09, 0xDE, 0x30, 0x79, 0x6E, 
	0xE0, 0x9A, 0xF3, 0x9B, 0x69, 0xA9, 0x83, 0xF3, 0x44, 0x99, 
	0x4B, 0xB9, 0xD0, 0x33, 0xB2, 0x1A, 0xD8, 0x17, 0xE0, 0x43, 
	0x0B, 0xCB, 0xA4, 0xA0, 0x9B, 0x9B, 0xC5, 0xA0, 0x91, 0x8E, 
	0x3B, 0xED, 0x58, 0x12, 0x6B, 0xDE, 0xE3, 0x9F, 0x74, 0xEE, 
	0x6A, 0x7C, 0xC9, 0xE9, 0x2A, 0x95, 0x1E, 0x97, 0xFC, 0x6F, 
	0xE8, 0x06, 0x92, 0xE7, 0xFF, 0x20, 0x2E, 0x02, 0xE3, 0x1F, 
	0x36, 0x0C, 0x24, 0xCA, 0x26, 0xBD, 0x67, 0xE6, 0xF5, 0x0D, 
	0xA6, 0xD7, 0x39, 0x3B, 0x79, 0x6F, 0x6A, 0x19, 0x75, 0x89, 
	0x93, 0xCF, 0x0D, 0x51, 0x07, 0x38, 0x89, 0x71, 0xBE, 0x69, 
	0xBD, 0xB4, 0xCF, 0xC5, 0x3F, 0xDD, 0xB6, 0x19, 0x07, 0x61, 
	0x14, 0x02, 0xF8, 0x16, 0x2B, 0xCD, 0xA4, 0xD3, 0x01, 0x9C, 
	0x54, 0x31, 0xFC, 0x33, 0x7F, 0x89, 0x7F, 0xE6, 0x5F, 0x5D, 
	0x36, 0x4E, 0xDC, 0x64, 0xB7, 0xF8, 0x81, 0xEC, 0xA3, 0x70, 
	0x1F, 0xC4, 0xB2, 0x30, 0xD0, 0x5C, 0x8B, 0xB8, 0xE9, 0xA3, 
	0x70, 0xBD, 0x6E, 0x15, 0x0B, 0x86, 0xA5, 0x7A, 0x9E, 0x67, 
	0x65, 0x0B, 0xD3, 0x24, 0x03, 0x34, 0x64, 0x58, 0x9C, 0xA5, 
	0xAC, 0xB9, 0xC9, 0x5D, 0x99, 0x7D, 0x0B, 0xBE, 0xCD, 0x0C, 
	0x7D, 0x93, 0x2A, 0xB9, 0xDF, 0x6C, 0x72, 0x9B, 0xA5, 0xF4, 
	0x98, 0x89, 0x3C, 0x83, 0x17, 0x2C, 0x4A, 0xDF, 0xEC, 0xA1, 
	0xFF, 0xB5, 0x20, 0xAE, 0x6F, 0x4B, 0x34, 0x1A, 0x82, 0x09, 
	0x72, 0x7D, 0xE7, 0xD2, 0x45, 0x61, 0x4B, 0x6F, 0xFC, 0xC5, 
	0x32, 0x8A, 0x53, 0x3B, 0x84, 0xE0, 0xF8, 0x2C, 0xD3, 0x2B, 
	0x77, 0xFA, 0x95, 0x69, 0x53, 0x67, 0x9F, 0x99, 0x62, 0x3E, 
	0x44, 0x3F, 0xB1, 0xB4, 0xFE, 0x1F, 0x84, 0x36, 0x7B, 0x58, 
	0xF0, 0x43, 0x00, 0x00, 
};

	// Default Controller Configuration (len=132)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0x72, 0x0B, 0x0A, 0x61, 0x02, 0x01, 0x00, 0x01, 0x71, 
	0x02, 0x00, 0x00, 0x01, 0x0B, 0x0A, 0x61, 0x02, 0x00, 0x00, 
	0x01, 0x71, 0x02, 0x00, 0x00, 0x01, 0x0B, 0x0A, 0x61, 0x02, 
	0x00, 0x00, 0x01, 0x71, 0x02, 0x00, 0x00, 0x01, 0x0B, 0x0A, 
	0x61, 0x02, 0x00, 0x00, 0x01, 0x71, 0x02, 0x00, 0x00, 0x01, 
	0x0A, 0x09, 0x61, 0x06, 0x00, 0x00, 0x00, 0x51, 0x08, 0x00, 
	0x09, 0x0B, 0x0A, 0x61, 0x04, 0x00, 0x00, 0x00, 0x71, 0x05, 
	0x00, 0x00, 0x00, 0x05, 0x04, 0x4F, 0x00, 0x01, 0x01, 0x0B, 
	0x0A, 0x61, 0x03, 0x01, 0x01, 0x00, 0x71, 0x03, 0x01, 0x04, 
	0x00, 0x03, 0x02, 0x00, 0x00, 0x05, 0x04, 0x0F, 0x06, 0x0F, 
	0x07, 0x07, 0x06, 0x0F, 0x07, 0x51, 0x07, 0x00, 0x00, 0x05, 
	0x04, 0x0F, 0x07, 0x10, 0x00, 0xFF, 0xC0, 0xA8, 0x0A, 0x63, 
	0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x01, 0xC0, 0xA8, 0x0A, 0xF0, 
	0x00, 0x00, 
};

#endif


#define SK_HWEN_STDOLEDDISPLAY 1
#define SK_HWEN_SLIDER 1
SkaarhojBI8 buttons;