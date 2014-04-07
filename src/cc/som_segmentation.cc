// Tudor Berariu, 2014

#include "display_image.h"
#include "image_data.h"
#include "jpeg_io.h"

#include "learning_rate.h"
#include "radius.h"
#include "neighbourhood.h"

void som_segmentation(ImageData*& image, int n) {
  // Exercițiul 5: Antrenarea rețelei / calcularea ponderilor

  // Exercițiul 6: Segmentarea imaginii
}


int main(int argc, char* argv[]) {
  std::string orig_file_name(argv[1]);
  std::string seg_file_name =
    orig_file_name.substr(0, orig_file_name.length()-4) + "_seg.jpg";
  
  ImageData* img;
  read_jpeg_file(orig_file_name, img);
  som_segmentation(img, std::stoi(argv[2]));
  write_jpeg_file(seg_file_name, img);

  return display_image(argv, seg_file_name, "less colors");

  return 0;
}
