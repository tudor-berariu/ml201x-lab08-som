#!/usr/bin/python
# -*- coding: utf-8 -*-
# Tudor Berariu, 2014

import sys

def neighbourhood(y, x, radius, height, width):
    """Construiește o mască cu valori în intevalul [0, 1] pentru
    actualizarea ponderilor"""
    ## Exercițiul 4: calculul vecinătății
    ## Exercițiul 4: completați aici
    x -= 1
    y -= 1
    mask = [[0 for j in range(width)] for i in range(height)]

    ## Exercițiul 4: ----------

    return mask

if __name__ == "__main__":
    m = neighbourhood(int(sys.argv[1]), int(sys.argv[2]), float(sys.argv[3]),
                      int(sys.argv[4]), int(sys.argv[5]))
    print m
