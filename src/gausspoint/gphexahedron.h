// sparselizard - Copyright (C) see copyright file.
//
// See the LICENSE file for license information. Please report all
// bugs and problems to <alexandre.halbach at gmail.com>.


#ifndef GPHEXAHEDRON_H
#define GPHEXAHEDRON_H

#include <iostream>
#include <math.h>
#include <vector>
#include "gausspoints.h"

namespace gphexahedron
{   
    void set(int integrationorder, std::vector<double>& coordinates, std::vector<double>& weights);
};

#endif
