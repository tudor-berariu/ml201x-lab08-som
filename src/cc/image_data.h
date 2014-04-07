// Tudor Berariu, 2014

#ifndef __IMAGE_DATA_H__
#define __IMAGE_DATA_H__

struct Pixel {
  unsigned char R;
  unsigned char G;
  unsigned char B;
};

struct ImageData {
  Pixel* pixels;
  long height;
  long width;
};

#endif
