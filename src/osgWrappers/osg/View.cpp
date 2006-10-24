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

#include <osg/CameraNode>
#include <osg/CopyOp>
#include <osg/Matrix>
#include <osg/Matrixd>
#include <osg/Matrixf>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Vec3>
#include <osg/View>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::View)
	I_BaseType(osg::Transform);
	I_BaseType(osg::CullSettings);
	I_Constructor0(____View,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::View &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____View__C5_View_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method1(void, setProjectionMatrix, IN, const osg::Matrixf &, matrix,
	          __void__setProjectionMatrix__C5_osg_Matrixf_R1,
	          "Set the projection matrix. ",
	          "Can be thought of as setting the lens of a camera. ");
	I_Method1(void, setProjectionMatrix, IN, const osg::Matrixd &, matrix,
	          __void__setProjectionMatrix__C5_osg_Matrixd_R1,
	          "Set the projection matrix. ",
	          "Can be thought of as setting the lens of a camera. ");
	I_Method6(void, setProjectionMatrixAsOrtho, IN, double, left, IN, double, right, IN, double, bottom, IN, double, top, IN, double, zNear, IN, double, zFar,
	          __void__setProjectionMatrixAsOrtho__double__double__double__double__double__double,
	          "Set to an orthographic projection. ",
	          "See OpenGL glOrtho for documentation further details. ");
	I_Method4(void, setProjectionMatrixAsOrtho2D, IN, double, left, IN, double, right, IN, double, bottom, IN, double, top,
	          __void__setProjectionMatrixAsOrtho2D__double__double__double__double,
	          "Set to a 2D orthographic projection. ",
	          "See OpenGL glOrtho2D documentation for further details. ");
	I_Method6(void, setProjectionMatrixAsFrustum, IN, double, left, IN, double, right, IN, double, bottom, IN, double, top, IN, double, zNear, IN, double, zFar,
	          __void__setProjectionMatrixAsFrustum__double__double__double__double__double__double,
	          "Set to a perspective projection. ",
	          "See OpenGL glFrustum documentation for further details. ");
	I_Method4(void, setProjectionMatrixAsPerspective, IN, double, fovy, IN, double, aspectRatio, IN, double, zNear, IN, double, zFar,
	          __void__setProjectionMatrixAsPerspective__double__double__double__double,
	          "Create a symmetrical perspective projection, See OpenGL gluPerspective documentation for further details. ",
	          "Aspect ratio is defined as width/height. ");
	I_Method0(osg::Matrixd &, getProjectionMatrix,
	          __osg_Matrixd_R1__getProjectionMatrix,
	          "Get the projection matrix. ",
	          "");
	I_Method0(const osg::Matrixd &, getProjectionMatrix,
	          __C5_osg_Matrixd_R1__getProjectionMatrix,
	          "Get the const projection matrix. ",
	          "");
	I_Method6(bool, getProjectionMatrixAsOrtho, IN, double &, left, IN, double &, right, IN, double &, bottom, IN, double &, top, IN, double &, zNear, IN, double &, zFar,
	          __bool__getProjectionMatrixAsOrtho__double_R1__double_R1__double_R1__double_R1__double_R1__double_R1,
	          "Get the othographic settings of the orthographic projection matrix. ",
	          "Returns false if matrix is not an orthographic matrix, where parameter values are undefined. ");
	I_Method6(bool, getProjectionMatrixAsFrustum, IN, double &, left, IN, double &, right, IN, double &, bottom, IN, double &, top, IN, double &, zNear, IN, double &, zFar,
	          __bool__getProjectionMatrixAsFrustum__double_R1__double_R1__double_R1__double_R1__double_R1__double_R1,
	          "Get the frustum setting of a perspective projection matrix. ",
	          "Returns false if matrix is not a perspective matrix, where parameter values are undefined. ");
	I_Method4(bool, getProjectionMatrixAsPerspective, IN, double &, fovy, IN, double &, aspectRatio, IN, double &, zNear, IN, double &, zFar,
	          __bool__getProjectionMatrixAsPerspective__double_R1__double_R1__double_R1__double_R1,
	          "Get the frustum setting of a symmetric perspective projection matrix. ",
	          "Returns false if matrix is not a perspective matrix, where parameter values are undefined. Note, if matrix is not a symmetric perspective matrix then the shear will be lost. Asymmetric matrices occur when stereo, power walls, caves and reality center display are used. In these configurations one should use the 'getProjectionMatrixAsFrustum' method instead. ");
	I_Method1(void, setViewMatrix, IN, const osg::Matrixf &, matrix,
	          __void__setViewMatrix__C5_osg_Matrixf_R1,
	          "Set the view matrix. ",
	          "Can be thought of as setting the position of the world relative to the camera in camera coordinates. ");
	I_Method1(void, setViewMatrix, IN, const osg::Matrixd &, matrix,
	          __void__setViewMatrix__C5_osg_Matrixd_R1,
	          "Set the view matrix. ",
	          "Can be thought of as setting the position of the world relative to the camera in camera coordinates. ");
	I_Method3(void, setViewMatrixAsLookAt, IN, const osg::Vec3 &, eye, IN, const osg::Vec3 &, center, IN, const osg::Vec3 &, up,
	          __void__setViewMatrixAsLookAt__C5_osg_Vec3_R1__C5_osg_Vec3_R1__C5_osg_Vec3_R1,
	          "Set to the position and orientation of view matrix, using the same convention as gluLookAt. ",
	          "");
	I_Method0(osg::Matrixd &, getViewMatrix,
	          __osg_Matrixd_R1__getViewMatrix,
	          "Get the view matrix. ",
	          "");
	I_Method0(const osg::Matrixd &, getViewMatrix,
	          __C5_osg_Matrixd_R1__getViewMatrix,
	          "Get the const view matrix. ",
	          "");
	I_MethodWithDefaults4(void, getViewMatrixAsLookAt, IN, osg::Vec3 &, eye, , IN, osg::Vec3 &, center, , IN, osg::Vec3 &, up, , IN, float, lookDistance, 1.0f,
	                      __void__getViewMatrixAsLookAt__osg_Vec3_R1__osg_Vec3_R1__osg_Vec3_R1__float,
	                      "Get to the position and orientation of a modelview matrix, using the same convention as gluLookAt. ",
	                      "");
	I_Method0(osg::Matrixd, getInverseViewMatrix,
	          __Matrixd__getInverseViewMatrix,
	          "Get the inverse view matrix. ",
	          "");
	I_Method1(bool, addCamera, IN, osg::CameraNode *, camera,
	          __bool__addCamera__osg_CameraNode_P1,
	          "",
	          "");
	I_Method3(bool, addCamera, IN, osg::CameraNode *, camera, IN, const osg::Matrix &, projectionOffset, IN, const osg::Matrix &, viewOffse,
	          __bool__addCamera__osg_CameraNode_P1__C5_osg_Matrix_R1__C5_osg_Matrix_R1,
	          "",
	          "");
	I_Method1(bool, removeCamera, IN, unsigned int, pos,
	          __bool__removeCamera__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getNumCameras,
	          __unsigned_int__getNumCameras,
	          "",
	          "");
	I_Method1(osg::CameraNode *, getCamera, IN, unsigned int, pos,
	          __CameraNode_P1__getCamera__unsigned_int,
	          "",
	          "");
	I_Method1(const osg::CameraNode *, getCamera, IN, unsigned int, pos,
	          __C5_CameraNode_P1__getCamera__unsigned_int,
	          "",
	          "");
	I_Method1(osg::View::CameraData &, getCameraData, IN, unsigned int, pos,
	          __CameraData_R1__getCameraData__unsigned_int,
	          "",
	          "");
	I_Method1(const osg::View::CameraData &, getCameraData, IN, unsigned int, pos,
	          __C5_CameraData_R1__getCameraData__unsigned_int,
	          "",
	          "");
	I_Method2(bool, computeLocalToWorldMatrix, IN, osg::Matrix &, matrix, IN, osg::NodeVisitor *, x,
	          __bool__computeLocalToWorldMatrix__Matrix_R1__NodeVisitor_P1,
	          "Transform method that must be defined to provide generic interface for scene graph traversals. ",
	          "");
	I_Method2(bool, computeWorldToLocalMatrix, IN, osg::Matrix &, matrix, IN, osg::NodeVisitor *, x,
	          __bool__computeWorldToLocalMatrix__Matrix_R1__NodeVisitor_P1,
	          "Transform method that must be defined to provide generic interface for scene graph traversals. ",
	          "");
	I_ArrayProperty(osg::CameraNode *, Camera, 
	                __CameraNode_P1__getCamera__unsigned_int, 
	                0, 
	                __unsigned_int__getNumCameras, 
	                __bool__addCamera__osg_CameraNode_P1, 
	                0, 
	                __bool__removeCamera__unsigned_int);
	I_SimpleProperty(osg::Matrixd, InverseViewMatrix, 
	                 __Matrixd__getInverseViewMatrix, 
	                 0);
	I_SimpleProperty(const osg::Matrixd &, ProjectionMatrix, 
	                 __C5_osg_Matrixd_R1__getProjectionMatrix, 
	                 __void__setProjectionMatrix__C5_osg_Matrixd_R1);
	I_SimpleProperty(const osg::Matrixd &, ViewMatrix, 
	                 __C5_osg_Matrixd_R1__getViewMatrix, 
	                 __void__setViewMatrix__C5_osg_Matrixd_R1);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::View::CameraData)
	I_Constructor0(____CameraData,
	               "",
	               "");
	I_Constructor3(IN, osg::CameraNode *, camera, IN, const osg::Matrixd &, projectionOffset, IN, const osg::Matrixd &, viewOffset,
	               ____CameraData__osg_CameraNode_P1__C5_osg_Matrixd_R1__C5_osg_Matrixd_R1,
	               "",
	               "");
	I_Constructor1(IN, const osg::View::CameraData &, rhs,
	               ____CameraData__C5_CameraData_R1,
	               "",
	               "");
	I_PublicMemberProperty(osg::ref_ptr< osg::CameraNode >, _camera);
	I_PublicMemberProperty(osg::Matrixd, _projectionOffset);
	I_PublicMemberProperty(osg::Matrixd, _viewOffset);
END_REFLECTOR

