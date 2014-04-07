// Tudor Berariu, 2014

#ifndef IMAGE_WIDGET_H
#define IMAGE_WIDGET_H

#include <gtkmm/drawingarea.h>
#include <gdkmm/pixbuf.h>

class ImageWidget : public Gtk::DrawingArea {
public:
  ImageWidget(std::string);
  virtual ~ImageWidget();

protected:
  virtual bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr);

  Glib::RefPtr<Gdk::Pixbuf> m_image;
};

#endif
