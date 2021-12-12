#ifndef INCLUDED_models_IModel
#define INCLUDED_models_IModel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS1(models,IModel)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(shared,Color)
HX_DECLARE_CLASS1(shared,Padding)
HX_DECLARE_CLASS1(shared,Position)
HX_DECLARE_CLASS2(shared,size,Size)

namespace models{


class HXCPP_CLASS_ATTRIBUTES IModel_obj {
	public:
		typedef  ::openfl::events::IEventDispatcher_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_willTrigger)(type);
		}
		bool (::hx::Object :: *_hx_get_visible)(); 
		static inline bool get_visible( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_get_visible)();
		}
		bool (::hx::Object :: *_hx_set_visible)(bool value); 
		static inline bool set_visible( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_set_visible)(value);
		}
		 ::shared::Color (::hx::Object :: *_hx_get_borderColor)(); 
		static inline  ::shared::Color get_borderColor( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_get_borderColor)();
		}
		 ::shared::Color (::hx::Object :: *_hx_get_highlight)(); 
		static inline  ::shared::Color get_highlight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_get_highlight)();
		}
		 ::shared::Padding (::hx::Object :: *_hx_getPadding)(); 
		static inline  ::shared::Padding getPadding( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_getPadding)();
		}
		void (::hx::Object :: *_hx_setPadding)(int top,int right,int bottom,int left); 
		static inline void setPadding( ::Dynamic _hx_,int top,int right,int bottom,int left) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_setPadding)(top,right,bottom,left);
		}
		 ::shared::Position (::hx::Object :: *_hx_getPosition)(); 
		static inline  ::shared::Position getPosition( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_getPosition)();
		}
		void (::hx::Object :: *_hx_setPosition)( ::Dynamic x, ::Dynamic y); 
		static inline void setPosition( ::Dynamic _hx_, ::Dynamic x, ::Dynamic y) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_setPosition)(x,y);
		}
		 ::shared::size::Size (::hx::Object :: *_hx_getSize)(); 
		static inline  ::shared::size::Size getSize( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_getSize)();
		}
		void (::hx::Object :: *_hx_setSize)( ::Dynamic width, ::Dynamic height); 
		static inline void setSize( ::Dynamic _hx_, ::Dynamic width, ::Dynamic height) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_setSize)(width,height);
		}
		void (::hx::Object :: *_hx_setMaxSize)(Float w,Float h); 
		static inline void setMaxSize( ::Dynamic _hx_,Float w,Float h) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_setMaxSize)(w,h);
		}
		bool (::hx::Object :: *_hx_hasHover)(); 
		static inline bool hasHover( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_hasHover)();
		}
		 ::shared::Color (::hx::Object :: *_hx_getBGColor)(); 
		static inline  ::shared::Color getBGColor( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_getBGColor)();
		}
		void (::hx::Object :: *_hx_setParentModel)(::Dynamic model); 
		static inline void setParentModel( ::Dynamic _hx_,::Dynamic model) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::models::IModel_obj *>(_hx_.mPtr->_hx_getInterface(0xbb84780a)))->_hx_setParentModel)(model);
		}
};

} // end namespace models

#endif /* INCLUDED_models_IModel */ 
