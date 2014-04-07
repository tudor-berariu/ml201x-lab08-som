# Tudor Berariu, 2014

.PHONY: build clean

CC=gcc
CCFLAGS=-Wall -std=c++0x -O3
LIBS=-ljpeg
LIBSTD=-lstdc++
LIBMMGTK=`pkg-config gtkmm-3.0 --cflags --libs`
LIB=$(LIBS) $(LIBMMGTK) $(LIBSTD)

build: negative print_learning_rate print_radius print_neighbourhood som_segmentation

negative: negative.o image_widget.o display_image.o jpeg_io.o
	$(CC) $(CCFLAGS) -o negative $+ $(LIB)

print_learning_rate: print_learning_rate.o learning_rate.o
	$(CC) $(CCFLAGS) -o print_learning_rate $+ $(LIB)

print_radius: print_radius.o radius.o
	$(CC) $(CCFLAGS) -o print_radius $+ $(LIB)

print_neighbourhood: print_neighbourhood.o neighbourhood.o
	$(CC) $(CCFLAGS) -o print_neighbourhood $+ $(LIB)

som_segmentation: image_widget.o display_image.o jpeg_io.o learning_rate.o radius.o neighbourhood.o som_segmentation.o
	$(CC) $(CCFLAGS) -o som_segmentation $+ $(LIB)

negative.o: negative.cc
	$(CC) $(CCFLAGS) -c negative.cc $(LIB)

image_widget.o: image_widget.cc
	$(CC) $(CCFLAGS) -c image_widget.cc $(LIB)

display_image.o: display_image.cc
	$(CC) $(CCFLAGS) -c display_image.cc $(LIB)

jpeg_io.o: jpeg_io.cc
	$(CC) $(CCFLAGS) -c jpeg_io.cc $(LIB)

print_learning_rate.o: print_learning_rate.cc
	$(CC) $(CCFLAGS) -c print_learning_rate.cc $(LIB)

learning_rate.o: learning_rate.cc
	$(CC) $(CCFLAGS) -c learning_rate.cc $(LIB)

print_radius.o: print_radius.cc
	$(CC) $(CCFLAGS) -c print_radius.cc $(LIB)

radius.o: radius.cc
	$(CC) $(CCFLAGS) -c radius.cc $(LIB)

print_neighbourhood.o: print_neighbourhood.cc
	$(CC) $(CCFLAGS) -c print_neighbourhood.cc $(LIB)

neighbourhood.o: neighbourhood.cc
	$(CC) $(CCFLAGS) -c neighbourhood.cc $(LIB)

som_segmentation.o: som_segmentation.cc
	$(CC) $(CCFLAGS) -c som_segmentation.cc $(LIB)

clean:
	rm -rf *.o negative som_segmentation print_learning_rate print_neighbourhood print_radius
