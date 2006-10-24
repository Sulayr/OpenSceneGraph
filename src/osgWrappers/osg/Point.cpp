// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osg/Point>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Vec3>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::Point)
	I_BaseType(osg::StateAttribute);
	I_Constructor0(____Point,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Point &, point, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Point__C5_Point_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "Return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, libraryName,
	          __C5_char_P1__libraryName,
	          "Return the name of the attribute's library. ",
	          "");
	I_Method0(const char *, className,
	          __C5_char_P1__className,
	          "Return the name of the attribute's class type. ",
	          "");
	I_Method0(osg::StateAttribute::Type, getType,
	          __Type__getType,
	          "Return the Type identifier of the attribute's class type. ",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          __int__compare__C5_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(bool, getModeUsage, IN, osg::StateAttribute::ModeUsage &, usage,
	          __bool__getModeUsage__ModeUsage_R1,
	          "",
	          "");
	I_Method1(void, setSize, IN, float, size,
	          __void__setSize__float,
	          "",
	          "");
	I_Method0(float, getSize,
	          __float__getSize,
	          "",
	          "");
	I_Method1(void, setFadeThresholdSize, IN, float, fadeThresholdSize,
	          __void__setFadeThresholdSize__float,
	          "",
	          "");
	I_Method0(float, getFadeThresholdSize,
	          __float__getFadeThresholdSize,
	          "",
	          "");
	I_Method1(void, setDistanceAttenuation, IN, const osg::Vec3 &, distanceAttenuation,
	          __void__setDistanceAttenuation__C5_Vec3_R1,
	          "",
	          "");
	I_Method0(const osg::Vec3 &, getDistanceAttenuation,
	          __C5_Vec3_R1__getDistanceAttenuation,
	          "",
	          "");
	I_Method1(void, setMinSize, IN, float, minSize,
	          __void__setMinSize__float,
	          "",
	          "");
	I_Method0(float, getMinSize,
	          __float__getMinSize,
	          "",
	          "");
	I_Method1(void, setMaxSize, IN, float, maxSize,
	          __void__setMaxSize__float,
	          "",
	          "");
	I_Method0(float, getMaxSize,
	          __float__getMaxSize,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          __void__apply__State_R1,
	          "apply the OpenGL state attributes. ",
	          "The render info for the current OpenGL context is passed in to allow the StateAttribute to obtain details on the the current context and state.");
	I_StaticMethod2(osg::Point::Extensions *, getExtensions, IN, unsigned int, contextID, IN, bool, createIfNotInitalized,
	                __Extensions_P1__getExtensions__unsigned_int__bool_S,
	                "Returns the Extensions object for the given context. ",
	                "If createIfNotInitalized is true and the Exentsions object doesn't exist, getExtensions() creates it on the given context. Returns NULL if createIfNotInitalized is false and the Extensions object doesn't exist. ");
	I_StaticMethod2(void, setExtensions, IN, unsigned int, contextID, IN, osg::Point::Extensions *, extensions,
	                __void__setExtensions__unsigned_int__Extensions_P1_S,
	                "setExtensions() allows users to override the extensions across graphics contexts. ",
	                "Typically used when you have different extensions supported across graphics pipes, but need to ensure that they all use the same low common denominator extensions. ");
	I_SimpleProperty(const osg::Vec3 &, DistanceAttenuation, 
	                 __C5_Vec3_R1__getDistanceAttenuation, 
	                 __void__setDistanceAttenuation__C5_Vec3_R1);
	I_SimpleProperty(float, FadeThresholdSize, 
	                 __float__getFadeThresholdSize, 
	                 __void__setFadeThresholdSize__float);
	I_SimpleProperty(float, MaxSize, 
	                 __float__getMaxSize, 
	                 __void__setMaxSize__float);
	I_SimpleProperty(float, MinSize, 
	                 __float__getMinSize, 
	                 __void__setMinSize__float);
	I_SimpleProperty(float, Size, 
	                 __float__getSize, 
	                 __void__setSize__float);
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Point::Extensions)
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, unsigned int, contextID,
	               ____Extensions__unsigned_int,
	               "",
	               "");
	I_Constructor1(IN, const osg::Point::Extensions &, rhs,
	               ____Extensions__C5_Extensions_R1,
	               "",
	               "");
	I_Method1(void, lowestCommonDenominator, IN, const osg::Point::Extensions &, rhs,
	          __void__lowestCommonDenominator__C5_Extensions_R1,
	          "",
	          "");
	I_Method1(void, setupGLExtenions, IN, unsigned int, contextID,
	          __void__setupGLExtenions__unsigned_int,
	          "",
	          "");
	I_Method1(void, setPointParametersSupported, IN, bool, flag,
	          __void__setPointParametersSupported__bool,
	          "",
	          "");
	I_Method0(bool, isPointParametersSupported,
	          __bool__isPointParametersSupported,
	          "",
	          "");
	I_Method2(void, glPointParameterf, IN, GLenum, pname, IN, GLfloat, param,
	          __void__glPointParameterf__GLenum__GLfloat,
	          "",
	          "");
	I_Method2(void, glPointParameterfv, IN, GLenum, pname, IN, const GLfloat *, params,
	          __void__glPointParameterfv__GLenum__C5_GLfloat_P1,
	          "",
	          "");
	I_SimpleProperty(bool, PointParametersSupported, 
	                 0, 
	                 __void__setPointParametersSupported__bool);
END_REFLECTOR

