

#include "../include/ShapeFunctions_1D_SecondOrder_cls.h"
#include "../include/ShapeFunctions_cls.h"

main_ns::ShapeFunctions_ns::ShapeFunctions_1D_SecondOrder_cls::
    ShapeFunctions_1D_SecondOrder_cls(int aNInt, int aNNode)
    : main_ns::ShapeFunctions_ns::ShapeFunctions_cls(aNInt, aNNode) {}

/*
###############################################################################
Purpose: This function computes the shape functions for a 1D second-order
        element: (3-noded) at the x1 point.

Developed by: Babak Poursartip

The Institute for Computational Engineering and Sciences (ICES)
The University of Texas at Austin

======================== V E R S I O N =========================================
V0.00: 05/14/2018 - Subroutine initiated.
V0.01: 06/02/2018 - Initiated: Compiled without error for the first time.
V0.02: 07/12/2019 - Class name changed to include higher dimension elements

################################################################################
*/

void main_ns::ShapeFunctions_ns::ShapeFunctions_1D_SecondOrder_cls::
    ShapeFunctions() {
  Fn[0] = 0.5 * x1 * (x1 - 1.0);
  Fn[1] = (1.0 - x1 * x1);
  Fn[2] = 0.5 * x1 * (x1 + 1.0);
}

/*
################################################################################
Purpose: This function computes the derivative of shape functions for a 1D,
         second-order element: (3-noded) at the x1 point.

Developed by: Babak Poursartip

The Institute for Computational Engineering and Sciences (ICES)
The University of Texas at Austin

========================= V E R S I O N ========================================
V0.00: 05/14/2018 - Subroutine initiated.
V0.01: 06/02/2018 - Initiated: Compiled without error for the first time.
V0.02: 07/12/2019 - Class name changed to include higher dimension elements.

################################################################################
*/

void main_ns::ShapeFunctions_ns::ShapeFunctions_1D_SecondOrder_cls::
    DifferentialOfShapeFunctions() { // Dif_ShapeFunc_1D_3N
  DFXI[0] = x1 - 0.5;
  DFXI[1] = -2.0 * x1;
  DFXI[2] = x1 + 0.5;
}
