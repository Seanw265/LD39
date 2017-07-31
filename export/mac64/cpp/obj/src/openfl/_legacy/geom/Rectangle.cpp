// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

namespace openfl{
namespace _legacy{
namespace geom{

void Rectangle_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","new",0xde610433,"openfl._legacy.geom.Rectangle.new","openfl/_legacy/geom/Rectangle.hx",20,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE(  22)		this->x = x;
HXLINE(  23)		this->y = y;
HXLINE(  24)		this->width = width;
HXLINE(  25)		this->height = height;
            	}

Dynamic Rectangle_obj::__CreateEmpty() { return new Rectangle_obj; }

hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
	hx::ObjectPtr< Rectangle_obj > _hx_result = new Rectangle_obj();
	_hx_result->__construct(__o_x,__o_y,__o_width,__o_height);
	return _hx_result;
}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Rectangle_obj > _hx_result = new Rectangle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

 ::openfl::_legacy::geom::Rectangle Rectangle_obj::clone(){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","clone",0xab0321f0,"openfl._legacy.geom.Rectangle.clone","openfl/_legacy/geom/Rectangle.hx",32,0xcf1e94dc)
            	HX_STACK_THIS(this)
HXLINE(  32)		return  ::openfl::_legacy::geom::Rectangle_obj::__new(this->x,this->y,this->width,this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

Bool Rectangle_obj::contains(Float x,Float y){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","contains",0xd002696c,"openfl._legacy.geom.Rectangle.contains","openfl/_legacy/geom/Rectangle.hx",39,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(  39)		Bool _hx_tmp;
HXDLIN(  39)		Bool _hx_tmp1;
HXDLIN(  39)		if ((x >= this->x)) {
HXLINE(  39)			_hx_tmp1 = (y >= this->y);
            		}
            		else {
HXLINE(  39)			_hx_tmp1 = false;
            		}
HXDLIN(  39)		if (_hx_tmp1) {
HXLINE(  39)			Float _hx_tmp2 = this->get_right();
HXDLIN(  39)			_hx_tmp = (x < _hx_tmp2);
            		}
            		else {
HXLINE(  39)			_hx_tmp = false;
            		}
HXDLIN(  39)		if (_hx_tmp) {
HXLINE(  39)			Float _hx_tmp3 = this->get_bottom();
HXDLIN(  39)			return (y < _hx_tmp3);
            		}
            		else {
HXLINE(  39)			return false;
            		}
HXDLIN(  39)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains,return )

Bool Rectangle_obj::containsPoint( ::openfl::_legacy::geom::Point point){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","containsPoint",0xe9e91344,"openfl._legacy.geom.Rectangle.containsPoint","openfl/_legacy/geom/Rectangle.hx",46,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE(  46)		return this->contains(point->x,point->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsPoint,return )

Bool Rectangle_obj::containsRect( ::openfl::_legacy::geom::Rectangle rect){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","containsRect",0x71b208b0,"openfl._legacy.geom.Rectangle.containsRect","openfl/_legacy/geom/Rectangle.hx",53,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
HXLINE(  53)		Bool _hx_tmp;
HXDLIN(  53)		if (!((rect->width <= (int)0))) {
HXLINE(  53)			_hx_tmp = (rect->height <= (int)0);
            		}
            		else {
HXLINE(  53)			_hx_tmp = true;
            		}
HXDLIN(  53)		if (_hx_tmp) {
HXLINE(  55)			Bool _hx_tmp1;
HXDLIN(  55)			Bool _hx_tmp2;
HXDLIN(  55)			if ((rect->x > this->x)) {
HXLINE(  55)				_hx_tmp2 = (rect->y > this->y);
            			}
            			else {
HXLINE(  55)				_hx_tmp2 = false;
            			}
HXDLIN(  55)			if (_hx_tmp2) {
HXLINE(  55)				Float _hx_tmp3 = rect->get_right();
HXDLIN(  55)				Float _hx_tmp4 = this->get_right();
HXDLIN(  55)				_hx_tmp1 = (_hx_tmp3 < _hx_tmp4);
            			}
            			else {
HXLINE(  55)				_hx_tmp1 = false;
            			}
HXDLIN(  55)			if (_hx_tmp1) {
HXLINE(  55)				Float _hx_tmp5 = rect->get_bottom();
HXDLIN(  55)				Float _hx_tmp6 = this->get_bottom();
HXDLIN(  55)				return (_hx_tmp5 < _hx_tmp6);
            			}
            			else {
HXLINE(  55)				return false;
            			}
            		}
            		else {
HXLINE(  59)			Bool _hx_tmp7;
HXDLIN(  59)			Bool _hx_tmp8;
HXDLIN(  59)			if ((rect->x >= this->x)) {
HXLINE(  59)				_hx_tmp8 = (rect->y >= this->y);
            			}
            			else {
HXLINE(  59)				_hx_tmp8 = false;
            			}
HXDLIN(  59)			if (_hx_tmp8) {
HXLINE(  59)				Float _hx_tmp9 = rect->get_right();
HXDLIN(  59)				Float _hx_tmp10 = this->get_right();
HXDLIN(  59)				_hx_tmp7 = (_hx_tmp9 <= _hx_tmp10);
            			}
            			else {
HXLINE(  59)				_hx_tmp7 = false;
            			}
HXDLIN(  59)			if (_hx_tmp7) {
HXLINE(  59)				Float _hx_tmp11 = rect->get_bottom();
HXDLIN(  59)				Float _hx_tmp12 = this->get_bottom();
HXDLIN(  59)				return (_hx_tmp11 <= _hx_tmp12);
            			}
            			else {
HXLINE(  59)				return false;
            			}
            		}
HXLINE(  53)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

void Rectangle_obj::copyFrom( ::openfl::_legacy::geom::Rectangle sourceRect){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","copyFrom",0x6be81b0c,"openfl._legacy.geom.Rectangle.copyFrom","openfl/_legacy/geom/Rectangle.hx",66,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sourceRect,"sourceRect")
HXLINE(  68)		this->x = sourceRect->x;
HXLINE(  69)		this->y = sourceRect->y;
HXLINE(  70)		this->width = sourceRect->width;
HXLINE(  71)		this->height = sourceRect->height;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,copyFrom,(void))

Bool Rectangle_obj::equals( ::openfl::_legacy::geom::Rectangle toCompare){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","equals",0xa95fa04c,"openfl._legacy.geom.Rectangle.equals","openfl/_legacy/geom/Rectangle.hx",78,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(toCompare,"toCompare")
HXLINE(  78)		Bool _hx_tmp;
HXDLIN(  78)		Bool _hx_tmp1;
HXDLIN(  78)		if ((this->x == toCompare->x)) {
HXLINE(  78)			_hx_tmp1 = (this->y == toCompare->y);
            		}
            		else {
HXLINE(  78)			_hx_tmp1 = false;
            		}
HXDLIN(  78)		if (_hx_tmp1) {
HXLINE(  78)			_hx_tmp = (this->width == toCompare->width);
            		}
            		else {
HXLINE(  78)			_hx_tmp = false;
            		}
HXDLIN(  78)		if (_hx_tmp) {
HXLINE(  78)			return (this->height == toCompare->height);
            		}
            		else {
HXLINE(  78)			return false;
            		}
HXDLIN(  78)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

void Rectangle_obj::extendBounds( ::openfl::_legacy::geom::Rectangle r){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","extendBounds",0xec1be5bc,"openfl._legacy.geom.Rectangle.extendBounds","openfl/_legacy/geom/Rectangle.hx",83,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(r,"r")
HXLINE(  85)		HX_VARI( Float,dx) = (this->x - r->x);
HXLINE(  86)		if ((dx > (int)0)) {
HXLINE(  88)			hx::SubEq(this->x,dx);
HXLINE(  89)			hx::AddEq(this->width,dx);
            		}
HXLINE(  93)		HX_VARI( Float,dy) = (this->y - r->y);
HXLINE(  94)		if ((dy > (int)0)) {
HXLINE(  96)			hx::SubEq(this->y,dy);
HXLINE(  97)			hx::AddEq(this->height,dy);
            		}
HXLINE( 101)		Float _hx_tmp = r->get_right();
HXDLIN( 101)		Float _hx_tmp1 = this->get_right();
HXDLIN( 101)		if ((_hx_tmp > _hx_tmp1)) {
HXLINE( 103)			Float _hx_tmp2 = r->get_right();
HXDLIN( 103)			this->set_right(_hx_tmp2);
            		}
HXLINE( 107)		Float _hx_tmp3 = r->get_bottom();
HXDLIN( 107)		Float _hx_tmp4 = this->get_bottom();
HXDLIN( 107)		if ((_hx_tmp3 > _hx_tmp4)) {
HXLINE( 109)			Float _hx_tmp5 = r->get_bottom();
HXDLIN( 109)			this->set_bottom(_hx_tmp5);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,extendBounds,(void))

void Rectangle_obj::inflate(Float dx,Float dy){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","inflate",0x61cab5da,"openfl._legacy.geom.Rectangle.inflate","openfl/_legacy/geom/Rectangle.hx",116,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(dx,"dx")
            	HX_STACK_ARG(dy,"dy")
HXLINE( 118)		hx::SubEq(this->x,dx);
HXLINE( 119)		hx::SubEq(this->y,dy);
HXLINE( 120)		hx::AddEq(this->width,(dx * (int)2));
HXLINE( 121)		hx::AddEq(this->height,(dy * (int)2));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

void Rectangle_obj::inflatePoint( ::openfl::_legacy::geom::Point point){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","inflatePoint",0xfdcef816,"openfl._legacy.geom.Rectangle.inflatePoint","openfl/_legacy/geom/Rectangle.hx",128,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE( 128)		this->inflate(point->x,point->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,inflatePoint,(void))

 ::openfl::_legacy::geom::Rectangle Rectangle_obj::intersection( ::openfl::_legacy::geom::Rectangle toIntersect){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","intersection",0x53f6dc16,"openfl._legacy.geom.Rectangle.intersection","openfl/_legacy/geom/Rectangle.hx",133,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(toIntersect,"toIntersect")
HXLINE( 135)		HX_VAR( Float,x0);
HXDLIN( 135)		if ((this->x < toIntersect->x)) {
HXLINE( 135)			x0 = toIntersect->x;
            		}
            		else {
HXLINE( 135)			x0 = this->x;
            		}
HXLINE( 136)		HX_VAR( Float,x1);
HXDLIN( 136)		Float _hx_tmp = this->get_right();
HXDLIN( 136)		Float _hx_tmp1 = toIntersect->get_right();
HXDLIN( 136)		if ((_hx_tmp > _hx_tmp1)) {
HXLINE( 136)			x1 = toIntersect->get_right();
            		}
            		else {
HXLINE( 136)			x1 = this->get_right();
            		}
HXLINE( 137)		if ((x1 <= x0)) {
HXLINE( 139)			return  ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
            		}
HXLINE( 143)		HX_VAR( Float,y0);
HXDLIN( 143)		if ((this->y < toIntersect->y)) {
HXLINE( 143)			y0 = toIntersect->y;
            		}
            		else {
HXLINE( 143)			y0 = this->y;
            		}
HXLINE( 144)		HX_VAR( Float,y1);
HXDLIN( 144)		Float _hx_tmp2 = this->get_bottom();
HXDLIN( 144)		Float _hx_tmp3 = toIntersect->get_bottom();
HXDLIN( 144)		if ((_hx_tmp2 > _hx_tmp3)) {
HXLINE( 144)			y1 = toIntersect->get_bottom();
            		}
            		else {
HXLINE( 144)			y1 = this->get_bottom();
            		}
HXLINE( 145)		if ((y1 <= y0)) {
HXLINE( 147)			return  ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
            		}
HXLINE( 151)		return  ::openfl::_legacy::geom::Rectangle_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersection,return )

Bool Rectangle_obj::intersects( ::openfl::_legacy::geom::Rectangle toIntersect){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","intersects",0xc2ceff41,"openfl._legacy.geom.Rectangle.intersects","openfl/_legacy/geom/Rectangle.hx",156,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(toIntersect,"toIntersect")
HXLINE( 158)		HX_VAR( Float,x0);
HXDLIN( 158)		if ((this->x < toIntersect->x)) {
HXLINE( 158)			x0 = toIntersect->x;
            		}
            		else {
HXLINE( 158)			x0 = this->x;
            		}
HXLINE( 159)		HX_VAR( Float,x1);
HXDLIN( 159)		Float _hx_tmp = this->get_right();
HXDLIN( 159)		Float _hx_tmp1 = toIntersect->get_right();
HXDLIN( 159)		if ((_hx_tmp > _hx_tmp1)) {
HXLINE( 159)			x1 = toIntersect->get_right();
            		}
            		else {
HXLINE( 159)			x1 = this->get_right();
            		}
HXLINE( 160)		if ((x1 <= x0)) {
HXLINE( 162)			return false;
            		}
HXLINE( 166)		HX_VAR( Float,y0);
HXDLIN( 166)		if ((this->y < toIntersect->y)) {
HXLINE( 166)			y0 = toIntersect->y;
            		}
            		else {
HXLINE( 166)			y0 = this->y;
            		}
HXLINE( 167)		HX_VAR( Float,y1);
HXDLIN( 167)		Float _hx_tmp2 = this->get_bottom();
HXDLIN( 167)		Float _hx_tmp3 = toIntersect->get_bottom();
HXDLIN( 167)		if ((_hx_tmp2 > _hx_tmp3)) {
HXLINE( 167)			y1 = toIntersect->get_bottom();
            		}
            		else {
HXLINE( 167)			y1 = this->get_bottom();
            		}
HXLINE( 168)		return (y1 > y0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

Bool Rectangle_obj::isEmpty(){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","isEmpty",0x620ef796,"openfl._legacy.geom.Rectangle.isEmpty","openfl/_legacy/geom/Rectangle.hx",175,0xcf1e94dc)
            	HX_STACK_THIS(this)
HXLINE( 175)		if (!((this->width <= (int)0))) {
HXLINE( 175)			return (this->height <= (int)0);
            		}
            		else {
HXLINE( 175)			return true;
            		}
HXDLIN( 175)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

void Rectangle_obj::offset(Float dx,Float dy){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","offset",0x49ac49a0,"openfl._legacy.geom.Rectangle.offset","openfl/_legacy/geom/Rectangle.hx",180,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(dx,"dx")
            	HX_STACK_ARG(dy,"dy")
HXLINE( 182)		hx::AddEq(this->x,dx);
HXLINE( 183)		hx::AddEq(this->y,dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,offset,(void))

void Rectangle_obj::offsetPoint( ::openfl::_legacy::geom::Point point){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","offsetPoint",0x8701f690,"openfl._legacy.geom.Rectangle.offsetPoint","openfl/_legacy/geom/Rectangle.hx",188,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(point,"point")
HXLINE( 190)		hx::AddEq(this->x,point->x);
HXLINE( 191)		hx::AddEq(this->y,point->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,offsetPoint,(void))

void Rectangle_obj::setEmpty(){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","setEmpty",0x2195b2d8,"openfl._legacy.geom.Rectangle.setEmpty","openfl/_legacy/geom/Rectangle.hx",196,0xcf1e94dc)
            	HX_STACK_THIS(this)
HXLINE( 198)		this->x = (int)0;
HXLINE( 199)		this->y = (int)0;
HXLINE( 200)		this->width = (int)0;
HXLINE( 201)		this->height = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,setEmpty,(void))

void Rectangle_obj::setTo(Float xa,Float ya,Float widtha,Float heighta){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","setTo",0xdccfa050,"openfl._legacy.geom.Rectangle.setTo","openfl/_legacy/geom/Rectangle.hx",206,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(xa,"xa")
            	HX_STACK_ARG(ya,"ya")
            	HX_STACK_ARG(widtha,"widtha")
            	HX_STACK_ARG(heighta,"heighta")
HXLINE( 208)		this->x = xa;
HXLINE( 209)		this->y = ya;
HXLINE( 210)		this->width = widtha;
HXLINE( 211)		this->height = heighta;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,setTo,(void))

::String Rectangle_obj::toString(){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","toString",0xdbf5dff9,"openfl._legacy.geom.Rectangle.toString","openfl/_legacy/geom/Rectangle.hx",218,0xcf1e94dc)
            	HX_STACK_THIS(this)
HXLINE( 218)		return ((((((((HX_("(x=",ed,c2,1e,00) + this->x) + HX_(", y=",18,15,2e,1d)) + this->y) + HX_(", width=",eb,04,57,53)) + this->width) + HX_(", height=",82,32,07,68)) + this->height) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )

 ::openfl::_legacy::geom::Rectangle Rectangle_obj::transform( ::openfl::_legacy::geom::Matrix m){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","transform",0xb839817f,"openfl._legacy.geom.Rectangle.transform","openfl/_legacy/geom/Rectangle.hx",223,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(m,"m")
HXLINE( 225)		HX_VARI( Float,tx0) = ((m->a * this->x) + (m->c * this->y));
HXLINE( 226)		HX_VARI( Float,tx1) = tx0;
HXLINE( 227)		HX_VARI( Float,ty0) = ((m->b * this->x) + (m->d * this->y));
HXLINE( 228)		HX_VARI( Float,ty1) = tx0;
HXLINE( 230)		HX_VARI( Float,tx) = ((m->a * (this->x + this->width)) + (m->c * this->y));
HXLINE( 231)		HX_VARI( Float,ty) = ((m->b * (this->x + this->width)) + (m->d * this->y));
HXLINE( 232)		Bool _hx_tmp = (tx < tx0);
HXDLIN( 232)		if (_hx_tmp) {
HXLINE( 232)			tx0 = tx;
            		}
HXLINE( 233)		Bool _hx_tmp1 = (ty < ty0);
HXDLIN( 233)		if (_hx_tmp1) {
HXLINE( 233)			ty0 = ty;
            		}
HXLINE( 234)		Bool _hx_tmp2 = (tx > tx1);
HXDLIN( 234)		if (_hx_tmp2) {
HXLINE( 234)			tx1 = tx;
            		}
HXLINE( 235)		Bool _hx_tmp3 = (ty > ty1);
HXDLIN( 235)		if (_hx_tmp3) {
HXLINE( 235)			ty1 = ty;
            		}
HXLINE( 237)		tx = ((m->a * (this->x + this->width)) + (m->c * (this->y + this->height)));
HXLINE( 238)		ty = ((m->b * (this->x + this->width)) + (m->d * (this->y + this->height)));
HXLINE( 239)		Bool _hx_tmp4 = (tx < tx0);
HXDLIN( 239)		if (_hx_tmp4) {
HXLINE( 239)			tx0 = tx;
            		}
HXLINE( 240)		Bool _hx_tmp5 = (ty < ty0);
HXDLIN( 240)		if (_hx_tmp5) {
HXLINE( 240)			ty0 = ty;
            		}
HXLINE( 241)		Bool _hx_tmp6 = (tx > tx1);
HXDLIN( 241)		if (_hx_tmp6) {
HXLINE( 241)			tx1 = tx;
            		}
HXLINE( 242)		Bool _hx_tmp7 = (ty > ty1);
HXDLIN( 242)		if (_hx_tmp7) {
HXLINE( 242)			ty1 = ty;
            		}
HXLINE( 244)		tx = ((m->a * this->x) + (m->c * (this->y + this->height)));
HXLINE( 245)		ty = ((m->b * this->x) + (m->d * (this->y + this->height)));
HXLINE( 246)		Bool _hx_tmp8 = (tx < tx0);
HXDLIN( 246)		if (_hx_tmp8) {
HXLINE( 246)			tx0 = tx;
            		}
HXLINE( 247)		Bool _hx_tmp9 = (ty < ty0);
HXDLIN( 247)		if (_hx_tmp9) {
HXLINE( 247)			ty0 = ty;
            		}
HXLINE( 248)		Bool _hx_tmp10 = (tx > tx1);
HXDLIN( 248)		if (_hx_tmp10) {
HXLINE( 248)			tx1 = tx;
            		}
HXLINE( 249)		Bool _hx_tmp11 = (ty > ty1);
HXDLIN( 249)		if (_hx_tmp11) {
HXLINE( 249)			ty1 = ty;
            		}
HXLINE( 251)		return  ::openfl::_legacy::geom::Rectangle_obj::__new((tx0 + m->tx),(ty0 + m->ty),(tx1 - tx0),(ty1 - ty0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,transform,return )

 ::openfl::_legacy::geom::Rectangle Rectangle_obj::_hx_union( ::openfl::_legacy::geom::Rectangle toUnion){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","union",0x098773a2,"openfl._legacy.geom.Rectangle.union","openfl/_legacy/geom/Rectangle.hx",256,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(toUnion,"toUnion")
HXLINE( 258)		HX_VAR( Float,x0);
HXDLIN( 258)		if ((this->x > toUnion->x)) {
HXLINE( 258)			x0 = toUnion->x;
            		}
            		else {
HXLINE( 258)			x0 = this->x;
            		}
HXLINE( 259)		HX_VAR( Float,x1);
HXDLIN( 259)		Float _hx_tmp = this->get_right();
HXDLIN( 259)		Float _hx_tmp1 = toUnion->get_right();
HXDLIN( 259)		if ((_hx_tmp < _hx_tmp1)) {
HXLINE( 259)			x1 = toUnion->get_right();
            		}
            		else {
HXLINE( 259)			x1 = this->get_right();
            		}
HXLINE( 260)		HX_VAR( Float,y0);
HXDLIN( 260)		if ((this->y > toUnion->y)) {
HXLINE( 260)			y0 = toUnion->y;
            		}
            		else {
HXLINE( 260)			y0 = this->y;
            		}
HXLINE( 261)		HX_VAR( Float,y1);
HXDLIN( 261)		Float _hx_tmp2 = this->get_bottom();
HXDLIN( 261)		Float _hx_tmp3 = toUnion->get_bottom();
HXDLIN( 261)		if ((_hx_tmp2 < _hx_tmp3)) {
HXLINE( 261)			y1 = toUnion->get_bottom();
            		}
            		else {
HXLINE( 261)			y1 = this->get_bottom();
            		}
HXLINE( 262)		return  ::openfl::_legacy::geom::Rectangle_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,_hx_union,return )

Float Rectangle_obj::get_bottom(){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_bottom",0x34e39341,"openfl._legacy.geom.Rectangle.get_bottom","openfl/_legacy/geom/Rectangle.hx",274,0xcf1e94dc)
            	HX_STACK_THIS(this)
HXLINE( 274)		return (this->y + this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom(Float value){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_bottom",0x386131b5,"openfl._legacy.geom.Rectangle.set_bottom","openfl/_legacy/geom/Rectangle.hx",275,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 275)		this->height = (value - this->y);
HXDLIN( 275)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

 ::openfl::_legacy::geom::Point Rectangle_obj::get_bottomRight(){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_bottomRight",0x240b7cdb,"openfl._legacy.geom.Rectangle.get_bottomRight","openfl/_legacy/geom/Rectangle.hx",276,0xcf1e94dc)
            	HX_STACK_THIS(this)
HXLINE( 276)		return  ::openfl::_legacy::geom::Point_obj::__new((this->x + this->width),(this->y + this->height));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottomRight,return )

 ::openfl::_legacy::geom::Point Rectangle_obj::set_bottomRight( ::openfl::_legacy::geom::Point value){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_bottomRight",0x1fd6f9e7,"openfl._legacy.geom.Rectangle.set_bottomRight","openfl/_legacy/geom/Rectangle.hx",277,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 277)		this->width = (value->x - this->x);
HXDLIN( 277)		this->height = (value->y - this->y);
HXDLIN( 277)		return value->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottomRight,return )

Float Rectangle_obj::get_left(){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_left",0x6af1d2dd,"openfl._legacy.geom.Rectangle.get_left","openfl/_legacy/geom/Rectangle.hx",278,0xcf1e94dc)
            	HX_STACK_THIS(this)
HXLINE( 278)		return this->x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_left,return )

Float Rectangle_obj::set_left(Float value){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_left",0x194f2c51,"openfl._legacy.geom.Rectangle.set_left","openfl/_legacy/geom/Rectangle.hx",279,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 279)		hx::SubEq(this->width,(value - this->x));
HXDLIN( 279)		this->x = value;
HXDLIN( 279)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_left,return )

Float Rectangle_obj::get_right(){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_right",0x9fb3bc46,"openfl._legacy.geom.Rectangle.get_right","openfl/_legacy/geom/Rectangle.hx",280,0xcf1e94dc)
            	HX_STACK_THIS(this)
HXLINE( 280)		return (this->x + this->width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right(Float value){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_right",0x8304a852,"openfl._legacy.geom.Rectangle.set_right","openfl/_legacy/geom/Rectangle.hx",281,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 281)		this->width = (value - this->x);
HXDLIN( 281)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

 ::openfl::_legacy::geom::Point Rectangle_obj::get_size(){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_size",0x6f956b97,"openfl._legacy.geom.Rectangle.get_size","openfl/_legacy/geom/Rectangle.hx",282,0xcf1e94dc)
            	HX_STACK_THIS(this)
HXLINE( 282)		return  ::openfl::_legacy::geom::Point_obj::__new(this->width,this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_size,return )

 ::openfl::_legacy::geom::Point Rectangle_obj::set_size( ::openfl::_legacy::geom::Point value){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_size",0x1df2c50b,"openfl._legacy.geom.Rectangle.set_size","openfl/_legacy/geom/Rectangle.hx",283,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 283)		this->width = value->x;
HXDLIN( 283)		this->height = value->y;
HXDLIN( 283)		return value->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_size,return )

Float Rectangle_obj::get_top(){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_top",0x7c7c487f,"openfl._legacy.geom.Rectangle.get_top","openfl/_legacy/geom/Rectangle.hx",284,0xcf1e94dc)
            	HX_STACK_THIS(this)
HXLINE( 284)		return this->y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_top,return )

Float Rectangle_obj::set_top(Float value){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_top",0x6f7dd98b,"openfl._legacy.geom.Rectangle.set_top","openfl/_legacy/geom/Rectangle.hx",285,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 285)		hx::SubEq(this->height,(value - this->y));
HXDLIN( 285)		this->y = value;
HXDLIN( 285)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_top,return )

 ::openfl::_legacy::geom::Point Rectangle_obj::get_topLeft(){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_topLeft",0x96ad2826,"openfl._legacy.geom.Rectangle.get_topLeft","openfl/_legacy/geom/Rectangle.hx",286,0xcf1e94dc)
            	HX_STACK_THIS(this)
HXLINE( 286)		return  ::openfl::_legacy::geom::Point_obj::__new(this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_topLeft,return )

 ::openfl::_legacy::geom::Point Rectangle_obj::set_topLeft( ::openfl::_legacy::geom::Point value){
            	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","set_topLeft",0xa11a2f32,"openfl._legacy.geom.Rectangle.set_topLeft","openfl/_legacy/geom/Rectangle.hx",287,0xcf1e94dc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 287)		this->x = value->x;
HXDLIN( 287)		this->y = value->y;
HXDLIN( 287)		return value->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_topLeft,return )


Rectangle_obj::Rectangle_obj()
{
}

hx::Val Rectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_top()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_left()); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_size()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_right()); }
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return hx::Val( setTo_dyn()); }
		if (HX_FIELD_EQ(inName,"union") ) { return hx::Val( _hx_union_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_bottom()); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn()); }
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_topLeft()); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return hx::Val( inflate_dyn()); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return hx::Val( isEmpty_dyn()); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return hx::Val( get_top_dyn()); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return hx::Val( set_top_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return hx::Val( contains_dyn()); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return hx::Val( copyFrom_dyn()); }
		if (HX_FIELD_EQ(inName,"setEmpty") ) { return hx::Val( setEmpty_dyn()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return hx::Val( get_left_dyn()); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return hx::Val( set_left_dyn()); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return hx::Val( get_size_dyn()); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return hx::Val( set_size_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return hx::Val( transform_dyn()); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return hx::Val( get_right_dyn()); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return hx::Val( set_right_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return hx::Val( intersects_dyn()); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return hx::Val( get_bottom_dyn()); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return hx::Val( set_bottom_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_bottomRight()); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return hx::Val( offsetPoint_dyn()); }
		if (HX_FIELD_EQ(inName,"get_topLeft") ) { return hx::Val( get_topLeft_dyn()); }
		if (HX_FIELD_EQ(inName,"set_topLeft") ) { return hx::Val( set_topLeft_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return hx::Val( containsRect_dyn()); }
		if (HX_FIELD_EQ(inName,"extendBounds") ) { return hx::Val( extendBounds_dyn()); }
		if (HX_FIELD_EQ(inName,"inflatePoint") ) { return hx::Val( inflatePoint_dyn()); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return hx::Val( intersection_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return hx::Val( containsPoint_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bottomRight") ) { return hx::Val( get_bottomRight_dyn()); }
		if (HX_FIELD_EQ(inName,"set_bottomRight") ) { return hx::Val( set_bottomRight_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Rectangle_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_top(inValue) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_left(inValue) ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_size(inValue) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_right(inValue) ); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bottom(inValue) ); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_topLeft(inValue) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bottomRight(inValue) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("bottomRight","\xf1","\xa0","\xf4","\x4e"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("topLeft","\x3c","\x09","\xc1","\xe8"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Rectangle_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Rectangle_obj_sStaticStorageInfo = 0;
#endif

static ::String Rectangle_obj_sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("containsPoint","\xb1","\xb9","\xeb","\x92"),
	HX_HCSTRING("containsRect","\xe3","\xce","\x1c","\xa6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("extendBounds","\xef","\xab","\x86","\x20"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("inflatePoint","\x49","\xbe","\x39","\x32"),
	HX_HCSTRING("intersection","\x49","\xa2","\x61","\x88"),
	HX_HCSTRING("intersects","\xb4","\xc2","\xeb","\xe3"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("offsetPoint","\xbd","\x37","\x10","\x5f"),
	HX_HCSTRING("setEmpty","\x8b","\xa3","\x0e","\x7e"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("union","\x0f","\x65","\xe7","\xa6"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("set_bottom","\x28","\xf5","\x7d","\x59"),
	HX_HCSTRING("get_bottomRight","\x88","\x58","\xd6","\x0f"),
	HX_HCSTRING("set_bottomRight","\x94","\xd5","\xa1","\x0b"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("get_topLeft","\x53","\x69","\xbb","\x6e"),
	HX_HCSTRING("set_topLeft","\x5f","\x70","\x28","\x79"),
	::String(null()) };

static void Rectangle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Rectangle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

hx::Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.geom.Rectangle","\xc1","\x6e","\x80","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Rectangle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Rectangle_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rectangle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Rectangle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rectangle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rectangle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom
