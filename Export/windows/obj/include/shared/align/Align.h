#ifndef INCLUDED_shared_align_Align
#define INCLUDED_shared_align_Align

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(shared,align,Align)
HX_DECLARE_CLASS2(shared,align,AlignType)

namespace shared{
namespace align{


class HXCPP_CLASS_ATTRIBUTES Align_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Align_obj OBJ_;
		Align_obj();

	public:
		enum { _hx_ClassId = 0x0deb2b99 };

		void __construct( ::shared::align::AlignType alignTypeByVer, ::shared::align::AlignType alignTypeByHor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shared.align.Align")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shared.align.Align"); }
		static ::hx::ObjectPtr< Align_obj > __new( ::shared::align::AlignType alignTypeByVer, ::shared::align::AlignType alignTypeByHor);
		static ::hx::ObjectPtr< Align_obj > __alloc(::hx::Ctx *_hx_ctx, ::shared::align::AlignType alignTypeByVer, ::shared::align::AlignType alignTypeByHor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Align_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Align",a5,c6,be,b4); }

		 ::shared::align::AlignType alignTypeByVer;
		 ::shared::align::AlignType alignTypeByHor;
		 ::shared::align::AlignType get_alignTypeByVer();
		::Dynamic get_alignTypeByVer_dyn();

		 ::shared::align::AlignType set_alignTypeByVer( ::shared::align::AlignType type);
		::Dynamic set_alignTypeByVer_dyn();

		 ::shared::align::AlignType get_alignTypeByHor();
		::Dynamic get_alignTypeByHor_dyn();

		 ::shared::align::AlignType set_alignTypeByHor( ::shared::align::AlignType type);
		::Dynamic set_alignTypeByHor_dyn();

		void align(::Dynamic currentElement,::Dynamic parentElement);
		::Dynamic align_dyn();

};

} // end namespace shared
} // end namespace align

#endif /* INCLUDED_shared_align_Align */ 
