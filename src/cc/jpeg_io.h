// Tudor Berariu, 2014

#ifndef JPEG_IO_H
#define JPEG_IO_H

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>

#include "image_data.h"

#include "jpeglib.h"
#include <setjmp.h>

void read_jpeg_file(std::string filename, ImageData*& image);
void write_jpeg_file(std::string filename, ImageData*& image);

#endif
