
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef PART_RECTANGULARTRIMMEDSURFACEPY_H
#define PART_RECTANGULARTRIMMEDSURFACEPY_H

#include <Mod/Part/App/GeometrySurfacePy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>

namespace Part
{

//===========================================================================
// RectangularTrimmedSurfacePy - Python wrapper
//===========================================================================

/** The python export class for GeomTrimmedSurface
 */
class PartExport RectangularTrimmedSurfacePy : public Part::GeometrySurfacePy
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;};

public:
    RectangularTrimmedSurfacePy(GeomTrimmedSurface *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~RectangularTrimmedSurfacePy();

    typedef GeomTrimmedSurface* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the uIso() method
    static PyObject * staticCallback_uIso (PyObject *self, PyObject *args);
    /// implementer for the uIso() method
    PyObject*  uIso(PyObject *args);
    /// callback for the vIso() method
    static PyObject * staticCallback_vIso (PyObject *self, PyObject *args);
    /// implementer for the vIso() method
    PyObject*  vIso(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    GeomTrimmedSurface *getGeomTrimmedSurfacePtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace Part

#endif  // PART_RECTANGULARTRIMMEDSURFACEPY_H

