#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_models_IModel
#include <models/IModel.h>
#endif
#ifndef INCLUDED_models_Model
#include <models/Model.h>
#endif
#ifndef INCLUDED_models_ModelEvent
#include <models/ModelEvent.h>
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
#ifndef INCLUDED_shared_BoundingBox
#include <shared/BoundingBox.h>
#endif
#ifndef INCLUDED_shared_Color
#include <shared/Color.h>
#endif
#ifndef INCLUDED_shared_Padding
#include <shared/Padding.h>
#endif
#ifndef INCLUDED_shared_Point
#include <shared/Point.h>
#endif
#ifndef INCLUDED_shared_Position
#include <shared/Position.h>
#endif
#ifndef INCLUDED_shared_align_Align
#include <shared/align/Align.h>
#endif
#ifndef INCLUDED_shared_align_AlignType
#include <shared/align/AlignType.h>
#endif
#ifndef INCLUDED_shared_size_Size
#include <shared/size/Size.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6c782c89a3561768_30_new,"models.Model","new",0x553c0037,"models.Model.new","models/Model.hx",30,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_46_get_visible,"models.Model","get_visible",0x210d3760,"models.Model.get_visible","models/Model.hx",46,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_50_set_visible,"models.Model","set_visible",0x2b7a3e6c,"models.Model.set_visible","models/Model.hx",50,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_54_get_align,"models.Model","get_align",0xb576de33,"models.Model.get_align","models/Model.hx",54,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_57_setParentModel,"models.Model","setParentModel",0x25ce1326,"models.Model.setParentModel","models/Model.hx",57,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_63_getPadding,"models.Model","getPadding",0x044868e4,"models.Model.getPadding","models/Model.hx",63,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_66_setPadding,"models.Model","setPadding",0x07c60758,"models.Model.setPadding","models/Model.hx",66,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_74_getPosition,"models.Model","getPosition",0xe8dcc236,"models.Model.getPosition","models/Model.hx",74,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_77_setPosition,"models.Model","setPosition",0xf349c942,"models.Model.setPosition","models/Model.hx",77,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_94_getSize,"models.Model","getSize",0xa828b7ce,"models.Model.getSize","models/Model.hx",94,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_97_setSize,"models.Model","setSize",0x9b2a48da,"models.Model.setSize","models/Model.hx",97,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_117_setMaxSize,"models.Model","setMaxSize",0x03cca70c,"models.Model.setMaxSize","models/Model.hx",117,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_127_syncMaxSize,"models.Model","syncMaxSize",0x1b1d9741,"models.Model.syncMaxSize","models/Model.hx",127,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_138_get_highlight,"models.Model","get_highlight",0x45c92ca2,"models.Model.get_highlight","models/Model.hx",138,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_142_get_borderColor,"models.Model","get_borderColor",0x94530ac5,"models.Model.get_borderColor","models/Model.hx",142,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_146_getBGColor,"models.Model","getBGColor",0x5fe30491,"models.Model.getBGColor","models/Model.hx",146,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_150_setBGColor,"models.Model","setBGColor",0x6360a305,"models.Model.setBGColor","models/Model.hx",150,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_154_syncResize,"models.Model","syncResize",0xdf81c7b8,"models.Model.syncResize","models/Model.hx",154,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_158_hasHover,"models.Model","hasHover",0x568534cb,"models.Model.hasHover","models/Model.hx",158,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_161_show,"models.Model","show",0x42948146,"models.Model.show","models/Model.hx",161,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_166_hide,"models.Model","hide",0x3b4fe10b,"models.Model.hide","models/Model.hx",166,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_172_hover,"models.Model","hover",0xae99f953,"models.Model.hover","models/Model.hx",172,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_178_update,"models.Model","update",0xd2419692,"models.Model.update","models/Model.hx",178,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_190_applyPosision,"models.Model","applyPosision",0xa1ebcc2f,"models.Model.applyPosision","models/Model.hx",190,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_195_applySize,"models.Model","applySize",0x865ecc66,"models.Model.applySize","models/Model.hx",195,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_200_applyPadding,"models.Model","applyPadding",0x088f434c,"models.Model.applyPadding","models/Model.hx",200,0x28469c1a)
HX_LOCAL_STACK_FRAME(_hx_pos_6c782c89a3561768_208_updateBound,"models.Model","updateBound",0x9483784c,"models.Model.updateBound","models/Model.hx",208,0x28469c1a)
namespace models{

void Model_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6c782c89a3561768_30_new)
HXLINE(  31)		super::__construct(null());
HXLINE(  32)		this->position =  ::shared::Position_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  33)		this->_position =  ::shared::Position_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  34)		this->size =  ::shared::size::Size_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  35)		this->_size =  ::shared::size::Size_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  36)		this->borderColor = ::shared::Color_obj::create(::shared::Color_obj::PRIMARY);
HXLINE(  37)		this->background = ::shared::Color_obj::create(::shared::Color_obj::LIGHT);
HXLINE(  38)		this->highlight = ::shared::Color_obj::create(::shared::Color_obj::HIGHLIGHT_PRIMARY);
HXLINE(  39)		this->align =  ::shared::align::Align_obj::__alloc( HX_CTX ,::shared::align::AlignType_obj::TOP_dyn(),::shared::align::AlignType_obj::LEFT_dyn());
HXLINE(  40)		this->padding =  ::shared::Padding_obj::__alloc( HX_CTX );
HXLINE(  41)		this->boundingBox =  ::shared::BoundingBox_obj::__alloc( HX_CTX ,this->position,this->size);
HXLINE(  42)		this->setSize(HX_("100%",94,0a,88,20),HX_("100%",94,0a,88,20));
            	}

Dynamic Model_obj::__CreateEmpty() { return new Model_obj; }

void *Model_obj::_hx_vtable = 0;

Dynamic Model_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Model_obj > _hx_result = new Model_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Model_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x3117369f;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_models_Model__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::models::Model_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::models::Model_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::models::Model_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::models::Model_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::models::Model_obj::willTrigger,
};

static ::models::IModel_obj _hx_models_Model__hx_models_IModel= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::models::Model_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::models::Model_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::models::Model_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::models::Model_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::models::Model_obj::willTrigger,
	( bool (::hx::Object::*)())&::models::Model_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::models::Model_obj::set_visible,
	(  ::shared::Color (::hx::Object::*)())&::models::Model_obj::get_borderColor,
	(  ::shared::Color (::hx::Object::*)())&::models::Model_obj::get_highlight,
	(  ::shared::Padding (::hx::Object::*)())&::models::Model_obj::getPadding,
	( void (::hx::Object::*)(int,int,int,int))&::models::Model_obj::setPadding,
	(  ::shared::Position (::hx::Object::*)())&::models::Model_obj::getPosition,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::models::Model_obj::setPosition,
	(  ::shared::size::Size (::hx::Object::*)())&::models::Model_obj::getSize,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::models::Model_obj::setSize,
	( void (::hx::Object::*)(Float,Float))&::models::Model_obj::setMaxSize,
	( bool (::hx::Object::*)())&::models::Model_obj::hasHover,
	(  ::shared::Color (::hx::Object::*)())&::models::Model_obj::getBGColor,
	( void (::hx::Object::*)(::Dynamic))&::models::Model_obj::setParentModel,
};

void *Model_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_models_Model__hx_openfl_events_IEventDispatcher;
		case (int)0xbb84780a: return &_hx_models_Model__hx_models_IModel;
	}
	return super::_hx_getInterface(inHash);
}

bool Model_obj::get_visible(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_46_get_visible)
HXDLIN(  46)		return this->visible;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_visible,return )

bool Model_obj::set_visible(bool visible){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_50_set_visible)
HXDLIN(  50)		return (this->visible = visible);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,set_visible,return )

 ::shared::align::Align Model_obj::get_align(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_54_get_align)
HXDLIN(  54)		return this->align;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_align,return )

void Model_obj::setParentModel(::Dynamic model){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_57_setParentModel)
HXLINE(  58)		this->parentModel = model;
HXLINE(  59)		this->update();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,setParentModel,(void))

 ::shared::Padding Model_obj::getPadding(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_63_getPadding)
HXDLIN(  63)		return this->padding;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,getPadding,return )

void Model_obj::setPadding(int left,int top,int right,int bottom){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_66_setPadding)
HXLINE(  67)		this->padding->set_top(( (Float)(top) ));
HXLINE(  68)		this->padding->set_right(( (Float)(right) ));
HXLINE(  69)		this->padding->set_bottom(( (Float)(bottom) ));
HXLINE(  70)		this->padding->set_left(( (Float)(left) ));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Model_obj,setPadding,(void))

 ::shared::Position Model_obj::getPosition(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_74_getPosition)
HXDLIN(  74)		return this->position;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,getPosition,return )

void Model_obj::setPosition( ::Dynamic x, ::Dynamic y){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_77_setPosition)
HXLINE(  78)		if (::Std_obj::isOfType(x,::hx::ClassOf< ::Float >())) {
HXLINE(  79)			this->_position->set_x(( (Float)(x) ));
            		}
            		else {
HXLINE(  80)			if (::Std_obj::isOfType(x,::hx::ClassOf< ::String >())) {
HXLINE(  81)				this->_position->setX(( (::String)(x) ));
            			}
            		}
HXLINE(  84)		if (::Std_obj::isOfType(y,::hx::ClassOf< ::Float >())) {
HXLINE(  85)			this->_position->set_y(( (Float)(y) ));
            		}
            		else {
HXLINE(  86)			if (::Std_obj::isOfType(y,::hx::ClassOf< ::String >())) {
HXLINE(  87)				this->_position->setY(( (::String)(y) ));
            			}
            		}
HXLINE(  90)		this->applyPosision();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Model_obj,setPosition,(void))

 ::shared::size::Size Model_obj::getSize(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_94_getSize)
HXDLIN(  94)		return this->size;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,getSize,return )

void Model_obj::setSize( ::Dynamic width, ::Dynamic height){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_97_setSize)
HXLINE(  98)		bool _hx_tmp;
HXDLIN(  98)		if (!(::Std_obj::isOfType(width,::hx::ClassOf< ::Float >()))) {
HXLINE(  98)			_hx_tmp = ::Std_obj::isOfType(width,::hx::ClassOf< int >());
            		}
            		else {
HXLINE(  98)			_hx_tmp = true;
            		}
HXDLIN(  98)		if (_hx_tmp) {
HXLINE( 101)			this->_size->set_width(( (Float)(width) ));
            		}
            		else {
HXLINE( 102)			if (::Std_obj::isOfType(width,::hx::ClassOf< ::String >())) {
HXLINE( 103)				this->_size->setWidth(( (::String)(width) ));
            			}
            		}
HXLINE( 106)		bool _hx_tmp1;
HXDLIN( 106)		if (!(::Std_obj::isOfType(height,::hx::ClassOf< ::Float >()))) {
HXLINE( 106)			_hx_tmp1 = ::Std_obj::isOfType(height,::hx::ClassOf< int >());
            		}
            		else {
HXLINE( 106)			_hx_tmp1 = true;
            		}
HXDLIN( 106)		if (_hx_tmp1) {
HXLINE( 109)			this->_size->set_height(( (Float)(height) ));
            		}
            		else {
HXLINE( 110)			if (::Std_obj::isOfType(height,::hx::ClassOf< ::String >())) {
HXLINE( 111)				this->_size->setHeight(( (::String)(height) ));
            			}
            		}
HXLINE( 114)		this->applySize();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Model_obj,setSize,(void))

void Model_obj::setMaxSize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_117_setMaxSize)
HXLINE( 118)		this->_size->setMaxSize(w,h);
HXLINE( 119)		this->_position->setMaxSize(w,h);
HXLINE( 120)		this->syncResize();
HXLINE( 121)		this->update();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Model_obj,setMaxSize,(void))

void Model_obj::syncMaxSize(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_127_syncMaxSize)
HXLINE( 128)		if (::hx::IsNotNull( this->parentModel )) {
HXLINE( 129)			 ::shared::size::Size parentSize = ::models::IModel_obj::getSize(this->parentModel);
HXLINE( 130)			 ::shared::size::Size _hx_tmp = this->_size;
HXDLIN( 130)			Float _hx_tmp1 = parentSize->get_width();
HXDLIN( 130)			_hx_tmp->setMaxSize(_hx_tmp1,parentSize->get_height());
HXLINE( 131)			 ::shared::Position _hx_tmp2 = this->_position;
HXDLIN( 131)			Float _hx_tmp3 = parentSize->get_width();
HXDLIN( 131)			_hx_tmp2->setMaxSize(_hx_tmp3,parentSize->get_height());
            		}
HXLINE( 134)		this->update();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,syncMaxSize,(void))

 ::shared::Color Model_obj::get_highlight(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_138_get_highlight)
HXDLIN( 138)		return this->highlight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_highlight,return )

 ::shared::Color Model_obj::get_borderColor(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_142_get_borderColor)
HXDLIN( 142)		return this->borderColor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_borderColor,return )

 ::shared::Color Model_obj::getBGColor(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_146_getBGColor)
HXDLIN( 146)		return this->background;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,getBGColor,return )

void Model_obj::setBGColor( ::shared::Color color){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_150_setBGColor)
HXDLIN( 150)		this->background->setColor(color);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,setBGColor,(void))

void Model_obj::syncResize(){
            	HX_GC_STACKFRAME(&_hx_pos_6c782c89a3561768_154_syncResize)
HXDLIN( 154)		this->dispatchEvent( ::models::ModelEvent_obj::__alloc( HX_CTX ,HX_("syncResize",af,3e,18,fb),null(),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,syncResize,(void))

bool Model_obj::hasHover(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_158_hasHover)
HXDLIN( 158)		return this->isHover;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,hasHover,return )

void Model_obj::show(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_161_show)
HXLINE( 162)		this->set_visible(true);
HXLINE( 163)		this->update();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,show,(void))

void Model_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_166_hide)
HXLINE( 167)		this->set_visible(false);
HXLINE( 168)		this->update();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,hide,(void))

void Model_obj::hover( ::shared::Point p){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_172_hover)
HXDLIN( 172)		if (::hx::IsNotNull( this->parentModel )) {
HXLINE( 173)			this->isHover = this->boundingBox->isContainsCursor(p);
HXLINE( 174)			this->update();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,hover,(void))

void Model_obj::update(){
            	HX_GC_STACKFRAME(&_hx_pos_6c782c89a3561768_178_update)
HXLINE( 179)		 ::shared::align::Align _hx_tmp = this->get_align();
HXDLIN( 179)		_hx_tmp->align( ::hx::interface_check(::hx::ObjectPtr<OBJ_>(this),0xbb84780a),this->parentModel);
HXLINE( 180)		this->applyPosision();
HXLINE( 181)		this->applySize();
HXLINE( 182)		this->applyPadding();
HXLINE( 183)		this->updateBound();
HXLINE( 184)		this->dispatchEvent( ::models::ModelEvent_obj::__alloc( HX_CTX ,HX_("draw",04,2c,70,42),null(),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,update,(void))

void Model_obj::applyPosision(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_190_applyPosision)
HXLINE( 191)		 ::shared::Position _hx_tmp = this->position;
HXDLIN( 191)		Float _hx_tmp1 = this->position->get_x();
HXDLIN( 191)		_hx_tmp->set_x((_hx_tmp1 + this->_position->get_x()));
HXLINE( 192)		 ::shared::Position _hx_tmp2 = this->position;
HXDLIN( 192)		Float _hx_tmp3 = this->position->get_y();
HXDLIN( 192)		_hx_tmp2->set_y((_hx_tmp3 + this->_position->get_y()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,applyPosision,(void))

void Model_obj::applySize(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_195_applySize)
HXLINE( 196)		 ::shared::size::Size _hx_tmp = this->size;
HXDLIN( 196)		_hx_tmp->set_width(this->_size->get_width());
HXLINE( 197)		 ::shared::size::Size _hx_tmp1 = this->size;
HXDLIN( 197)		_hx_tmp1->set_height(this->_size->get_height());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,applySize,(void))

void Model_obj::applyPadding(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_200_applyPadding)
HXLINE( 201)		 ::shared::Position _hx_tmp = this->position;
HXDLIN( 201)		Float _hx_tmp1 = this->position->get_x();
HXDLIN( 201)		_hx_tmp->set_x((_hx_tmp1 + this->padding->get_left()));
HXLINE( 202)		 ::shared::Position _hx_tmp2 = this->position;
HXDLIN( 202)		Float _hx_tmp3 = this->position->get_y();
HXDLIN( 202)		_hx_tmp2->set_y((_hx_tmp3 + this->padding->get_top()));
HXLINE( 203)		 ::shared::size::Size _hx_tmp4 = this->size;
HXDLIN( 203)		Float _hx_tmp5;
HXDLIN( 203)		if ((this->padding->get_left() != 0)) {
HXLINE( 203)			Float _hx_tmp = this->size->get_width();
HXDLIN( 203)			Float _hx_tmp1 = (_hx_tmp - this->padding->get_left());
HXDLIN( 203)			_hx_tmp5 = (_hx_tmp1 - this->padding->get_right());
            		}
            		else {
HXLINE( 203)			_hx_tmp5 = this->size->get_width();
            		}
HXDLIN( 203)		_hx_tmp4->set_width(_hx_tmp5);
HXLINE( 204)		 ::shared::size::Size _hx_tmp6 = this->size;
HXDLIN( 204)		Float _hx_tmp7;
HXDLIN( 204)		if ((this->padding->get_bottom() != 0)) {
HXLINE( 204)			Float _hx_tmp = this->size->get_height();
HXDLIN( 204)			Float _hx_tmp1 = (_hx_tmp - this->padding->get_top());
HXDLIN( 204)			_hx_tmp7 = (_hx_tmp1 - this->padding->get_bottom());
            		}
            		else {
HXLINE( 204)			_hx_tmp7 = this->size->get_height();
            		}
HXDLIN( 204)		_hx_tmp6->set_height(_hx_tmp7);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,applyPadding,(void))

void Model_obj::updateBound(){
            	HX_STACKFRAME(&_hx_pos_6c782c89a3561768_208_updateBound)
HXDLIN( 208)		this->boundingBox->setBound(this->position,this->size);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,updateBound,(void))


::hx::ObjectPtr< Model_obj > Model_obj::__new() {
	::hx::ObjectPtr< Model_obj > __this = new Model_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Model_obj > Model_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Model_obj *__this = (Model_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Model_obj), true, "models.Model"));
	*(void **)__this = Model_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Model_obj::Model_obj()
{
}

void Model_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Model);
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(highlight,"highlight");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(parentModel,"parentModel");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(_size,"_size");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(boundingBox,"boundingBox");
	HX_MARK_MEMBER_NAME(isHover,"isHover");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Model_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(highlight,"highlight");
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(parentModel,"parentModel");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(_size,"_size");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(boundingBox,"boundingBox");
	HX_VISIT_MEMBER_NAME(isHover,"isHover");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Model_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_align() : align ); }
		if (HX_FIELD_EQ(inName,"_size") ) { return ::hx::Val( _size ); }
		if (HX_FIELD_EQ(inName,"hover") ) { return ::hx::Val( hover_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_visible() : visible ); }
		if (HX_FIELD_EQ(inName,"padding") ) { return ::hx::Val( padding ); }
		if (HX_FIELD_EQ(inName,"isHover") ) { return ::hx::Val( isHover ); }
		if (HX_FIELD_EQ(inName,"getSize") ) { return ::hx::Val( getSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"hasHover") ) { return ::hx::Val( hasHover_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"highlight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_highlight() : highlight ); }
		if (HX_FIELD_EQ(inName,"_position") ) { return ::hx::Val( _position ); }
		if (HX_FIELD_EQ(inName,"get_align") ) { return ::hx::Val( get_align_dyn() ); }
		if (HX_FIELD_EQ(inName,"applySize") ) { return ::hx::Val( applySize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"getPadding") ) { return ::hx::Val( getPadding_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPadding") ) { return ::hx::Val( setPadding_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMaxSize") ) { return ::hx::Val( setMaxSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBGColor") ) { return ::hx::Val( getBGColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBGColor") ) { return ::hx::Val( setBGColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"syncResize") ) { return ::hx::Val( syncResize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_borderColor() : borderColor ); }
		if (HX_FIELD_EQ(inName,"parentModel") ) { return ::hx::Val( parentModel ); }
		if (HX_FIELD_EQ(inName,"boundingBox") ) { return ::hx::Val( boundingBox ); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return ::hx::Val( get_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"syncMaxSize") ) { return ::hx::Val( syncMaxSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateBound") ) { return ::hx::Val( updateBound_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"applyPadding") ) { return ::hx::Val( applyPadding_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_highlight") ) { return ::hx::Val( get_highlight_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyPosision") ) { return ::hx::Val( applyPosision_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setParentModel") ) { return ::hx::Val( setParentModel_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return ::hx::Val( get_borderColor_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Model_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast<  ::shared::size::Size >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast<  ::shared::align::Align >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast<  ::shared::size::Size >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visible(inValue.Cast< bool >()) );visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { padding=inValue.Cast<  ::shared::Padding >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isHover") ) { isHover=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast<  ::shared::Position >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"highlight") ) { highlight=inValue.Cast<  ::shared::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast<  ::shared::Position >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::shared::Color >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast<  ::shared::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentModel") ) { parentModel=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundingBox") ) { boundingBox=inValue.Cast<  ::shared::BoundingBox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Model_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("highlight",34,56,00,ed));
	outFields->push(HX_("align",c5,56,91,21));
	outFields->push(HX_("parentModel",1f,96,12,9d));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("_position",08,98,90,12));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("_size",a0,bc,64,ff));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("padding",d1,59,7d,d0));
	outFields->push(HX_("boundingBox",07,95,a7,85));
	outFields->push(HX_("isHover",72,89,ea,c7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Model_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Model_obj,visible),HX_("visible",72,78,24,a3)},
	{::hx::fsObject /*  ::shared::Color */ ,(int)offsetof(Model_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsObject /*  ::shared::Color */ ,(int)offsetof(Model_obj,highlight),HX_("highlight",34,56,00,ed)},
	{::hx::fsObject /*  ::shared::align::Align */ ,(int)offsetof(Model_obj,align),HX_("align",c5,56,91,21)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Model_obj,parentModel),HX_("parentModel",1f,96,12,9d)},
	{::hx::fsObject /*  ::shared::Position */ ,(int)offsetof(Model_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsObject /*  ::shared::Position */ ,(int)offsetof(Model_obj,_position),HX_("_position",08,98,90,12)},
	{::hx::fsObject /*  ::shared::size::Size */ ,(int)offsetof(Model_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsObject /*  ::shared::size::Size */ ,(int)offsetof(Model_obj,_size),HX_("_size",a0,bc,64,ff)},
	{::hx::fsObject /*  ::shared::Color */ ,(int)offsetof(Model_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::shared::Padding */ ,(int)offsetof(Model_obj,padding),HX_("padding",d1,59,7d,d0)},
	{::hx::fsObject /*  ::shared::BoundingBox */ ,(int)offsetof(Model_obj,boundingBox),HX_("boundingBox",07,95,a7,85)},
	{::hx::fsBool,(int)offsetof(Model_obj,isHover),HX_("isHover",72,89,ea,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Model_obj_sStaticStorageInfo = 0;
#endif

static ::String Model_obj_sMemberFields[] = {
	HX_("visible",72,78,24,a3),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("highlight",34,56,00,ed),
	HX_("align",c5,56,91,21),
	HX_("parentModel",1f,96,12,9d),
	HX_("position",a9,a0,fa,ca),
	HX_("_position",08,98,90,12),
	HX_("size",c1,a0,53,4c),
	HX_("_size",a0,bc,64,ff),
	HX_("background",ee,93,1d,26),
	HX_("padding",d1,59,7d,d0),
	HX_("boundingBox",07,95,a7,85),
	HX_("isHover",72,89,ea,c7),
	HX_("get_visible",89,d8,1e,29),
	HX_("set_visible",95,df,8b,33),
	HX_("get_align",1c,b3,3a,65),
	HX_("setParentModel",9d,d1,d0,44),
	HX_("getPadding",db,df,de,1f),
	HX_("setPadding",4f,7e,5c,23),
	HX_("getPosition",5f,63,ee,f0),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("getSize",77,50,d6,1e),
	HX_("setSize",83,e1,d7,11),
	HX_("setMaxSize",03,1e,63,1f),
	HX_("syncMaxSize",6a,38,2f,23),
	HX_("get_highlight",0b,2a,64,ae),
	HX_("get_borderColor",6e,f4,b6,97),
	HX_("getBGColor",88,7b,79,7b),
	HX_("setBGColor",fc,19,f7,7e),
	HX_("syncResize",af,3e,18,fb),
	HX_("hasHover",02,30,bd,b7),
	HX_("show",fd,d4,52,4c),
	HX_("hide",c2,34,0e,45),
	HX_("hover",bc,e5,64,2b),
	HX_("update",09,86,05,87),
	HX_("applyPosision",98,c9,86,0a),
	HX_("applySize",4f,a1,22,36),
	HX_("applyPadding",03,a6,ea,0f),
	HX_("updateBound",75,19,95,9c),
	::String(null()) };

::hx::Class Model_obj::__mClass;

void Model_obj::__register()
{
	Model_obj _hx_dummy;
	Model_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("models.Model",c5,18,a4,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Model_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Model_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Model_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Model_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace models
