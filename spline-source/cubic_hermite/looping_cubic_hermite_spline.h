#ifndef LOOPING_CUBIC_HERMITE_SPLINE_H
#define LOOPING_CUBIC_HERMITE_SPLINE_H

#include "cubic_hermite_spline.h"

class LoopingCubicHermiteSpline : public CubicHermiteSpline
{
//constructors
public:
    LoopingCubicHermiteSpline(const std::vector<Vector3D> &points, const std::vector<Vector3D> &tangents, double alpha = 0.0);
protected:
    //you're only allowed to create one of these without point data if a subclass is providing the point data
    LoopingCubicHermiteSpline();

//methods
protected:
    virtual Vector3D getPosition(double x) const;
    virtual InterpolatedPT getTangent(double x) const;
    virtual InterpolatedPTC getCurvature(double x) const;

    virtual bool isLooping(void) const;
};

#endif // LOOPING_CUBIC_HERMITE_SPLINE_H