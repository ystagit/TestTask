#ifndef INCLUDED_elements_Elements
#define INCLUDED_elements_Elements

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(elements,Elements)

namespace elements{


class HXCPP_CLASS_ATTRIBUTES Elements_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Elements_obj OBJ_;
		Elements_obj();

	public:
		enum { _hx_ClassId = 0x0bf788ce };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="elements.Elements")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"elements.Elements"); }

		inline static ::hx::ObjectPtr< Elements_obj > __new() {
			::hx::ObjectPtr< Elements_obj > __this = new Elements_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Elements_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Elements_obj *__this = (Elements_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Elements_obj), false, "elements.Elements"));
			*(void **)__this = Elements_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Elements_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Elements",57,f2,75,5d); }

		static void __boot();
		static ::String SCENE;
		static ::String TAB_CONTEXT;
		static ::String TAB_PANEL;
		static ::String TAB_LIST;
		static ::String TAB;
		static ::String TEXT;
		static ::String ROW;
		static ::String COLUMN;
		static ::String GRID;
		static ::String BUTTON;
};

} // end namespace elements

#endif /* INCLUDED_elements_Elements */ 
