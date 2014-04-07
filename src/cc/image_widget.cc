// Tudor Berariu, 2014

#include "image_widget.h"
#include <cairomm/context.h>
#include <gdkmm/general.h>
#include <glibmm/fileutils.h>
#include <iostream>

ImageWidget::ImageWidget(std::string file_name) {
  try
  {
    m_image = Gdk::Pixbuf::create_from_file(file_name.c_str());
  }
  catch(const Glib::FileError& ex)
  {
    std::cerr << "FileError: " << ex.what() << std::endl;
  }
  catch(const Gdk::PixbufError& ex)
  {
    std::cerr << "PixbufError: " << ex.what() << std::endl;
  }

  if (m_image)
    set_size_request(m_image->get_width(), m_image->get_height());
}

ImageWidget::~ImageWidget()
{
}

bool ImageWidget::on_draw(const Cairo::RefPtr<Cairo::Context>& cr)
{
  if (!m_image)
    return false;
  Gdk::Cairo::set_source_pixbuf(cr, m_image, 0, 0);
  cr->paint();

  return true;
}
