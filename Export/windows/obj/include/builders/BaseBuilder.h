#ifndef INCLUDED_builders_BaseBuilder
#define INCLUDED_builders_BaseBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(builders,BaseBuilder)

namespace builders{


class HXCPP_CLASS_ATTRIBUTES BaseBuilder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BaseBuilder_obj OBJ_;
		BaseBuilder_obj();

	public:
		enum { _hx_ClassId = 0x0b784972 };

		void __construct( ::Xml node);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="builders.BaseBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"builders.BaseBuilder"); }

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BaseBuilder",ea,46,f4,a5); }

		 ::Xml node;
		 ::Xml get_node();
		::Dynamic get_node_dyn();

		virtual void validateRequiredAttrs() = 0;
		::Dynamic validateRequiredAttrs_dyn();
		virtual void initAttributes() = 0;
		::Dynamic initAttributes_dyn();
};

} // end namespace builders

#endif /* INCLUDED_builders_BaseBuilder */ 
