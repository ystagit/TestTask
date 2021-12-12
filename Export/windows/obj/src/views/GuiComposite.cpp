#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_controllers_IController
#include <controllers/IController.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
#endif
#ifndef INCLUDED_views_GuiComponent
#include <views/GuiComponent.h>
#endif
#ifndef INCLUDED_views_GuiComposite
#include <views/GuiComposite.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b5b9106884c7e3be_16_new,"views.GuiComposite","new",0x343a671e,"views.GuiComposite.new","views/GuiComposite.hx",16,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_21_initAfterSettingPartner,"views.GuiComposite","initAfterSettingPartner",0xba754262,"views.GuiComposite.initAfterSettingPartner","views/GuiComposite.hx",21,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_32_add,"views.GuiComposite","add",0x343088df,"views.GuiComposite.add","views/GuiComposite.hx",32,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_44_getChildrenLength,"views.GuiComposite","getChildrenLength",0xb31c71f9,"views.GuiComposite.getChildrenLength","views/GuiComposite.hx",44,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_48_getChildrenByKey,"views.GuiComposite","getChildrenByKey",0x86759255,"views.GuiComposite.getChildrenByKey","views/GuiComposite.hx",48,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_51_findChildren,"views.GuiComposite","findChildren",0xd6c3a81a,"views.GuiComposite.findChildren","views/GuiComposite.hx",51,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_73_getChildByIndex,"views.GuiComposite","getChildByIndex",0x8cab64f3,"views.GuiComposite.getChildByIndex","views/GuiComposite.hx",73,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_82_hover,"views.GuiComposite","hover",0x172d27fa,"views.GuiComposite.hover","views/GuiComposite.hx",82,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_92_show,"views.GuiComposite","show",0x8230247f,"views.GuiComposite.show","views/GuiComposite.hx",92,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_105_hide,"views.GuiComposite","hide",0x7aeb8444,"views.GuiComposite.hide","views/GuiComposite.hx",105,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_115_resize,"views.GuiComposite","resize",0x6bed0df6,"views.GuiComposite.resize","views/GuiComposite.hx",115,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_125_change,"views.GuiComposite","change",0x1ae44572,"views.GuiComposite.change","views/GuiComposite.hx",125,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_135_updateAll,"views.GuiComposite","updateAll",0x17c00fd6,"views.GuiComposite.updateAll","views/GuiComposite.hx",135,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_146_remove,"views.GuiComposite","remove",0x67fa5046,"views.GuiComposite.remove","views/GuiComposite.hx",146,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_164_safeRemove,"views.GuiComposite","safeRemove",0x7143e273,"views.GuiComposite.safeRemove","views/GuiComposite.hx",164,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_172_getComposite,"views.GuiComposite","getComposite",0x9ad74e13,"views.GuiComposite.getComposite","views/GuiComposite.hx",172,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_175_setMaxSize,"views.GuiComposite","setMaxSize",0xd68bfb05,"views.GuiComposite.setMaxSize","views/GuiComposite.hx",175,0x7df38f31)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b9106884c7e3be_180_parsePath,"views.GuiComposite","parsePath",0x66e170b6,"views.GuiComposite.parsePath","views/GuiComposite.hx",180,0x7df38f31)
namespace views{

void GuiComposite_obj::__construct(::Dynamic model,::Dynamic controller){
            	HX_GC_STACKFRAME(&_hx_pos_b5b9106884c7e3be_16_new)
HXLINE(  17)		super::__construct(model,controller);
HXLINE(  18)		this->childern =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic GuiComposite_obj::__CreateEmpty() { return new GuiComposite_obj; }

void *GuiComposite_obj::_hx_vtable = 0;

Dynamic GuiComposite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GuiComposite_obj > _hx_result = new GuiComposite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GuiComposite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee7691a) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1b9649d0 || inClassId==(int)0x1ee7691a;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void GuiComposite_obj::initAfterSettingPartner(){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_21_initAfterSettingPartner)
HXLINE(  22)		::Dynamic parentModel = this->getParent()->getModel();
HXLINE(  23)		this->setMaxSize(parentModel);
HXLINE(  25)		if (::models::IModel_obj::get_visible(parentModel)) {
HXLINE(  26)			this->show(null());
            		}
            		else {
HXLINE(  28)			this->hide(null());
            		}
            	}


void GuiComposite_obj::add(::String k, ::views::GuiComponent c){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_32_add)
HXLINE(  33)		::Array< ::Dynamic> elements = ( (::Array< ::Dynamic>)(this->childern->get(k)) );
HXLINE(  34)		if (::hx::IsNull( elements )) {
HXLINE(  35)			elements = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE(  37)		elements->push(c);
HXLINE(  38)		this->childern->set(k,elements);
HXLINE(  39)		c->setParent(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  40)		this->addChild(c);
            	}


int GuiComposite_obj::getChildrenLength(::String k){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_44_getChildrenLength)
HXDLIN(  44)		if (::hx::IsNotNull( this->childern->get(k) )) {
HXDLIN(  44)			return ( (::Array< ::Dynamic>)(this->childern->get(k)) )->length;
            		}
            		else {
HXDLIN(  44)			return 0;
            		}
HXDLIN(  44)		return 0;
            	}


::Array< ::Dynamic> GuiComposite_obj::getChildrenByKey(::String k){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_48_getChildrenByKey)
HXDLIN(  48)		return ( (::Array< ::Dynamic>)(this->childern->get(k)) );
            	}


::Array< ::Dynamic> GuiComposite_obj::findChildren(::String path){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_51_findChildren)
HXLINE(  52)		::Array< ::Dynamic> elements = this->parsePath(path);
HXLINE(  53)		::Array< ::Dynamic> _childern = null();
HXLINE(  54)		 ::views::GuiComponent _foundChild = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			while((_g < elements->length)){
HXLINE(  56)				::cpp::VirtualArray element = ::cpp::VirtualArray( elements->__get(_g));
HXDLIN(  56)				_g = (_g + 1);
HXLINE(  57)				_childern = _foundChild->getChildrenByKey(( (::String)(_hx_array_unsafe_get(element,0)) ));
HXLINE(  59)				bool _hx_tmp;
HXDLIN(  59)				if (::hx::IsNotNull( _childern )) {
HXLINE(  59)					_hx_tmp = (_childern->length == 0);
            				}
            				else {
HXLINE(  59)					_hx_tmp = true;
            				}
HXDLIN(  59)				if (_hx_tmp) {
HXLINE(  60)					goto _hx_goto_5;
            				}
HXLINE(  63)				_foundChild = _childern->__get(( (int)(_hx_array_unsafe_get(element,1)) )).StaticCast<  ::views::GuiComponent >();
HXLINE(  64)				if (::hx::IsNull( _foundChild )) {
HXLINE(  65)					_childern = null();
HXLINE(  66)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE(  70)		return _childern;
            	}


 ::views::GuiComponent GuiComposite_obj::getChildByIndex(::String k,int i){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_73_getChildByIndex)
HXLINE(  74)		::Array< ::Dynamic> elements = ( (::Array< ::Dynamic>)(this->childern->get(k)) );
HXLINE(  75)		bool _hx_tmp;
HXDLIN(  75)		if ((i > 0)) {
HXLINE(  75)			_hx_tmp = (i <= elements->length);
            		}
            		else {
HXLINE(  75)			_hx_tmp = false;
            		}
HXDLIN(  75)		if (_hx_tmp) {
HXLINE(  76)			return elements->__get((i - 1)).StaticCast<  ::views::GuiComponent >();
            		}
            		else {
HXLINE(  78)			return null();
            		}
HXLINE(  75)		return null();
            	}


void GuiComposite_obj::hover( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_82_hover)
HXLINE(  83)		::controllers::IController_obj::onHover(this->controller,e);
HXLINE(  85)		{
HXLINE(  85)			 ::Dynamic elements = this->childern->iterator();
HXDLIN(  85)			while(( (bool)(elements->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  85)				::Array< ::Dynamic> elements1 = ( (::Array< ::Dynamic>)(elements->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  86)				{
HXLINE(  86)					int _g = 0;
HXDLIN(  86)					while((_g < elements1->length)){
HXLINE(  86)						 ::views::GuiComponent el = elements1->__get(_g).StaticCast<  ::views::GuiComponent >();
HXDLIN(  86)						_g = (_g + 1);
HXLINE(  87)						el->hover(e);
            					}
            				}
            			}
            		}
            	}


void GuiComposite_obj::show( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_92_show)
HXLINE(  93)		if (::hx::IsNotNull( e )) {
HXLINE(  94)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  94)			 ::haxe::ds::StringMap tmp = e->get_data();
HXDLIN(  94)			::String _hx_tmp1;
HXDLIN(  94)			if (::hx::IsNull( tmp )) {
HXLINE(  94)				_hx_tmp1 = HX_("null",87,9e,0e,49);
            			}
            			else {
HXLINE(  94)				_hx_tmp1 = tmp->toString();
            			}
HXDLIN(  94)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("Source/views/GuiComposite.hx",dd,2f,9f,09),94,HX_("views.GuiComposite",2c,40,3d,b8),HX_("show",fd,d4,52,4c)));
            		}
HXLINE(  96)		::controllers::IController_obj::onShow(this->controller,e);
HXLINE(  98)		{
HXLINE(  98)			 ::Dynamic elements = this->childern->iterator();
HXDLIN(  98)			while(( (bool)(elements->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  98)				::Array< ::Dynamic> elements1 = ( (::Array< ::Dynamic>)(elements->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  99)				{
HXLINE(  99)					int _g = 0;
HXDLIN(  99)					while((_g < elements1->length)){
HXLINE(  99)						 ::views::GuiComponent el = elements1->__get(_g).StaticCast<  ::views::GuiComponent >();
HXDLIN(  99)						_g = (_g + 1);
HXLINE( 100)						el->show(e);
            					}
            				}
            			}
            		}
            	}


void GuiComposite_obj::hide( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_105_hide)
HXLINE( 106)		::controllers::IController_obj::onHide(this->controller,e);
HXLINE( 108)		{
HXLINE( 108)			 ::Dynamic elements = this->childern->iterator();
HXDLIN( 108)			while(( (bool)(elements->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 108)				::Array< ::Dynamic> elements1 = ( (::Array< ::Dynamic>)(elements->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 109)				{
HXLINE( 109)					int _g = 0;
HXDLIN( 109)					while((_g < elements1->length)){
HXLINE( 109)						 ::views::GuiComponent el = elements1->__get(_g).StaticCast<  ::views::GuiComponent >();
HXDLIN( 109)						_g = (_g + 1);
HXLINE( 110)						el->hide(e);
            					}
            				}
            			}
            		}
            	}


void GuiComposite_obj::resize( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_115_resize)
HXLINE( 116)		::controllers::IController_obj::onSyncResize(this->controller);
HXLINE( 118)		{
HXLINE( 118)			 ::Dynamic elements = this->childern->iterator();
HXDLIN( 118)			while(( (bool)(elements->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 118)				::Array< ::Dynamic> elements1 = ( (::Array< ::Dynamic>)(elements->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 119)				{
HXLINE( 119)					int _g = 0;
HXDLIN( 119)					while((_g < elements1->length)){
HXLINE( 119)						 ::views::GuiComponent el = elements1->__get(_g).StaticCast<  ::views::GuiComponent >();
HXDLIN( 119)						_g = (_g + 1);
HXLINE( 120)						el->resize(e);
            					}
            				}
            			}
            		}
            	}


void GuiComposite_obj::change( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_125_change)
HXLINE( 126)		::controllers::IController_obj::onUpdate(this->controller,e);
HXLINE( 128)		{
HXLINE( 128)			 ::Dynamic elements = this->childern->iterator();
HXDLIN( 128)			while(( (bool)(elements->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 128)				::Array< ::Dynamic> elements1 = ( (::Array< ::Dynamic>)(elements->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 129)				{
HXLINE( 129)					int _g = 0;
HXDLIN( 129)					while((_g < elements1->length)){
HXLINE( 129)						 ::views::GuiComponent el = elements1->__get(_g).StaticCast<  ::views::GuiComponent >();
HXDLIN( 129)						_g = (_g + 1);
HXLINE( 130)						el->change(e);
            					}
            				}
            			}
            		}
            	}


void GuiComposite_obj::updateAll( ::models::ModelEvent e){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_135_updateAll)
HXLINE( 136)		::controllers::IController_obj::onUpdate(this->controller,e);
HXLINE( 138)		{
HXLINE( 138)			 ::Dynamic elements = this->childern->iterator();
HXDLIN( 138)			while(( (bool)(elements->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 138)				::Array< ::Dynamic> elements1 = ( (::Array< ::Dynamic>)(elements->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 139)				{
HXLINE( 139)					int _g = 0;
HXDLIN( 139)					while((_g < elements1->length)){
HXLINE( 139)						 ::views::GuiComponent el = elements1->__get(_g).StaticCast<  ::views::GuiComponent >();
HXDLIN( 139)						_g = (_g + 1);
HXLINE( 140)						el->updateAll(e);
            					}
            				}
            			}
            		}
            	}


void GuiComposite_obj::remove( ::views::GuiComponent c){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_146_remove)
HXDLIN( 146)		 ::Dynamic elements = this->childern->iterator();
HXDLIN( 146)		while(( (bool)(elements->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 146)			::Array< ::Dynamic> elements1 = ( (::Array< ::Dynamic>)(elements->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 147)			if (::hx::IsInstanceEq( c,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 148)				{
HXLINE( 148)					int _g = 0;
HXDLIN( 148)					int _g1 = elements1->length;
HXDLIN( 148)					while((_g < _g1)){
HXLINE( 148)						_g = (_g + 1);
HXDLIN( 148)						int i = (_g - 1);
HXLINE( 149)						this->safeRemove(elements1->__get(i).StaticCast<  ::views::GuiComponent >());
            					}
            				}
HXLINE( 152)				elements1 = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 153)				this->removePartnerRef();
            			}
            			else {
HXLINE( 155)				int _g = 0;
HXDLIN( 155)				int _g1 = elements1->length;
HXDLIN( 155)				while((_g < _g1)){
HXLINE( 155)					_g = (_g + 1);
HXDLIN( 155)					int j = (_g - 1);
HXLINE( 156)					this->safeRemove(elements1->__get(j).StaticCast<  ::views::GuiComponent >());
HXLINE( 157)					elements1->removeRange(j,1);
            				}
            			}
            		}
            	}


void GuiComposite_obj::safeRemove( ::views::GuiComponent c){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_164_safeRemove)
HXDLIN( 164)		if (::hx::IsNotNull( c->getComposite() )) {
HXLINE( 165)			c->remove(c);
            		}
            		else {
HXLINE( 167)			c->removePartnerRef();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComposite_obj,safeRemove,(void))

 ::views::GuiComposite GuiComposite_obj::getComposite(){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_172_getComposite)
HXDLIN( 172)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


void GuiComposite_obj::setMaxSize(::Dynamic parentModel){
            	HX_STACKFRAME(&_hx_pos_b5b9106884c7e3be_175_setMaxSize)
HXLINE( 176)		 ::shared::size::Size size = ::models::IModel_obj::getSize(parentModel);
HXLINE( 177)		::Dynamic _hx_tmp = this->model;
HXDLIN( 177)		Float _hx_tmp1 = size->get_width();
HXDLIN( 177)		::models::IModel_obj::setMaxSize(_hx_tmp,_hx_tmp1,size->get_height());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComposite_obj,setMaxSize,(void))

::Array< ::Dynamic> GuiComposite_obj::parsePath(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_b5b9106884c7e3be_180_parsePath)
HXLINE( 181)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new();
HXLINE( 182)		::Array< ::String > names = path.split(HX_("/",2f,00,00,00));
HXLINE( 184)		{
HXLINE( 184)			int _g = 0;
HXDLIN( 184)			while((_g < names->length)){
HXLINE( 184)				::String name = names->__get(_g);
HXDLIN( 184)				_g = (_g + 1);
HXLINE( 185)				bool _hx_tmp;
HXDLIN( 185)				if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^[a-zA-Z]+\\[\\d+\\]$",6a,83,9f,69),HX_("m",6d,00,00,00))->match(name))) {
HXLINE( 185)					_hx_tmp =  ::EReg_obj::__alloc( HX_CTX ,HX_("^[a-zA-Z]+$",d9,e8,b3,9a),HX_("m",6d,00,00,00))->match(name);
            				}
            				else {
HXLINE( 185)					_hx_tmp = true;
            				}
HXDLIN( 185)				if (_hx_tmp) {
HXLINE( 188)					::cpp::VirtualArray this1 = ::cpp::VirtualArray_obj::__new(2);
HXDLIN( 188)					::cpp::VirtualArray vector = this1;
HXLINE( 189)					::Array< ::String > arr =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\[|\\]+",8d,91,88,80),HX_("g",67,00,00,00))->split(name);
HXLINE( 190)					vector->__unsafe_set(0,arr->__get(0));
HXLINE( 191)					{
HXLINE( 191)						 ::Dynamic val;
HXDLIN( 191)						if (::hx::IsNotNull( arr->__get(1) )) {
HXLINE( 191)							val = ::Std_obj::parseInt(arr->__get(1));
            						}
            						else {
HXLINE( 191)							val = 0;
            						}
HXDLIN( 191)						vector->__unsafe_set(1,val);
            					}
HXLINE( 192)					result->push(vector);
            				}
            				else {
HXLINE( 194)					HX_STACK_DO_THROW( ::haxe::Exception_obj::__alloc( HX_CTX ,(((HX_("",00,00,00,00) + name) + HX_(" name is invalid in path: ",1c,6e,c5,d7)) + path),null(),null()));
            				}
            			}
            		}
HXLINE( 198)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GuiComposite_obj,parsePath,return )


::hx::ObjectPtr< GuiComposite_obj > GuiComposite_obj::__new(::Dynamic model,::Dynamic controller) {
	::hx::ObjectPtr< GuiComposite_obj > __this = new GuiComposite_obj();
	__this->__construct(model,controller);
	return __this;
}

::hx::ObjectPtr< GuiComposite_obj > GuiComposite_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic model,::Dynamic controller) {
	GuiComposite_obj *__this = (GuiComposite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GuiComposite_obj), true, "views.GuiComposite"));
	*(void **)__this = GuiComposite_obj::_hx_vtable;
	__this->__construct(model,controller);
	return __this;
}

GuiComposite_obj::GuiComposite_obj()
{
}

void GuiComposite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GuiComposite);
	HX_MARK_MEMBER_NAME(childern,"childern");
	 ::views::GuiComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GuiComposite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(childern,"childern");
	 ::views::GuiComponent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GuiComposite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"hover") ) { return ::hx::Val( hover_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"change") ) { return ::hx::Val( change_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"childern") ) { return ::hx::Val( childern ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateAll") ) { return ::hx::Val( updateAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"parsePath") ) { return ::hx::Val( parsePath_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"safeRemove") ) { return ::hx::Val( safeRemove_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMaxSize") ) { return ::hx::Val( setMaxSize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"findChildren") ) { return ::hx::Val( findChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComposite") ) { return ::hx::Val( getComposite_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getChildByIndex") ) { return ::hx::Val( getChildByIndex_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getChildrenByKey") ) { return ::hx::Val( getChildrenByKey_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getChildrenLength") ) { return ::hx::Val( getChildrenLength_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initAfterSettingPartner") ) { return ::hx::Val( initAfterSettingPartner_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GuiComposite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"childern") ) { childern=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GuiComposite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("childern",45,47,60,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GuiComposite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(GuiComposite_obj,childern),HX_("childern",45,47,60,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GuiComposite_obj_sStaticStorageInfo = 0;
#endif

static ::String GuiComposite_obj_sMemberFields[] = {
	HX_("childern",45,47,60,70),
	HX_("initAfterSettingPartner",a4,98,49,a4),
	HX_("add",21,f2,49,00),
	HX_("getChildrenLength",bb,ca,5a,b6),
	HX_("getChildrenByKey",d3,07,9e,a6),
	HX_("findChildren",98,06,e8,5d),
	HX_("getChildByIndex",35,a9,5e,89),
	HX_("hover",bc,e5,64,2b),
	HX_("show",fd,d4,52,4c),
	HX_("hide",c2,34,0e,45),
	HX_("resize",f4,59,7b,08),
	HX_("change",70,91,72,b7),
	HX_("updateAll",98,d6,d6,82),
	HX_("remove",44,9c,88,04),
	HX_("safeRemove",71,05,1b,ba),
	HX_("getComposite",91,ac,fb,21),
	HX_("setMaxSize",03,1e,63,1f),
	HX_("parsePath",78,37,f8,d1),
	::String(null()) };

::hx::Class GuiComposite_obj::__mClass;

void GuiComposite_obj::__register()
{
	GuiComposite_obj _hx_dummy;
	GuiComposite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("views.GuiComposite",2c,40,3d,b8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GuiComposite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GuiComposite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GuiComposite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GuiComposite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace views
