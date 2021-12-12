#include <hxcpp.h>

#ifndef INCLUDED_scenes_root_IScene
#include <scenes/root/IScene.h>
#endif

namespace scenes{
namespace root{


::hx::Class IScene_obj::__mClass;

void IScene_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("scenes.root.IScene",c8,4b,53,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa014d5cc >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace scenes
} // end namespace root
