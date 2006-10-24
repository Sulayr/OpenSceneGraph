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

#include <osg/ArgumentParser>
#include <osg/CullSettings>
#include <osg/Matrixd>
#include <osg/Matrixf>
#include <osg/Node>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(unsigned int, osg::CullSettings::CullingMode);

BEGIN_ENUM_REFLECTOR(osg::CullSettings::VariablesMask)
	I_EnumLabel(osg::CullSettings::COMPUTE_NEAR_FAR_MODE);
	I_EnumLabel(osg::CullSettings::CULLING_MODE);
	I_EnumLabel(osg::CullSettings::LOD_SCALE);
	I_EnumLabel(osg::CullSettings::SMALL_FEATURE_CULLING_PIXEL_SIZE);
	I_EnumLabel(osg::CullSettings::CLAMP_PROJECTION_MATRIX_CALLBACK);
	I_EnumLabel(osg::CullSettings::NEAR_FAR_RATIO);
	I_EnumLabel(osg::CullSettings::IMPOSTOR_ACTIVE);
	I_EnumLabel(osg::CullSettings::DEPTH_SORT_IMPOSTOR_SPRITES);
	I_EnumLabel(osg::CullSettings::IMPOSTOR_PIXEL_ERROR_THRESHOLD);
	I_EnumLabel(osg::CullSettings::NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES);
	I_EnumLabel(osg::CullSettings::CULL_MASK);
	I_EnumLabel(osg::CullSettings::CULL_MASK_LEFT);
	I_EnumLabel(osg::CullSettings::CULL_MASK_RIGHT);
	I_EnumLabel(osg::CullSettings::CLEAR_COLOR);
	I_EnumLabel(osg::CullSettings::NO_VARIABLES);
	I_EnumLabel(osg::CullSettings::ALL_VARIABLES);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::CullSettings::ComputeNearFarMode)
	I_EnumLabel(osg::CullSettings::DO_NOT_COMPUTE_NEAR_FAR);
	I_EnumLabel(osg::CullSettings::COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES);
	I_EnumLabel(osg::CullSettings::COMPUTE_NEAR_FAR_USING_PRIMITIVES);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::CullSettings::CullingModeValues)
	I_EnumLabel(osg::CullSettings::NO_CULLING);
	I_EnumLabel(osg::CullSettings::VIEW_FRUSTUM_SIDES_CULLING);
	I_EnumLabel(osg::CullSettings::NEAR_PLANE_CULLING);
	I_EnumLabel(osg::CullSettings::FAR_PLANE_CULLING);
	I_EnumLabel(osg::CullSettings::VIEW_FRUSTUM_CULLING);
	I_EnumLabel(osg::CullSettings::SMALL_FEATURE_CULLING);
	I_EnumLabel(osg::CullSettings::SHADOW_OCCLUSION_CULLING);
	I_EnumLabel(osg::CullSettings::CLUSTER_CULLING);
	I_EnumLabel(osg::CullSettings::DEFAULT_CULLING);
	I_EnumLabel(osg::CullSettings::ENABLE_ALL_CULLING);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::CullSettings)
	I_Constructor0(____CullSettings,
	               "",
	               "");
	I_Constructor1(IN, osg::ArgumentParser &, arguments,
	               ____CullSettings__ArgumentParser_R1,
	               "",
	               "");
	I_Constructor1(IN, const osg::CullSettings &, cs,
	               ____CullSettings__C5_CullSettings_R1,
	               "",
	               "");
	I_Method0(void, setDefaults,
	          __void__setDefaults,
	          "",
	          "");
	I_Method1(void, setInheritanceMask, IN, unsigned int, mask,
	          __void__setInheritanceMask__unsigned_int,
	          "Set the inheritance mask used in inheritCullSettings to control which variables get overritten by the passed in CullSettings object. ",
	          "");
	I_Method0(unsigned int, getInheritanceMask,
	          __unsigned_int__getInheritanceMask,
	          "Get the inheritance mask used in inheritCullSettings to control which variables get overritten by the passed in CullSettings object. ",
	          "");
	I_Method1(void, setCullSettings, IN, const osg::CullSettings &, settings,
	          __void__setCullSettings__C5_CullSettings_R1,
	          "Set the local cull settings values from specified CullSettings object. ",
	          "");
	I_Method1(void, inheritCullSettings, IN, const osg::CullSettings &, settings,
	          __void__inheritCullSettings__C5_CullSettings_R1,
	          "Inherit the local cull settings variable from specified CullSettings object, according to the inheritance mask. ",
	          "");
	I_Method2(void, inheritCullSettings, IN, const osg::CullSettings &, settings, IN, unsigned int, inheritanceMask,
	          __void__inheritCullSettings__C5_CullSettings_R1__unsigned_int,
	          "Inherit the local cull settings variable from specified CullSettings object, according to the inheritance mask. ",
	          "");
	I_Method0(void, readEnvironmentalVariables,
	          __void__readEnvironmentalVariables,
	          "read the environmental variables. ",
	          "");
	I_Method1(void, readCommandLine, IN, osg::ArgumentParser &, arguments,
	          __void__readCommandLine__ArgumentParser_R1,
	          "read the commandline arguments. ",
	          "");
	I_Method1(void, setImpostorsActive, IN, bool, active,
	          __void__setImpostorsActive__bool,
	          "Switch the creation of Impostors on or off. ",
	          "Setting active to false forces the CullVisitor to use the Impostor LOD children for rendering. Setting active to true forces the CullVisitor to create the appropriate pre-rendering stages which render to the ImpostorSprite's texture. ");
	I_Method0(bool, getImpostorsActive,
	          __bool__getImpostorsActive,
	          "Get whether impostors are active or not. ",
	          "");
	I_Method1(void, setImpostorPixelErrorThreshold, IN, float, numPixels,
	          __void__setImpostorPixelErrorThreshold__float,
	          "Set the impostor error threshold. ",
	          "Used in calculation of whether impostors remain valid. ");
	I_Method0(float, getImpostorPixelErrorThreshold,
	          __float__getImpostorPixelErrorThreshold,
	          "Get the impostor error threshold. ",
	          "");
	I_Method1(void, setDepthSortImpostorSprites, IN, bool, doDepthSort,
	          __void__setDepthSortImpostorSprites__bool,
	          "Set whether ImpostorSprite's should be placed in a depth sorted bin for rendering. ",
	          "");
	I_Method0(bool, getDepthSortImpostorSprites,
	          __bool__getDepthSortImpostorSprites,
	          "Get whether ImpostorSprite's are depth sorted bin for rendering. ",
	          "");
	I_Method1(void, setNumberOfFrameToKeepImpostorSprites, IN, int, numFrames,
	          __void__setNumberOfFrameToKeepImpostorSprites__int,
	          "Set the number of frames that an ImpostorSprite is kept whilst not being beyond, before being recycled. ",
	          "");
	I_Method0(int, getNumberOfFrameToKeepImpostorSprites,
	          __int__getNumberOfFrameToKeepImpostorSprites,
	          "Get the number of frames that an ImpostorSprite is kept whilst not being beyond, before being recycled. ",
	          "");
	I_Method1(void, setComputeNearFarMode, IN, osg::CullSettings::ComputeNearFarMode, cnfm,
	          __void__setComputeNearFarMode__ComputeNearFarMode,
	          "",
	          "");
	I_Method0(osg::CullSettings::ComputeNearFarMode, getComputeNearFarMode,
	          __ComputeNearFarMode__getComputeNearFarMode,
	          "",
	          "");
	I_Method1(void, setNearFarRatio, IN, double, ratio,
	          __void__setNearFarRatio__double,
	          "",
	          "");
	I_Method0(double, getNearFarRatio,
	          __double__getNearFarRatio,
	          "",
	          "");
	I_Method1(void, setCullingMode, IN, osg::CullSettings::CullingMode, mode,
	          __void__setCullingMode__CullingMode,
	          "Set the culling mode for the CullVisitor to use. ",
	          "");
	I_Method0(osg::CullSettings::CullingMode, getCullingMode,
	          __CullingMode__getCullingMode,
	          "Returns the current CullingMode. ",
	          "");
	I_Method1(void, setCullMask, IN, osg::Node::NodeMask, nm,
	          __void__setCullMask__osg_Node_NodeMask,
	          "",
	          "");
	I_Method0(osg::Node::NodeMask, getCullMask,
	          __osg_Node_NodeMask__getCullMask,
	          "",
	          "");
	I_Method1(void, setCullMaskLeft, IN, osg::Node::NodeMask, nm,
	          __void__setCullMaskLeft__osg_Node_NodeMask,
	          "",
	          "");
	I_Method0(osg::Node::NodeMask, getCullMaskLeft,
	          __osg_Node_NodeMask__getCullMaskLeft,
	          "",
	          "");
	I_Method1(void, setCullMaskRight, IN, osg::Node::NodeMask, nm,
	          __void__setCullMaskRight__osg_Node_NodeMask,
	          "",
	          "");
	I_Method0(osg::Node::NodeMask, getCullMaskRight,
	          __osg_Node_NodeMask__getCullMaskRight,
	          "",
	          "");
	I_Method1(void, setLODScale, IN, float, bias,
	          __void__setLODScale__float,
	          "Set the LOD bias for the CullVisitor to use. ",
	          "");
	I_Method0(float, getLODScale,
	          __float__getLODScale,
	          "Get the LOD bias. ",
	          "");
	I_Method1(void, setSmallFeatureCullingPixelSize, IN, float, value,
	          __void__setSmallFeatureCullingPixelSize__float,
	          "Set the Small Feature Culling Pixel Size. ",
	          "");
	I_Method0(float, getSmallFeatureCullingPixelSize,
	          __float__getSmallFeatureCullingPixelSize,
	          "Get the Small Feature Culling Pixel Size. ",
	          "");
	I_Method1(void, setClampProjectionMatrixCallback, IN, osg::CullSettings::ClampProjectionMatrixCallback *, cpmc,
	          __void__setClampProjectionMatrixCallback__ClampProjectionMatrixCallback_P1,
	          "set the ClampProjectionMatrixCallback. ",
	          "");
	I_Method0(osg::CullSettings::ClampProjectionMatrixCallback *, getClampProjectionMatrixCallback,
	          __ClampProjectionMatrixCallback_P1__getClampProjectionMatrixCallback,
	          "get the non const ClampProjectionMatrixCallback. ",
	          "");
	I_Method0(const osg::CullSettings::ClampProjectionMatrixCallback *, getClampProjectionMatrixCallback,
	          __C5_ClampProjectionMatrixCallback_P1__getClampProjectionMatrixCallback,
	          "get the const ClampProjectionMatrixCallback. ",
	          "");
	I_SimpleProperty(osg::CullSettings::ClampProjectionMatrixCallback *, ClampProjectionMatrixCallback, 
	                 __ClampProjectionMatrixCallback_P1__getClampProjectionMatrixCallback, 
	                 __void__setClampProjectionMatrixCallback__ClampProjectionMatrixCallback_P1);
	I_SimpleProperty(osg::CullSettings::ComputeNearFarMode, ComputeNearFarMode, 
	                 __ComputeNearFarMode__getComputeNearFarMode, 
	                 __void__setComputeNearFarMode__ComputeNearFarMode);
	I_SimpleProperty(osg::Node::NodeMask, CullMask, 
	                 __osg_Node_NodeMask__getCullMask, 
	                 __void__setCullMask__osg_Node_NodeMask);
	I_SimpleProperty(osg::Node::NodeMask, CullMaskLeft, 
	                 __osg_Node_NodeMask__getCullMaskLeft, 
	                 __void__setCullMaskLeft__osg_Node_NodeMask);
	I_SimpleProperty(osg::Node::NodeMask, CullMaskRight, 
	                 __osg_Node_NodeMask__getCullMaskRight, 
	                 __void__setCullMaskRight__osg_Node_NodeMask);
	I_SimpleProperty(const osg::CullSettings &, CullSettings, 
	                 0, 
	                 __void__setCullSettings__C5_CullSettings_R1);
	I_SimpleProperty(osg::CullSettings::CullingMode, CullingMode, 
	                 __CullingMode__getCullingMode, 
	                 __void__setCullingMode__CullingMode);
	I_SimpleProperty(bool, DepthSortImpostorSprites, 
	                 __bool__getDepthSortImpostorSprites, 
	                 __void__setDepthSortImpostorSprites__bool);
	I_SimpleProperty(float, ImpostorPixelErrorThreshold, 
	                 __float__getImpostorPixelErrorThreshold, 
	                 __void__setImpostorPixelErrorThreshold__float);
	I_SimpleProperty(bool, ImpostorsActive, 
	                 __bool__getImpostorsActive, 
	                 __void__setImpostorsActive__bool);
	I_SimpleProperty(unsigned int, InheritanceMask, 
	                 __unsigned_int__getInheritanceMask, 
	                 __void__setInheritanceMask__unsigned_int);
	I_SimpleProperty(float, LODScale, 
	                 __float__getLODScale, 
	                 __void__setLODScale__float);
	I_SimpleProperty(double, NearFarRatio, 
	                 __double__getNearFarRatio, 
	                 __void__setNearFarRatio__double);
	I_SimpleProperty(int, NumberOfFrameToKeepImpostorSprites, 
	                 __int__getNumberOfFrameToKeepImpostorSprites, 
	                 __void__setNumberOfFrameToKeepImpostorSprites__int);
	I_SimpleProperty(float, SmallFeatureCullingPixelSize, 
	                 __float__getSmallFeatureCullingPixelSize, 
	                 __void__setSmallFeatureCullingPixelSize__float);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::CullSettings::ClampProjectionMatrixCallback)
	I_BaseType(osg::Referenced);
	I_Constructor0(____ClampProjectionMatrixCallback,
	               "",
	               "");
	I_Method3(bool, clampProjectionMatrixImplementation, IN, osg::Matrixf &, projection, IN, double &, znear, IN, double &, zfar,
	          __bool__clampProjectionMatrixImplementation__osg_Matrixf_R1__double_R1__double_R1,
	          "",
	          "");
	I_Method3(bool, clampProjectionMatrixImplementation, IN, osg::Matrixd &, projection, IN, double &, znear, IN, double &, zfar,
	          __bool__clampProjectionMatrixImplementation__osg_Matrixd_R1__double_R1__double_R1,
	          "",
	          "");
END_REFLECTOR

