#ifndef INCLUDED_models_Model
#define INCLUDED_models_Model

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS1(models,Model)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(shared,BoundingBox)
HX_DECLARE_CLASS1(shared,Color)
HX_DECLARE_CLASS1(shared,Padding)
HX_DECLARE_CLASS1(shared,Point)
HX_DECLARE_CLASS1(shared,Position)
HX_DECLARE_CLASS2(shared,align,Align)
HX_DECLARE_CLASS2(shared,size,Size)

namespace models{


class HXCPP_CLASS_ATTRIBUTES Model_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Model_obj OBJ_;
		Model_obj();

	public:
		enum { _hx_ClassId = 0x3117369f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="models.Model")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"models.Model"); }
		static ::hx::ObjectPtr< Model_obj > __new();
		static ::hx::ObjectPtr< Model_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Model_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Model",89,93,85,9f); }

		bool visible;
		 ::shared::Color borderColor;
		 ::shared::Color highlight;
		 ::shared::align::Align align;
		::Dynamic parentModel;
		 ::shared::Position position;
		 ::shared::Position _position;
		 ::shared::size::Size size;
		 ::shared::size::Size _size;
		 ::shared::Color background;
		 ::shared::Padding padding;
		 ::shared::BoundingBox boundingBox;
		bool isHover;
		bool get_visible();
		::Dynamic get_visible_dyn();

		bool set_visible(bool visible);
		::Dynamic set_visible_dyn();

		 ::shared::align::Align get_align();
		::Dynamic get_align_dyn();

		void setParentModel(::Dynamic model);
		::Dynamic setParentModel_dyn();

		 ::shared::Padding getPadding();
		::Dynamic getPadding_dyn();

		void setPadding(int left,int top,int right,int bottom);
		::Dynamic setPadding_dyn();

		 ::shared::Position getPosition();
		::Dynamic getPosition_dyn();

		void setPosition( ::Dynamic x, ::Dynamic y);
		::Dynamic setPosition_dyn();

		 ::shared::size::Size getSize();
		::Dynamic getSize_dyn();

		void setSize( ::Dynamic width, ::Dynamic height);
		::Dynamic setSize_dyn();

		void setMaxSize(Float w,Float h);
		::Dynamic setMaxSize_dyn();

		void syncMaxSize();
		::Dynamic syncMaxSize_dyn();

		 ::shared::Color get_highlight();
		::Dynamic get_highlight_dyn();

		 ::shared::Color get_borderColor();
		::Dynamic get_borderColor_dyn();

		 ::shared::Color getBGColor();
		::Dynamic getBGColor_dyn();

		void setBGColor( ::shared::Color color);
		::Dynamic setBGColor_dyn();

		void syncResize();
		::Dynamic syncResize_dyn();

		bool hasHover();
		::Dynamic hasHover_dyn();

		virtual void show();
		::Dynamic show_dyn();

		void hide();
		::Dynamic hide_dyn();

		void hover( ::shared::Point p);
		::Dynamic hover_dyn();

		void update();
		::Dynamic update_dyn();

		void applyPosision();
		::Dynamic applyPosision_dyn();

		void applySize();
		::Dynamic applySize_dyn();

		void applyPadding();
		::Dynamic applyPadding_dyn();

		void updateBound();
		::Dynamic updateBound_dyn();

};

} // end namespace models

#endif /* INCLUDED_models_Model */ 
