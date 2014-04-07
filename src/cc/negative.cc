// Tudor Berariu, 2014

#include <string>

#include "display_image.h"
#include "image_data.h"
#include "jpeg_io.h"

#include <gtkmm/application.h>
#include <gtkmm/window.h>
#include "image_widget.h"


void negative(ImageData*& image) {
  // Exercițiul 1
}


int main(int argc, char** argv)
{
  std::string orig_file_name(argv[1]);
  std::string neg_file_name =
    orig_file_name.substr(0, orig_file_name.length()-4) + "_neg.jpg";

  ImageData* img;
  read_jpeg_file(orig_file_name, img);
  negative(img);
  write_jpeg_file(neg_file_name, img);

  return display_image(argv, neg_file_name, "negative");
}
