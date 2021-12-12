#ifndef INCLUDED_elements_ElementType
#define INCLUDED_elements_ElementType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(elements,ElementType)

namespace elements{


class HXCPP_CLASS_ATTRIBUTES ElementType_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ElementType_obj OBJ_;
		ElementType_obj();

	public:
		enum { _hx_ClassId = 0x293d8d7b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="elements.ElementType")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"elements.ElementType"); }

		inline static ::hx::ObjectPtr< ElementType_obj > __new() {
			::hx::ObjectPtr< ElementType_obj > __this = new ElementType_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ElementType_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ElementType_obj *__this = (ElementType_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ElementType_obj), false, "elements.ElementType"));
			*(void **)__this = ElementType_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ElementType_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ElementType",76,73,ad,d4); }

		static void __boot();
		static ::String SNACKBAR;
		static ::String MODAL;
		static ::String SCENE;
		static ::String TAB_CONTEXT;
		static ::String TAB_PANEL;
		static ::String TAB_LIST;
		static ::String TAB;
		static ::String TEXT;
		static ::String IMAGE;
		static ::String ROW;
		static ::String COLUMN;
		static ::String GRID;
		static ::String BUTTON;
		static ::String IMG_BUTTON;
};

} // end namespace elements

#endif /* INCLUDED_elements_ElementType */ 
