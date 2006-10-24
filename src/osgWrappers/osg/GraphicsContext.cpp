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

#include <osg/GraphicsContext>
#include <osg/GraphicsThread>
#include <osg/State>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::GraphicsContext)
	I_BaseType(osg::Referenced);
	I_Method0(const osg::GraphicsContext::Traits *, getTraits,
	          __C5_Traits_P1__getTraits,
	          "Get the traits of the GraphicsContext. ",
	          "");
	I_Method1(void, setState, IN, osg::State *, state,
	          __void__setState__State_P1,
	          "Set the State object which tracks the current OpenGL state for this graphics context. ",
	          "");
	I_Method0(osg::State *, getState,
	          __State_P1__getState,
	          "Get the State object which tracks the current OpenGL state for this graphics context. ",
	          "");
	I_Method0(const osg::State *, getState,
	          __C5_State_P1__getState,
	          "Get the const State object which tracks the current OpenGL state for this graphics context. ",
	          "");
	I_Method0(bool, realize,
	          __bool__realize,
	          "Realise the GraphicsContext. ",
	          "");
	I_MethodWithDefaults1(void, close, IN, bool, callCloseImplementation, true,
	                      __void__close__bool,
	                      "close the graphics context. ",
	                      "close(bool) stops any associated graphics threads, releases the contextID for the GraphicsContext then optional calls closeImplementation() to do the actual deletion of the graphics. This call is made optional as there are times when the graphics context has already been deleted externally and only the OSG side of the its data need to be closed down. ");
	I_Method0(void, swapBuffers,
	          __void__swapBuffers,
	          "swap the front and back buffers. ",
	          "");
	I_Method0(bool, isRealized,
	          __bool__isRealized,
	          "Return true if the graphics context has been realised and is ready to use. ",
	          "");
	I_Method0(void, makeCurrent,
	          __void__makeCurrent,
	          "Make this graphics context current. ",
	          "Implementated by first aquiring a lock of the GraphicsContext mutex, and then doing a call to makeCurrentImplementation(). ");
	I_Method1(void, makeContextCurrent, IN, osg::GraphicsContext *, readContext,
	          __void__makeContextCurrent__GraphicsContext_P1,
	          "Make this graphics context current with specified read context. ",
	          "Implementated by first aquiring a lock of the GraphicsContext mutex, and then doing a call to makeContextCurrentImplementation(). ");
	I_Method0(void, releaseContext,
	          __void__releaseContext,
	          "Release the graphics context by unlocking the GraphicsContext mutex. ",
	          "");
	I_Method0(bool, isCurrent,
	          __bool__isCurrent,
	          "Return true if the current thread has this OpenGL graphics context. ",
	          "");
	I_Method1(void, bindPBufferToTexture, IN, GLenum, buffer,
	          __void__bindPBufferToTexture__GLenum,
	          "Bind the graphics context to associated texture. ",
	          "");
	I_Method0(void, createGraphicsThread,
	          __void__createGraphicsThread,
	          "Create a graphics thread to the graphics context, so that the thread handles all OpenGL operations. ",
	          "");
	I_Method1(void, setGraphicsThread, IN, osg::GraphicsThread *, gt,
	          __void__setGraphicsThread__GraphicsThread_P1,
	          "Assign a graphics thread to the graphics context, so that the thread handles all OpenGL operations. ",
	          "");
	I_Method0(osg::GraphicsThread *, getGraphicsThread,
	          __GraphicsThread_P1__getGraphicsThread,
	          "Get the graphics thread assigned the graphics context. ",
	          "");
	I_Method0(const osg::GraphicsThread *, getGraphicsThread,
	          __C5_GraphicsThread_P1__getGraphicsThread,
	          "Get the const graphics thread assigned the graphics context. ",
	          "");
	I_Method0(bool, realizeImplementation,
	          __bool__realizeImplementation,
	          "Realise the GraphicsContext implementation, Pure virtual - must be implemented by concrate implementations of GraphicsContext. ",
	          "");
	I_Method0(bool, isRealizedImplementation,
	          __bool__isRealizedImplementation,
	          "Return true if the graphics context has been realised, and is ready to use, implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(void, closeImplementation,
	          __void__closeImplementation,
	          "Close the graphics context implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(void, makeCurrentImplementation,
	          __void__makeCurrentImplementation,
	          "Make this graphics context current implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method1(void, makeContextCurrentImplementation, IN, osg::GraphicsContext *, readContext,
	          __void__makeContextCurrentImplementation__GraphicsContext_P1,
	          "Make this graphics context current with specified read context implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method1(void, bindPBufferToTextureImplementation, IN, GLenum, buffer,
	          __void__bindPBufferToTextureImplementation__GLenum,
	          "Pure virtual, Bind the graphics context to associated texture implementation. ",
	          "Pure virtual - must be implemented by concrate implementations of GraphicsContext. ");
	I_Method0(void, swapBuffersImplementation,
	          __void__swapBuffersImplementation,
	          "Swap the front and back buffers implementation. ",
	          "Pure virtual - must be implemented by Concrate implementations of GraphicsContext. ");
	I_StaticMethod1(void, setCreateGraphicsContextCallback, IN, osg::GraphicsContext::CreateGraphicContextCallback *, callback,
	                __void__setCreateGraphicsContextCallback__CreateGraphicContextCallback_P1_S,
	                "Set the create graphics context callback - this callback should be supplied by the windows toolkit. ",
	                "");
	I_StaticMethod0(osg::GraphicsContext::CreateGraphicContextCallback *, getCreateGraphicsContextCallback,
	                __CreateGraphicContextCallback_P1__getCreateGraphicsContextCallback_S,
	                "Get the create graphics context callback. ",
	                "");
	I_StaticMethod1(osg::GraphicsContext *, createGraphicsContext, IN, osg::GraphicsContext::Traits *, traits,
	                __GraphicsContext_P1__createGraphicsContext__Traits_P1_S,
	                "Create a graphics context for a specified set of traits. ",
	                "");
	I_StaticMethod0(unsigned int, createNewContextID,
	                __unsigned_int__createNewContextID_S,
	                "Create a contextID for a new graphics context, this contextID is used to set up the osg::State associate with context. ",
	                "Automatically increments the usage count of the contextID to 1. ");
	I_StaticMethod1(void, incrementContextIDUsageCount, IN, unsigned int, contextID,
	                __void__incrementContextIDUsageCount__unsigned_int_S,
	                "Increment the usage count associate with a contextID. ",
	                "The usage count speficies how many graphics contexts a specific contextID is shared between. ");
	I_StaticMethod1(void, decrementContextIDUsageCount, IN, unsigned int, contextID,
	                __void__decrementContextIDUsageCount__unsigned_int_S,
	                "Decrement the usage count associate with a contextID. ",
	                "Once the contextID goes to 0 the contextID is then free to be reused. ");
	I_SimpleProperty(osg::GraphicsThread *, GraphicsThread, 
	                 __GraphicsThread_P1__getGraphicsThread, 
	                 __void__setGraphicsThread__GraphicsThread_P1);
	I_SimpleProperty(osg::State *, State, 
	                 __State_P1__getState, 
	                 __void__setState__State_P1);
	I_SimpleProperty(const osg::GraphicsContext::Traits *, Traits, 
	                 __C5_Traits_P1__getTraits, 
	                 0);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::GraphicsContext::CreateGraphicContextCallback)
	I_BaseType(osg::Referenced);
	I_Constructor0(____CreateGraphicContextCallback,
	               "",
	               "");
	I_Method1(osg::GraphicsContext *, createGraphicsContext, IN, osg::GraphicsContext::Traits *, traits,
	          __GraphicsContext_P1__createGraphicsContext__Traits_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::GraphicsContext::Traits)
	I_BaseType(osg::Referenced);
	I_Constructor0(____Traits,
	               "",
	               "");
	I_PublicMemberProperty(std::string, _hostName);
	I_PublicMemberProperty(unsigned int, _displayNum);
	I_PublicMemberProperty(unsigned int, _screenNum);
	I_PublicMemberProperty(unsigned int, _x);
	I_PublicMemberProperty(unsigned int, _y);
	I_PublicMemberProperty(unsigned int, _width);
	I_PublicMemberProperty(unsigned int, _height);
	I_PublicMemberProperty(std::string, _windowName);
	I_PublicMemberProperty(bool, _windowDecoration);
	I_PublicMemberProperty(bool, _supportsResize);
	I_PublicMemberProperty(unsigned int, _red);
	I_PublicMemberProperty(unsigned int, _blue);
	I_PublicMemberProperty(unsigned int, _green);
	I_PublicMemberProperty(unsigned int, _alpha);
	I_PublicMemberProperty(unsigned int, _depth);
	I_PublicMemberProperty(unsigned int, _stencil);
	I_PublicMemberProperty(bool, _pbuffer);
	I_PublicMemberProperty(bool, _quadBufferStereo);
	I_PublicMemberProperty(bool, _doubleBuffer);
	I_PublicMemberProperty(GLenum, _target);
	I_PublicMemberProperty(unsigned int, _level);
	I_PublicMemberProperty(unsigned int, _face);
	I_PublicMemberProperty(unsigned int, _mipMapGeneration);
	I_PublicMemberProperty(osg::GraphicsContext *, _sharedContext);
END_REFLECTOR

