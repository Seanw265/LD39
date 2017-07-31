// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif

namespace lime{
namespace math{

void Matrix3_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
            	HX_STACK_FRAME("lime.math.Matrix3","new",0xb5a52a77,"lime.math.Matrix3.new","lime/math/Matrix3.hx",17,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE(  19)		this->a = a;
HXLINE(  20)		this->b = b;
HXLINE(  21)		this->c = c;
HXLINE(  22)		this->d = d;
HXLINE(  23)		this->tx = tx;
HXLINE(  24)		this->ty = ty;
            	}

Dynamic Matrix3_obj::__CreateEmpty() { return new Matrix3_obj; }

hx::ObjectPtr< Matrix3_obj > Matrix3_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
	hx::ObjectPtr< Matrix3_obj > _hx_result = new Matrix3_obj();
	_hx_result->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return _hx_result;
}

Dynamic Matrix3_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Matrix3_obj > _hx_result = new Matrix3_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

 ::lime::math::Matrix3 Matrix3_obj::clone(){
            	HX_STACK_FRAME("lime.math.Matrix3","clone",0xf8506134,"lime.math.Matrix3.clone","lime/math/Matrix3.hx",31,0xeabca539)
            	HX_STACK_THIS(this)
HXLINE(  31)		return  ::lime::math::Matrix3_obj::__new(this->a,this->b,this->c,this->d,this->tx,this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,clone,return )

void Matrix3_obj::concat( ::lime::math::Matrix3 m){
            	HX_STACK_FRAME("lime.math.Matrix3","concat",0x0786d75d,"lime.math.Matrix3.concat","lime/math/Matrix3.hx",36,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(m,"m")
HXLINE(  38)		HX_VARI( Float,a1) = ((this->a * m->a) + (this->b * m->c));
HXLINE(  39)		Float _hx_tmp = (this->a * m->b);
HXDLIN(  39)		Float _hx_tmp1 = (this->b * m->d);
HXDLIN(  39)		this->b = (_hx_tmp + _hx_tmp1);
HXLINE(  40)		this->a = a1;
HXLINE(  42)		HX_VARI( Float,c1) = ((this->c * m->a) + (this->d * m->c));
HXLINE(  43)		Float _hx_tmp2 = (this->c * m->b);
HXDLIN(  43)		Float _hx_tmp3 = (this->d * m->d);
HXDLIN(  43)		this->d = (_hx_tmp2 + _hx_tmp3);
HXLINE(  44)		this->c = c1;
HXLINE(  46)		HX_VARI( Float,tx1) = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);
HXLINE(  47)		Float _hx_tmp4 = ((this->tx * m->b) + (this->ty * m->d));
HXDLIN(  47)		this->ty = (_hx_tmp4 + m->ty);
HXLINE(  48)		this->tx = tx1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,concat,(void))

void Matrix3_obj::copyColumnFrom(Int column, ::lime::math::Vector4 vector4){
            	HX_STACK_FRAME("lime.math.Matrix3","copyColumnFrom",0x89c156be,"lime.math.Matrix3.copyColumnFrom","lime/math/Matrix3.hx",57,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(column,"column")
            	HX_STACK_ARG(vector4,"vector4")
HXLINE(  57)		if ((column > (int)2)) {
HXLINE(  59)			HX_STACK_DO_THROW(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE(  61)			if ((column == (int)0)) {
HXLINE(  63)				this->a = vector4->x;
HXLINE(  64)				this->c = vector4->y;
            			}
            			else {
HXLINE(  66)				if ((column == (int)1)) {
HXLINE(  68)					this->b = vector4->x;
HXLINE(  69)					this->d = vector4->y;
            				}
            				else {
HXLINE(  73)					this->tx = vector4->x;
HXLINE(  74)					this->ty = vector4->y;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnFrom,(void))

void Matrix3_obj::copyColumnTo(Int column, ::lime::math::Vector4 vector4){
            	HX_STACK_FRAME("lime.math.Matrix3","copyColumnTo",0x045a59cf,"lime.math.Matrix3.copyColumnTo","lime/math/Matrix3.hx",83,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(column,"column")
            	HX_STACK_ARG(vector4,"vector4")
HXLINE(  83)		if ((column > (int)2)) {
HXLINE(  85)			HX_STACK_DO_THROW(((HX_("Column ",6a,d4,aa,c0) + column) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE(  87)			if ((column == (int)0)) {
HXLINE(  89)				vector4->x = this->a;
HXLINE(  90)				vector4->y = this->c;
HXLINE(  91)				vector4->z = (int)0;
            			}
            			else {
HXLINE(  93)				if ((column == (int)1)) {
HXLINE(  95)					vector4->x = this->b;
HXLINE(  96)					vector4->y = this->d;
HXLINE(  97)					vector4->z = (int)0;
            				}
            				else {
HXLINE( 101)					vector4->x = this->tx;
HXLINE( 102)					vector4->y = this->ty;
HXLINE( 103)					vector4->z = (int)1;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnTo,(void))

void Matrix3_obj::copyFrom( ::lime::math::Matrix3 sourceMatrix3){
            	HX_STACK_FRAME("lime.math.Matrix3","copyFrom",0x7e1ebe48,"lime.math.Matrix3.copyFrom","lime/math/Matrix3.hx",110,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sourceMatrix3,"sourceMatrix3")
HXLINE( 112)		this->a = sourceMatrix3->a;
HXLINE( 113)		this->b = sourceMatrix3->b;
HXLINE( 114)		this->c = sourceMatrix3->c;
HXLINE( 115)		this->d = sourceMatrix3->d;
HXLINE( 116)		this->tx = sourceMatrix3->tx;
HXLINE( 117)		this->ty = sourceMatrix3->ty;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,copyFrom,(void))

void Matrix3_obj::copyRowFrom(Int row, ::lime::math::Vector4 vector4){
            	HX_STACK_FRAME("lime.math.Matrix3","copyRowFrom",0xb0770e86,"lime.math.Matrix3.copyRowFrom","lime/math/Matrix3.hx",124,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(row,"row")
            	HX_STACK_ARG(vector4,"vector4")
HXLINE( 124)		if ((row > (int)2)) {
HXLINE( 126)			HX_STACK_DO_THROW(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE( 128)			if ((row == (int)0)) {
HXLINE( 130)				this->a = vector4->x;
HXLINE( 131)				this->c = vector4->y;
            			}
            			else {
HXLINE( 133)				if ((row == (int)1)) {
HXLINE( 135)					this->b = vector4->x;
HXLINE( 136)					this->d = vector4->y;
            				}
            				else {
HXLINE( 140)					this->tx = vector4->x;
HXLINE( 141)					this->ty = vector4->y;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowFrom,(void))

void Matrix3_obj::copyRowTo(Int row, ::lime::math::Vector4 vector4){
            	HX_STACK_FRAME("lime.math.Matrix3","copyRowTo",0xc3a10f97,"lime.math.Matrix3.copyRowTo","lime/math/Matrix3.hx",150,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(row,"row")
            	HX_STACK_ARG(vector4,"vector4")
HXLINE( 150)		if ((row > (int)2)) {
HXLINE( 152)			HX_STACK_DO_THROW(((HX_("Row ",e6,20,88,36) + row) + HX_(" out of bounds (2)",eb,c3,f0,de)));
            		}
            		else {
HXLINE( 154)			if ((row == (int)0)) {
HXLINE( 156)				vector4->x = this->a;
HXLINE( 157)				vector4->y = this->b;
HXLINE( 158)				vector4->z = this->tx;
            			}
            			else {
HXLINE( 160)				if ((row == (int)1)) {
HXLINE( 162)					vector4->x = this->c;
HXLINE( 163)					vector4->y = this->d;
HXLINE( 164)					vector4->z = this->ty;
            				}
            				else {
HXLINE( 168)					vector4->x = (int)0;
HXDLIN( 168)					vector4->y = (int)0;
HXDLIN( 168)					vector4->z = (int)1;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowTo,(void))

void Matrix3_obj::createBox(Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
            	HX_STACK_FRAME("lime.math.Matrix3","createBox",0x9a1719c6,"lime.math.Matrix3.createBox","lime/math/Matrix3.hx",175,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(scaleX,"scaleX")
            	HX_STACK_ARG(scaleY,"scaleY")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE( 177)		this->a = scaleX;
HXLINE( 178)		this->d = scaleY;
HXLINE( 179)		this->b = rotation;
HXLINE( 180)		this->tx = tx;
HXLINE( 181)		this->ty = ty;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createBox,(void))

void Matrix3_obj::createGradientBox(Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
            	HX_STACK_FRAME("lime.math.Matrix3","createGradientBox",0xff9720b6,"lime.math.Matrix3.createGradientBox","lime/math/Matrix3.hx",186,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(rotation,"rotation")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE( 188)		this->a = ((Float)width / (Float)((Float)1638.4));
HXLINE( 189)		this->d = ((Float)height / (Float)((Float)1638.4));
HXLINE( 192)		if ((rotation != (int)0)) {
HXLINE( 194)			HX_VARI( Float,cos) = ::Math_obj::cos(rotation);
HXLINE( 195)			HX_VARI( Float,sin) = ::Math_obj::sin(rotation);
HXLINE( 197)			this->b = (sin * this->d);
HXLINE( 198)			this->c = (-(sin) * this->a);
HXLINE( 199)			hx::MultEq(this->a,cos);
HXLINE( 200)			hx::MultEq(this->d,cos);
            		}
            		else {
HXLINE( 204)			this->b = (int)0;
HXLINE( 205)			this->c = (int)0;
            		}
HXLINE( 209)		this->tx = (tx + ((Float)width / (Float)(int)2));
HXLINE( 210)		this->ty = (ty + ((Float)height / (Float)(int)2));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createGradientBox,(void))

Bool Matrix3_obj::equals( ::Dynamic Matrix3){
            	HX_STACK_FRAME("lime.math.Matrix3","equals",0xffa9bc88,"lime.math.Matrix3.equals","lime/math/Matrix3.hx",217,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Matrix3,"Matrix3")
HXLINE( 217)		Bool _hx_tmp;
HXDLIN( 217)		Bool _hx_tmp1;
HXDLIN( 217)		Bool _hx_tmp2;
HXDLIN( 217)		Bool _hx_tmp3;
HXDLIN( 217)		Bool _hx_tmp4;
HXDLIN( 217)		Bool _hx_tmp5 = hx::IsNotNull( Matrix3 );
HXDLIN( 217)		if (_hx_tmp5) {
HXLINE( 217)			_hx_tmp4 = (this->tx == ( (Float)(Matrix3->__Field(HX_("tx",84,65,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 217)			_hx_tmp4 = false;
            		}
HXDLIN( 217)		if (_hx_tmp4) {
HXLINE( 217)			_hx_tmp3 = (this->ty == ( (Float)(Matrix3->__Field(HX_("ty",85,65,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 217)			_hx_tmp3 = false;
            		}
HXDLIN( 217)		if (_hx_tmp3) {
HXLINE( 217)			_hx_tmp2 = (this->a == ( (Float)(Matrix3->__Field(HX_("a",61,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 217)			_hx_tmp2 = false;
            		}
HXDLIN( 217)		if (_hx_tmp2) {
HXLINE( 217)			_hx_tmp1 = (this->b == ( (Float)(Matrix3->__Field(HX_("b",62,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 217)			_hx_tmp1 = false;
            		}
HXDLIN( 217)		if (_hx_tmp1) {
HXLINE( 217)			_hx_tmp = (this->c == ( (Float)(Matrix3->__Field(HX_("c",63,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 217)			_hx_tmp = false;
            		}
HXDLIN( 217)		if (_hx_tmp) {
HXLINE( 217)			return (this->d == ( (Float)(Matrix3->__Field(HX_("d",64,00,00,00),hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 217)			return false;
            		}
HXDLIN( 217)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,equals,return )

 ::lime::math::Vector2 Matrix3_obj::deltaTransformVector2( ::lime::math::Vector2 Vector2){
            	HX_STACK_FRAME("lime.math.Matrix3","deltaTransformVector2",0xf0c299f2,"lime.math.Matrix3.deltaTransformVector2","lime/math/Matrix3.hx",224,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Vector2,"Vector2")
HXLINE( 224)		return  ::lime::math::Vector2_obj::__new(((Vector2->x * this->a) + (Vector2->y * this->c)),((Vector2->x * this->b) + (Vector2->y * this->d)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,deltaTransformVector2,return )

void Matrix3_obj::identity(){
            	HX_STACK_FRAME("lime.math.Matrix3","identity",0x6eecf7c7,"lime.math.Matrix3.identity","lime/math/Matrix3.hx",229,0xeabca539)
            	HX_STACK_THIS(this)
HXLINE( 231)		this->a = (int)1;
HXLINE( 232)		this->b = (int)0;
HXLINE( 233)		this->c = (int)0;
HXLINE( 234)		this->d = (int)1;
HXLINE( 235)		this->tx = (int)0;
HXLINE( 236)		this->ty = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,identity,(void))

 ::lime::math::Matrix3 Matrix3_obj::invert(){
            	HX_STACK_FRAME("lime.math.Matrix3","invert",0xdf8fb55f,"lime.math.Matrix3.invert","lime/math/Matrix3.hx",241,0xeabca539)
            	HX_STACK_THIS(this)
HXLINE( 243)		HX_VARI( Float,norm) = ((this->a * this->d) - (this->b * this->c));
HXLINE( 245)		if ((norm == (int)0)) {
HXLINE( 247)			this->a = (this->b = (this->c = (this->d = (int)0)));
HXLINE( 248)			this->tx = -(this->tx);
HXLINE( 249)			this->ty = -(this->ty);
            		}
            		else {
HXLINE( 253)			norm = ((Float)((Float)1.0) / (Float)norm);
HXLINE( 254)			HX_VARI( Float,a1) = (this->d * norm);
HXLINE( 255)			this->d = (this->a * norm);
HXLINE( 256)			this->a = a1;
HXLINE( 257)			hx::MultEq(this->b,-(norm));
HXLINE( 258)			hx::MultEq(this->c,-(norm));
HXLINE( 260)			HX_VARI( Float,tx1) = ((-(this->a) * this->tx) - (this->c * this->ty));
HXLINE( 261)			Float _hx_tmp = (-(this->b) * this->tx);
HXDLIN( 261)			Float _hx_tmp1 = (this->d * this->ty);
HXDLIN( 261)			this->ty = (_hx_tmp - _hx_tmp1);
HXLINE( 262)			this->tx = tx1;
            		}
HXLINE( 268)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,invert,return )

 ::lime::math::Matrix3 Matrix3_obj::mult( ::lime::math::Matrix3 m){
            	HX_STACK_FRAME("lime.math.Matrix3","mult",0x3a42e1f9,"lime.math.Matrix3.mult","lime/math/Matrix3.hx",273,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(m,"m")
HXLINE( 275)		HX_VARI(  ::lime::math::Matrix3,result) =  ::lime::math::Matrix3_obj::__new(this->a,this->b,this->c,this->d,this->tx,this->ty);
HXLINE( 276)		result->concat(m);
HXLINE( 277)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,mult,return )

void Matrix3_obj::rotate(Float theta){
            	HX_STACK_FRAME("lime.math.Matrix3","rotate",0x0ad714a4,"lime.math.Matrix3.rotate","lime/math/Matrix3.hx",282,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(theta,"theta")
HXLINE( 298)		HX_VARI( Float,cos) = ::Math_obj::cos(theta);
HXLINE( 299)		HX_VARI( Float,sin) = ::Math_obj::sin(theta);
HXLINE( 301)		HX_VARI( Float,a1) = ((this->a * cos) - (this->b * sin));
HXLINE( 302)		Float _hx_tmp = (this->a * sin);
HXDLIN( 302)		Float _hx_tmp1 = (this->b * cos);
HXDLIN( 302)		this->b = (_hx_tmp + _hx_tmp1);
HXLINE( 303)		this->a = a1;
HXLINE( 305)		HX_VARI( Float,c1) = ((this->c * cos) - (this->d * sin));
HXLINE( 306)		Float _hx_tmp2 = (this->c * sin);
HXDLIN( 306)		Float _hx_tmp3 = (this->d * cos);
HXDLIN( 306)		this->d = (_hx_tmp2 + _hx_tmp3);
HXLINE( 307)		this->c = c1;
HXLINE( 309)		HX_VARI( Float,tx1) = ((this->tx * cos) - (this->ty * sin));
HXLINE( 310)		Float _hx_tmp4 = (this->tx * sin);
HXDLIN( 310)		Float _hx_tmp5 = (this->ty * cos);
HXDLIN( 310)		this->ty = (_hx_tmp4 + _hx_tmp5);
HXLINE( 311)		this->tx = tx1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,rotate,(void))

void Matrix3_obj::scale(Float sx,Float sy){
            	HX_STACK_FRAME("lime.math.Matrix3","scale",0x28bc1c61,"lime.math.Matrix3.scale","lime/math/Matrix3.hx",318,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sx,"sx")
            	HX_STACK_ARG(sy,"sy")
HXLINE( 329)		hx::MultEq(this->a,sx);
HXLINE( 330)		hx::MultEq(this->b,sy);
HXLINE( 331)		hx::MultEq(this->c,sx);
HXLINE( 332)		hx::MultEq(this->d,sy);
HXLINE( 333)		hx::MultEq(this->tx,sx);
HXLINE( 334)		hx::MultEq(this->ty,sy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,scale,(void))

void Matrix3_obj::setRotation(Float theta,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
            	HX_STACK_FRAME("lime.math.Matrix3","setRotation",0xf9d2d017,"lime.math.Matrix3.setRotation","lime/math/Matrix3.hx",341,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(theta,"theta")
            	HX_STACK_ARG(scale,"scale")
HXLINE( 343)		Float _hx_tmp = ::Math_obj::cos(theta);
HXDLIN( 343)		this->a = (_hx_tmp * scale);
HXLINE( 344)		Float _hx_tmp1 = ::Math_obj::sin(theta);
HXDLIN( 344)		this->c = (_hx_tmp1 * scale);
HXLINE( 345)		this->b = -(this->c);
HXLINE( 346)		this->d = this->a;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,setRotation,(void))

void Matrix3_obj::setTo(Float a,Float b,Float c,Float d,Float tx,Float ty){
            	HX_STACK_FRAME("lime.math.Matrix3","setTo",0x2a1cdf94,"lime.math.Matrix3.setTo","lime/math/Matrix3.hx",353,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
            	HX_STACK_ARG(tx,"tx")
            	HX_STACK_ARG(ty,"ty")
HXLINE( 355)		this->a = a;
HXLINE( 356)		this->b = b;
HXLINE( 357)		this->c = c;
HXLINE( 358)		this->d = d;
HXLINE( 359)		this->tx = tx;
HXLINE( 360)		this->ty = ty;
            	}


HX_DEFINE_DYNAMIC_FUNC6(Matrix3_obj,setTo,(void))

::String Matrix3_obj::to3DString(hx::Null< Bool >  __o_roundPixels){
Bool roundPixels = __o_roundPixels.Default(false);
            	HX_STACK_FRAME("lime.math.Matrix3","to3DString",0x3565e3a6,"lime.math.Matrix3.to3DString","lime/math/Matrix3.hx",375,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(roundPixels,"roundPixels")
HXLINE( 375)		if (roundPixels) {
HXLINE( 377)			::String _hx_tmp = ((((((((((HX_("Matrix33d(",c5,da,b4,68) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + HX_("0, 0, ",80,3e,0e,9c)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + HX_("0, 0, 0, 0, 1, 0, ",df,b7,27,12));
HXDLIN( 377)			Int _hx_tmp1 = ::Std_obj::_hx_int(this->tx);
HXDLIN( 377)			::String _hx_tmp2 = ((_hx_tmp + _hx_tmp1) + HX_(", ",74,26,00,00));
HXDLIN( 377)			Int _hx_tmp3 = ::Std_obj::_hx_int(this->ty);
HXDLIN( 377)			return ((_hx_tmp2 + _hx_tmp3) + HX_(", 0, 1)",88,a3,85,b1));
            		}
            		else {
HXLINE( 381)			return ((((((((((((((HX_("Matrix33d(",c5,da,b4,68) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + HX_("0, 0, ",80,3e,0e,9c)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + HX_("0, 0, 0, 0, 1, 0, ",df,b7,27,12)) + this->tx) + HX_(", ",74,26,00,00)) + this->ty) + HX_(", 0, 1)",88,a3,85,b1));
            		}
HXLINE( 375)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,to3DString,return )

::String Matrix3_obj::toMozString(){
            	HX_STACK_FRAME("lime.math.Matrix3","toMozString",0xdc79a1e5,"lime.math.Matrix3.toMozString","lime/math/Matrix3.hx",390,0xeabca539)
            	HX_STACK_THIS(this)
HXLINE( 390)		return ((((((((((((HX_("Matrix3(",36,f1,a4,40) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + this->tx) + HX_("px, ",7c,1a,63,4a)) + this->ty) + HX_("px)",21,65,55,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,toMozString,return )

::String Matrix3_obj::toString(){
            	HX_STACK_FRAME("lime.math.Matrix3","toString",0xee2c8335,"lime.math.Matrix3.toString","lime/math/Matrix3.hx",397,0xeabca539)
            	HX_STACK_THIS(this)
HXLINE( 397)		return ((((((((((((HX_("Matrix3(",36,f1,a4,40) + this->a) + HX_(", ",74,26,00,00)) + this->b) + HX_(", ",74,26,00,00)) + this->c) + HX_(", ",74,26,00,00)) + this->d) + HX_(", ",74,26,00,00)) + this->tx) + HX_(", ",74,26,00,00)) + this->ty) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,toString,return )

 ::lime::math::Vector2 Matrix3_obj::transformVector2( ::lime::math::Vector2 pos){
            	HX_STACK_FRAME("lime.math.Matrix3","transformVector2",0x83039d8c,"lime.math.Matrix3.transformVector2","lime/math/Matrix3.hx",404,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(pos,"pos")
HXLINE( 404)		return  ::lime::math::Vector2_obj::__new((((pos->x * this->a) + (pos->y * this->c)) + this->tx),(((pos->x * this->b) + (pos->y * this->d)) + this->ty));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,transformVector2,return )

void Matrix3_obj::translate(Float dx,Float dy){
            	HX_STACK_FRAME("lime.math.Matrix3","translate",0x99be5ca5,"lime.math.Matrix3.translate","lime/math/Matrix3.hx",409,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(dx,"dx")
            	HX_STACK_ARG(dy,"dy")
HXLINE( 411)		hx::AddEq(this->tx,dx);
HXLINE( 412)		hx::AddEq(this->ty,dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,translate,(void))

void Matrix3_obj::_hx___cleanValues(){
            	HX_STACK_FRAME("lime.math.Matrix3","__cleanValues",0x3007f402,"lime.math.Matrix3.__cleanValues","lime/math/Matrix3.hx",417,0xeabca539)
            	HX_STACK_THIS(this)
HXLINE( 419)		Float _hx_tmp = (this->a * (int)1000);
HXDLIN( 419)		Int _hx_tmp1 = ::Math_obj::round(_hx_tmp);
HXDLIN( 419)		this->a = ((Float)_hx_tmp1 / (Float)(int)1000);
HXLINE( 420)		Float _hx_tmp2 = (this->b * (int)1000);
HXDLIN( 420)		Int _hx_tmp3 = ::Math_obj::round(_hx_tmp2);
HXDLIN( 420)		this->b = ((Float)_hx_tmp3 / (Float)(int)1000);
HXLINE( 421)		Float _hx_tmp4 = (this->c * (int)1000);
HXDLIN( 421)		Int _hx_tmp5 = ::Math_obj::round(_hx_tmp4);
HXDLIN( 421)		this->c = ((Float)_hx_tmp5 / (Float)(int)1000);
HXLINE( 422)		Float _hx_tmp6 = (this->d * (int)1000);
HXDLIN( 422)		Int _hx_tmp7 = ::Math_obj::round(_hx_tmp6);
HXDLIN( 422)		this->d = ((Float)_hx_tmp7 / (Float)(int)1000);
HXLINE( 423)		Float _hx_tmp8 = (this->tx * (int)10);
HXDLIN( 423)		Int _hx_tmp9 = ::Math_obj::round(_hx_tmp8);
HXDLIN( 423)		this->tx = ((Float)_hx_tmp9 / (Float)(int)10);
HXLINE( 424)		Float _hx_tmp10 = (this->ty * (int)10);
HXDLIN( 424)		Int _hx_tmp11 = ::Math_obj::round(_hx_tmp10);
HXDLIN( 424)		this->ty = ((Float)_hx_tmp11 / (Float)(int)10);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,_hx___cleanValues,(void))

Float Matrix3_obj::_hx___transformX( ::lime::math::Vector2 pos){
            	HX_STACK_FRAME("lime.math.Matrix3","__transformX",0xe12c3795,"lime.math.Matrix3.__transformX","lime/math/Matrix3.hx",431,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(pos,"pos")
HXLINE( 431)		return (((pos->x * this->a) + (pos->y * this->c)) + this->tx);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,_hx___transformX,return )

Float Matrix3_obj::_hx___transformY( ::lime::math::Vector2 pos){
            	HX_STACK_FRAME("lime.math.Matrix3","__transformY",0xe12c3796,"lime.math.Matrix3.__transformY","lime/math/Matrix3.hx",438,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(pos,"pos")
HXLINE( 438)		return (((pos->x * this->b) + (pos->y * this->d)) + this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,_hx___transformY,return )

void Matrix3_obj::_hx___translateTransformed( ::lime::math::Vector2 pos){
            	HX_STACK_FRAME("lime.math.Matrix3","__translateTransformed",0x7b249386,"lime.math.Matrix3.__translateTransformed","lime/math/Matrix3.hx",443,0xeabca539)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(pos,"pos")
HXLINE( 445)		Float _hx_tmp = ((pos->x * this->a) + (pos->y * this->c));
HXDLIN( 445)		this->tx = (_hx_tmp + this->tx);
HXLINE( 446)		Float _hx_tmp1 = ((pos->x * this->b) + (pos->y * this->d));
HXDLIN( 446)		this->ty = (_hx_tmp1 + this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,_hx___translateTransformed,(void))

 ::lime::math::Matrix3 Matrix3_obj::_hx___identity;


Matrix3_obj::Matrix3_obj()
{
}

hx::Val Matrix3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return hx::Val( a); }
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b); }
		if (HX_FIELD_EQ(inName,"c") ) { return hx::Val( c); }
		if (HX_FIELD_EQ(inName,"d") ) { return hx::Val( d); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return hx::Val( tx); }
		if (HX_FIELD_EQ(inName,"ty") ) { return hx::Val( ty); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return hx::Val( mult_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		if (HX_FIELD_EQ(inName,"scale") ) { return hx::Val( scale_dyn()); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return hx::Val( setTo_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return hx::Val( concat_dyn()); }
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn()); }
		if (HX_FIELD_EQ(inName,"invert") ) { return hx::Val( invert_dyn()); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return hx::Val( rotate_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return hx::Val( copyFrom_dyn()); }
		if (HX_FIELD_EQ(inName,"identity") ) { return hx::Val( identity_dyn()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return hx::Val( copyRowTo_dyn()); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return hx::Val( createBox_dyn()); }
		if (HX_FIELD_EQ(inName,"translate") ) { return hx::Val( translate_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"to3DString") ) { return hx::Val( to3DString_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return hx::Val( copyRowFrom_dyn()); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return hx::Val( setRotation_dyn()); }
		if (HX_FIELD_EQ(inName,"toMozString") ) { return hx::Val( toMozString_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return hx::Val( copyColumnTo_dyn()); }
		if (HX_FIELD_EQ(inName,"__transformX") ) { return hx::Val( _hx___transformX_dyn()); }
		if (HX_FIELD_EQ(inName,"__transformY") ) { return hx::Val( _hx___transformY_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__cleanValues") ) { return hx::Val( _hx___cleanValues_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return hx::Val( copyColumnFrom_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVector2") ) { return hx::Val( transformVector2_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return hx::Val( createGradientBox_dyn()); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"deltaTransformVector2") ) { return hx::Val( deltaTransformVector2_dyn()); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__translateTransformed") ) { return hx::Val( _hx___translateTransformed_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { outValue = _hx___identity; return true; }
	}
	return false;
}

hx::Val Matrix3_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { _hx___identity=ioValue.Cast<  ::lime::math::Matrix3 >(); return true; }
	}
	return false;
}

void Matrix3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Matrix3_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix3_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,tx),HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,ty),HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Matrix3_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::math::Matrix3*/ ,(void *) &Matrix3_obj::_hx___identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Matrix3_obj_sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("tx","\x84","\x65","\x00","\x00"),
	HX_HCSTRING("ty","\x85","\x65","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("createBox","\x6f","\x94","\xd8","\x49"),
	HX_HCSTRING("createGradientBox","\x5f","\xec","\xc0","\x25"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("deltaTransformVector2","\x1b","\xee","\xe5","\x85"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("setRotation","\x00","\x07","\xe7","\x38"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("to3DString","\xdd","\xbc","\xef","\x4e"),
	HX_HCSTRING("toMozString","\xce","\xd8","\x8d","\x1b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transformVector2","\x03","\xba","\x12","\x8a"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("__cleanValues","\x2b","\x77","\xc6","\x85"),
	HX_HCSTRING("__transformX","\x8c","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__transformY","\x8d","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__translateTransformed","\x3d","\xe3","\xea","\x64"),
	::String(null()) };

static void Matrix3_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix3_obj::_hx___identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Matrix3_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix3_obj::_hx___identity,"__identity");
};

#endif

hx::Class Matrix3_obj::__mClass;

static ::String Matrix3_obj_sStaticFields[] = {
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	::String(null())
};

void Matrix3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math.Matrix3","\x05","\x23","\x1b","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix3_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix3_obj::__SetStatic;
	__mClass->mMarkFunc = Matrix3_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Matrix3_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Matrix3_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix3_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Matrix3_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Matrix3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Matrix3_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Matrix3_obj::__boot()
{
{
            	HX_STACK_FRAME("lime.math.Matrix3","boot",0x32f8fe3b,"lime.math.Matrix3.boot","lime/math/Matrix3.hx",14,0xeabca539)
HXLINE(  14)		_hx___identity =  ::lime::math::Matrix3_obj::__new(null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace lime
} // end namespace math
