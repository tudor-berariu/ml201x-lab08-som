// Tudor Berariu, 2014

#include <iostream>
#include "display_image.h"

int display_image(char** argv,
		  std::string file_name,
		  std::string title) {
  int argc = 1;
  Glib::RefPtr<Gtk::Application> app =
    Gtk::Application::create(argc, argv, "image.display");

  Gtk::Window win;
  win.set_title(title);


  ImageWidget iw(file_name);
  win.add(iw);
  iw.show();

  return app->run(win);
}
