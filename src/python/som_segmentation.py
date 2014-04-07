#!/usr/bin/python
# -*- coding: utf-8 -*-
# Tudor Berariu, 2014

from PIL import Image
import copy
import sys
from learning_rate import *
from radius import *
from neighbourhood import *

def som_segmentation(orig_file_name, n):
    ## După rezolvarea Exercițiilor 2, 3 și 4
    ## în fișierele learning_rate.py, radius.py și neighbourhood.py
    ## rezolvați aici Exercițiile 5 și 6

    orig_img = Image.open(orig_file_name)
    orig_pixels = list(orig_img.getdata())
    orig_pixels = [(o[0]/255.0, o[1]/255.0, o[2]/255.0) for o in orig_pixels]


    ## Exercițiul 5: antrenarea rețelei Kohonen
    ## Exercițiul 5: completați aici:

    ## Exercițiul 5: ----------

    ## Exercițiul 6: crearea imaginii segmentate pe baza ponderilor W
    ## Exercițiul 6: porniți de la codul din show_neg
    ## Exercițiul 6: completați aici:

    ## Exercițiul 6: ----------
    pass

if __name__ == "__main__":
    som_segmentation(sys.argv[1], sys.argv[2])
