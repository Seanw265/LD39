// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageTile
#include <flixel/addons/editors/tiled/TiledImageTile.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTilePropertySet
#include <flixel/addons/editors/tiled/TiledTilePropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledTileSet_obj::__construct( ::Dynamic data,::String __o_rootPath){
::String rootPath = __o_rootPath.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","new",0xf865df19,"flixel.addons.editors.tiled.TiledTileSet.new","flixel/addons/editors/tiled/TiledTileSet.hx",36,0x504d33d5)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(rootPath,"rootPath")
HXLINE(  37)		HX_VAR(  ::haxe::xml::Fast,source);
HXLINE(  38)		this->numTiles = (int)16777215;
HXLINE(  39)		this->numRows = (this->numCols = (int)1);
HXLINE(  42)		Bool _hx_tmp = ::Std_obj::is(data,hx::ClassOf< ::haxe::xml::Fast >());
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  44)			source = data;
            		}
            		else {
HXLINE(  46)			Bool _hx_tmp1 = ::Std_obj::is(data,hx::ClassOf< ::openfl::utils::ByteArrayData >());
HXDLIN(  46)			if (_hx_tmp1) {
HXLINE(  49)				::String _hx_tmp2 = ( ( ::openfl::utils::ByteArrayData)(data) )->toString();
HXDLIN(  49)				 ::Xml _hx_tmp3 = ::Xml_obj::parse(_hx_tmp2);
HXDLIN(  49)				source =  ::haxe::xml::Fast_obj::__new(_hx_tmp3);
HXLINE(  50)				source = source->node->resolve(HX_("tileset",34,81,93,45));
            			}
            			else {
HXLINE(  54)				HX_STACK_DO_THROW(HX_("Unknown TMX tileset format",da,21,2b,65));
            			}
            		}
HXLINE(  57)		Int _hx_tmp4;
HXDLIN(  57)		Bool _hx_tmp5 = source->has->resolve(HX_("firstgid",d2,49,26,f1));
HXDLIN(  57)		if (_hx_tmp5) {
HXLINE(  57)			::String _hx_tmp6 = source->att->resolve(HX_("firstgid",d2,49,26,f1));
HXDLIN(  57)			_hx_tmp4 = ::Std_obj::parseInt(_hx_tmp6);
            		}
            		else {
HXLINE(  57)			_hx_tmp4 = (int)1;
            		}
HXDLIN(  57)		this->firstGID = _hx_tmp4;
HXLINE(  59)		Bool _hx_tmp7 = source->has->resolve(HX_("source",db,b0,31,32));
HXDLIN(  59)		if (_hx_tmp7) {
HXLINE(  61)			::String _hx_tmp8 = source->att->resolve(HX_("source",db,b0,31,32));
HXDLIN(  61)			HX_VARI( ::String,sourcePath) = (rootPath + _hx_tmp8);
HXLINE(  62)			Bool _hx_tmp9 = ::openfl::Assets_obj::exists(sourcePath,null());
HXDLIN(  62)			if (_hx_tmp9) {
HXLINE(  64)				::String _hx_tmp10 = ::openfl::Assets_obj::getText(sourcePath);
HXDLIN(  64)				 ::Xml _hx_tmp11 = ::Xml_obj::parse(_hx_tmp10);
HXDLIN(  64)				source =  ::haxe::xml::Fast_obj::__new(_hx_tmp11);
HXLINE(  65)				source = source->node->resolve(HX_("tileset",34,81,93,45));
            			}
            		}
HXLINE(  69)		Bool _hx_tmp12 = !(source->has->resolve(HX_("source",db,b0,31,32)));
HXDLIN(  69)		if (_hx_tmp12) {
HXLINE(  71)			HX_VAR(  ::haxe::xml::Fast,node);
HXLINE(  73)			Bool _hx_tmp13 = source->hasNode->resolve(HX_("image",5b,1f,69,bd));
HXDLIN(  73)			if (_hx_tmp13) {
HXLINE(  76)				node = source->node->resolve(HX_("image",5b,1f,69,bd));
HXLINE(  77)				this->imageSource = node->att->resolve(HX_("source",db,b0,31,32));
            			}
            			else {
HXLINE(  82)				node = source->node->resolve(HX_("tile",2e,cb,fc,4c));
HXLINE(  83)				this->imageSource = HX_("",00,00,00,00);
HXLINE(  86)				this->tileImagesSources = ::Array_obj< ::Dynamic>::__new();
HXLINE(  88)				{
HXLINE(  88)					HX_VAR(  ::_List::ListNode,_g_head);
HXDLIN(  88)					 ::List _this = source->nodes->resolve(HX_("tile",2e,cb,fc,4c));
HXLINE(  35)					_g_head = _this->h;
HXLINE(  88)					while(true){
HXLINE(  88)						Bool _hx_tmp14 = !(hx::IsNotNull( _g_head ));
HXDLIN(  88)						if (_hx_tmp14) {
HXLINE(  88)							goto _hx_goto_0;
            						}
HXDLIN(  88)						HX_VARI(  ::haxe::xml::Fast,val) = ( ( ::haxe::xml::Fast)(_g_head->item) );
HXLINE(  35)						_g_head = _g_head->next;
HXLINE(  90)						Bool _hx_tmp15 = !(val->has->resolve(HX_("id",db,5b,00,00)));
HXDLIN(  90)						if (_hx_tmp15) {
HXLINE(  92)							continue;
            						}
HXLINE(  95)						::String _hx_tmp16 = val->att->resolve(HX_("id",db,5b,00,00));
HXDLIN(  95)						HX_VARI( Int,id) = ::Std_obj::parseInt(_hx_tmp16);
HXLINE(  96)						this->tileImagesSources[id] =  ::flixel::addons::editors::tiled::TiledImageTile_obj::__new(val);
            					}
            					_hx_goto_0:;
            				}
            			}
HXLINE( 100)			this->name = source->att->resolve(HX_("name",4b,72,ff,48));
HXLINE( 102)			HX_VARI( Int,imgWidth) = (int)0;
HXLINE( 103)			Bool _hx_tmp17 = node->has->resolve(HX_("width",06,b6,62,ca));
HXDLIN( 103)			if (_hx_tmp17) {
HXLINE( 105)				::String _hx_tmp18 = node->att->resolve(HX_("width",06,b6,62,ca));
HXDLIN( 105)				imgWidth = ::Std_obj::parseInt(_hx_tmp18);
            			}
HXLINE( 107)			HX_VARI( Int,imgHeight) = (int)0;
HXLINE( 108)			Bool _hx_tmp19 = node->has->resolve(HX_("height",e7,07,4c,02));
HXDLIN( 108)			if (_hx_tmp19) {
HXLINE( 110)				::String _hx_tmp20 = node->att->resolve(HX_("height",e7,07,4c,02));
HXDLIN( 110)				imgHeight = ::Std_obj::parseInt(_hx_tmp20);
            			}
HXLINE( 113)			Bool _hx_tmp21 = source->has->resolve(HX_("tilewidth",18,a4,90,c2));
HXDLIN( 113)			if (_hx_tmp21) {
HXLINE( 115)				::String _hx_tmp22 = source->att->resolve(HX_("tilewidth",18,a4,90,c2));
HXDLIN( 115)				this->tileWidth = ::Std_obj::parseInt(_hx_tmp22);
            			}
HXLINE( 117)			Bool _hx_tmp23 = source->has->resolve(HX_("tileheight",95,69,4e,32));
HXDLIN( 117)			if (_hx_tmp23) {
HXLINE( 119)				::String _hx_tmp24 = source->att->resolve(HX_("tileheight",95,69,4e,32));
HXDLIN( 119)				this->tileHeight = ::Std_obj::parseInt(_hx_tmp24);
            			}
HXLINE( 121)			Bool _hx_tmp25 = source->has->resolve(HX_("spacing",83,33,bb,91));
HXDLIN( 121)			if (_hx_tmp25) {
HXLINE( 123)				::String _hx_tmp26 = source->att->resolve(HX_("spacing",83,33,bb,91));
HXDLIN( 123)				this->spacing = ::Std_obj::parseInt(_hx_tmp26);
            			}
HXLINE( 125)			Bool _hx_tmp27 = source->has->resolve(HX_("margin",2e,70,6d,ba));
HXDLIN( 125)			if (_hx_tmp27) {
HXLINE( 127)				::String _hx_tmp28 = source->att->resolve(HX_("margin",2e,70,6d,ba));
HXDLIN( 127)				this->margin = ::Std_obj::parseInt(_hx_tmp28);
            			}
HXLINE( 131)			this->properties =  ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();
HXLINE( 132)			{
HXLINE( 132)				HX_VAR_NAME(  ::_List::ListNode,_g_head1,"_g_head");
HXDLIN( 132)				 ::List _this1 = source->nodes->resolve(HX_("properties",f3,fb,0e,61));
HXLINE(  35)				_g_head1 = _this1->h;
HXLINE( 132)				while(true){
HXLINE( 132)					Bool _hx_tmp29 = !(hx::IsNotNull( _g_head1 ));
HXDLIN( 132)					if (_hx_tmp29) {
HXLINE( 132)						goto _hx_goto_1;
            					}
HXDLIN( 132)					HX_VARI_NAME(  ::haxe::xml::Fast,val1,"val") = ( ( ::haxe::xml::Fast)(_g_head1->item) );
HXLINE(  35)					_g_head1 = _g_head1->next;
HXLINE( 133)					this->properties->extend(val1);
            				}
            				_hx_goto_1:;
            			}
HXLINE( 136)			this->tileProps = ::Array_obj< ::Dynamic>::__new();
HXLINE( 138)			{
HXLINE( 138)				HX_VAR_NAME(  ::_List::ListNode,_g_head2,"_g_head");
HXDLIN( 138)				 ::List _this2 = source->nodes->resolve(HX_("tile",2e,cb,fc,4c));
HXLINE(  35)				_g_head2 = _this2->h;
HXLINE( 138)				while(true){
HXLINE( 138)					Bool _hx_tmp30 = !(hx::IsNotNull( _g_head2 ));
HXDLIN( 138)					if (_hx_tmp30) {
HXLINE( 138)						goto _hx_goto_2;
            					}
HXDLIN( 138)					HX_VARI_NAME(  ::haxe::xml::Fast,val2,"val") = ( ( ::haxe::xml::Fast)(_g_head2->item) );
HXLINE(  35)					_g_head2 = _g_head2->next;
HXLINE( 140)					Bool _hx_tmp31 = !(val2->has->resolve(HX_("id",db,5b,00,00)));
HXDLIN( 140)					if (_hx_tmp31) {
HXLINE( 142)						continue;
            					}
HXLINE( 145)					::String _hx_tmp32 = val2->att->resolve(HX_("id",db,5b,00,00));
HXDLIN( 145)					HX_VARI_NAME( Int,id1,"id") = ::Std_obj::parseInt(_hx_tmp32);
HXLINE( 146)					this->tileProps[id1] =  ::flixel::addons::editors::tiled::TiledTilePropertySet_obj::__new(id1);
HXLINE( 147)					::String _hx_tmp33 = ::Std_obj::string(id1);
HXDLIN( 147)					this->tileProps->__get(id1).StaticCast<  ::flixel::addons::editors::tiled::TiledTilePropertySet >()->keys->set(HX_("id",db,5b,00,00),_hx_tmp33);
HXLINE( 148)					{
HXLINE( 148)						HX_VAR_NAME(  ::_List::ListNode,_g_head3,"_g_head");
HXDLIN( 148)						 ::List _this3 = val2->nodes->resolve(HX_("properties",f3,fb,0e,61));
HXLINE(  35)						_g_head3 = _this3->h;
HXLINE( 148)						while(true){
HXLINE( 148)							Bool _hx_tmp34 = !(hx::IsNotNull( _g_head3 ));
HXDLIN( 148)							if (_hx_tmp34) {
HXLINE( 148)								goto _hx_goto_3;
            							}
HXDLIN( 148)							HX_VARI_NAME(  ::haxe::xml::Fast,val3,"val") = ( ( ::haxe::xml::Fast)(_g_head3->item) );
HXLINE(  35)							_g_head3 = _g_head3->next;
HXLINE( 150)							this->tileProps->__get(id1).StaticCast<  ::flixel::addons::editors::tiled::TiledTilePropertySet >()->extend(val3);
            						}
            						_hx_goto_3:;
            					}
HXLINE( 152)					Bool _hx_tmp35 = val2->hasNode->resolve(HX_("animation",04,ef,34,4b));
HXDLIN( 152)					if (_hx_tmp35) {
HXLINE( 154)						HX_VAR_NAME(  ::_List::ListNode,_g_head4,"_g_head");
HXDLIN( 154)						 ::List _this4 = val2->node->resolve(HX_("animation",04,ef,34,4b))->nodes->resolve(HX_("frame",2d,78,83,06));
HXLINE(  35)						_g_head4 = _this4->h;
HXLINE( 154)						while(true){
HXLINE( 154)							Bool _hx_tmp36 = !(hx::IsNotNull( _g_head4 ));
HXDLIN( 154)							if (_hx_tmp36) {
HXLINE( 154)								goto _hx_goto_4;
            							}
HXDLIN( 154)							HX_VARI_NAME(  ::haxe::xml::Fast,val4,"val") = ( ( ::haxe::xml::Fast)(_g_head4->item) );
HXLINE(  35)							_g_head4 = _g_head4->next;
HXLINE( 157)							::String _hx_tmp37 = val4->att->resolve(HX_("tileid",89,ce,28,1e));
HXDLIN( 157)							 ::Dynamic _hx_tmp38 = ::Std_obj::parseInt(_hx_tmp37);
HXLINE( 158)							::String _hx_tmp39 = val4->att->resolve(HX_("duration",54,0f,8e,14));
HXDLIN( 158)							Float _hx_tmp40 = ::Std_obj::parseFloat(_hx_tmp39);
HXLINE( 156)							this->tileProps->__get(id1).StaticCast<  ::flixel::addons::editors::tiled::TiledTilePropertySet >()->addAnimationFrame(_hx_tmp38,_hx_tmp40);
            						}
            						_hx_goto_4:;
            					}
            				}
            				_hx_goto_2:;
            			}
HXLINE( 164)			Bool _hx_tmp41;
HXDLIN( 164)			if ((this->tileWidth > (int)0)) {
HXLINE( 164)				_hx_tmp41 = (this->tileHeight > (int)0);
            			}
            			else {
HXLINE( 164)				_hx_tmp41 = false;
            			}
HXDLIN( 164)			if (_hx_tmp41) {
HXLINE( 166)				Float _hx_tmp42 = ((Float)imgWidth / (Float)this->tileWidth);
HXDLIN( 166)				this->numRows = ::Std_obj::_hx_int(_hx_tmp42);
HXLINE( 167)				Float _hx_tmp43 = ((Float)imgHeight / (Float)this->tileHeight);
HXDLIN( 167)				this->numCols = ::Std_obj::_hx_int(_hx_tmp43);
HXLINE( 168)				this->numTiles = (this->numRows * this->numCols);
            			}
            		}
            	}

Dynamic TiledTileSet_obj::__CreateEmpty() { return new TiledTileSet_obj; }

hx::ObjectPtr< TiledTileSet_obj > TiledTileSet_obj::__new( ::Dynamic data,::String __o_rootPath)
{
	hx::ObjectPtr< TiledTileSet_obj > _hx_result = new TiledTileSet_obj();
	_hx_result->__construct(data,__o_rootPath);
	return _hx_result;
}

Dynamic TiledTileSet_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TiledTileSet_obj > _hx_result = new TiledTileSet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

Bool TiledTileSet_obj::hasGid(Int Gid){
            	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","hasGid",0x55a8bbaf,"flixel.addons.editors.tiled.TiledTileSet.hasGid","flixel/addons/editors/tiled/TiledTileSet.hx",175,0x504d33d5)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Gid,"Gid")
HXLINE( 175)		if ((Gid >= this->firstGID)) {
HXLINE( 175)			return (Gid < (this->firstGID + this->numTiles));
            		}
            		else {
HXLINE( 175)			return false;
            		}
HXDLIN( 175)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,hasGid,return )

Int TiledTileSet_obj::fromGid(Int Gid){
            	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","fromGid",0xe24bb3f1,"flixel.addons.editors.tiled.TiledTileSet.fromGid","flixel/addons/editors/tiled/TiledTileSet.hx",180,0x504d33d5)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Gid,"Gid")
HXLINE( 180)		return (Gid - (this->firstGID - (int)1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,fromGid,return )

Int TiledTileSet_obj::toGid(Int ID){
            	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","toGid",0xbfce2440,"flixel.addons.editors.tiled.TiledTileSet.toGid","flixel/addons/editors/tiled/TiledTileSet.hx",185,0x504d33d5)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 185)		return (this->firstGID + ID);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,toGid,return )

 ::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getPropertiesByGid(Int Gid){
            	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getPropertiesByGid",0x4c2032e9,"flixel.addons.editors.tiled.TiledTileSet.getPropertiesByGid","flixel/addons/editors/tiled/TiledTileSet.hx",189,0x504d33d5)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Gid,"Gid")
HXLINE( 190)		Bool _hx_tmp = hx::IsNotNull( this->tileProps );
HXDLIN( 190)		if (_hx_tmp) {
HXLINE( 192)			return this->tileProps->__get((Gid - this->firstGID)).StaticCast<  ::flixel::addons::editors::tiled::TiledTilePropertySet >();
            		}
HXLINE( 195)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getPropertiesByGid,return )

 ::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getProperties(Int ID){
            	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getProperties",0x8aac6822,"flixel.addons.editors.tiled.TiledTileSet.getProperties","flixel/addons/editors/tiled/TiledTileSet.hx",200,0x504d33d5)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 200)		return this->tileProps->__get(ID).StaticCast<  ::flixel::addons::editors::tiled::TiledTilePropertySet >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getProperties,return )

 ::flixel::addons::editors::tiled::TiledImageTile TiledTileSet_obj::getImageSourceByGid(Int Gid){
            	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getImageSourceByGid",0x251eb564,"flixel.addons.editors.tiled.TiledTileSet.getImageSourceByGid","flixel/addons/editors/tiled/TiledTileSet.hx",204,0x504d33d5)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Gid,"Gid")
HXLINE( 205)		Bool _hx_tmp = hx::IsNotNull( this->tileImagesSources );
HXDLIN( 205)		if (_hx_tmp) {
HXLINE( 207)			return this->tileImagesSources->__get((Gid - this->firstGID)).StaticCast<  ::flixel::addons::editors::tiled::TiledImageTile >();
            		}
HXLINE( 210)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getImageSourceByGid,return )

 ::flixel::addons::editors::tiled::TiledImageTile TiledTileSet_obj::getImageSource(Int ID){
            	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getImageSource",0xba92f787,"flixel.addons.editors.tiled.TiledTileSet.getImageSource","flixel/addons/editors/tiled/TiledTileSet.hx",215,0x504d33d5)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 215)		return this->tileImagesSources->__get(ID).StaticCast<  ::flixel::addons::editors::tiled::TiledImageTile >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getImageSource,return )

 ::openfl::geom::Rectangle TiledTileSet_obj::getRect(Int ID){
            	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getRect",0xa87c5c13,"flixel.addons.editors.tiled.TiledTileSet.getRect","flixel/addons/editors/tiled/TiledTileSet.hx",221,0x504d33d5)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 221)		return  ::openfl::geom::Rectangle_obj::__new((hx::Mod(ID,this->numCols) * this->tileWidth),(((Float)ID / (Float)this->numCols) * this->tileHeight),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getRect,return )


TiledTileSet_obj::TiledTileSet_obj()
{
}

void TiledTileSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTileSet);
	HX_MARK_MEMBER_NAME(firstGID,"firstGID");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(imageSource,"imageSource");
	HX_MARK_MEMBER_NAME(numTiles,"numTiles");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tileProps,"tileProps");
	HX_MARK_MEMBER_NAME(tileImagesSources,"tileImagesSources");
	HX_MARK_END_CLASS();
}

void TiledTileSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstGID,"firstGID");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(imageSource,"imageSource");
	HX_VISIT_MEMBER_NAME(numTiles,"numTiles");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tileProps,"tileProps");
	HX_VISIT_MEMBER_NAME(tileImagesSources,"tileImagesSources");
}

hx::Val TiledTileSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toGid") ) { return hx::Val( toGid_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { return hx::Val( margin); }
		if (HX_FIELD_EQ(inName,"hasGid") ) { return hx::Val( hasGid_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return hx::Val( spacing); }
		if (HX_FIELD_EQ(inName,"numRows") ) { return hx::Val( numRows); }
		if (HX_FIELD_EQ(inName,"numCols") ) { return hx::Val( numCols); }
		if (HX_FIELD_EQ(inName,"fromGid") ) { return hx::Val( fromGid_dyn()); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return hx::Val( getRect_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { return hx::Val( firstGID); }
		if (HX_FIELD_EQ(inName,"numTiles") ) { return hx::Val( numTiles); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return hx::Val( tileWidth); }
		if (HX_FIELD_EQ(inName,"tileProps") ) { return hx::Val( tileProps); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return hx::Val( tileHeight); }
		if (HX_FIELD_EQ(inName,"properties") ) { return hx::Val( properties); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { return hx::Val( imageSource); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getProperties") ) { return hx::Val( getProperties_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getImageSource") ) { return hx::Val( getImageSource_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tileImagesSources") ) { return hx::Val( tileImagesSources); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPropertiesByGid") ) { return hx::Val( getPropertiesByGid_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getImageSourceByGid") ) { return hx::Val( getImageSourceByGid_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TiledTileSet_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< Int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< Int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { firstGID=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< Int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileProps") ) { tileProps=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { imageSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tileImagesSources") ) { tileImagesSources=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTileSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	outFields->push(HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a"));
	outFields->push(HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"));
	outFields->push(HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"));
	outFields->push(HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("tileProps","\x62","\x45","\xeb","\x53"));
	outFields->push(HX_HCSTRING("tileImagesSources","\x52","\x8d","\xe9","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TiledTileSet_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,firstGID),HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1")},
	{hx::fsString,(int)offsetof(TiledTileSet_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,tileWidth),HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,tileHeight),HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,spacing),HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{hx::fsString,(int)offsetof(TiledTileSet_obj,imageSource),HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numTiles),HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numRows),HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numCols),HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledTileSet_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledTileSet_obj,tileProps),HX_HCSTRING("tileProps","\x62","\x45","\xeb","\x53")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledTileSet_obj,tileImagesSources),HX_HCSTRING("tileImagesSources","\x52","\x8d","\xe9","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TiledTileSet_obj_sStaticStorageInfo = 0;
#endif

static ::String TiledTileSet_obj_sMemberFields[] = {
	HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"),
	HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"),
	HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a"),
	HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"),
	HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"),
	HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("tileProps","\x62","\x45","\xeb","\x53"),
	HX_HCSTRING("tileImagesSources","\x52","\x8d","\xe9","\x37"),
	HX_HCSTRING("hasGid","\xc8","\x90","\x35","\xbb"),
	HX_HCSTRING("fromGid","\xb8","\x54","\xf9","\x57"),
	HX_HCSTRING("toGid","\x47","\x35","\x10","\x14"),
	HX_HCSTRING("getPropertiesByGid","\x82","\xc9","\xe4","\xcb"),
	HX_HCSTRING("getProperties","\x29","\x58","\x81","\xbd"),
	HX_HCSTRING("getImageSourceByGid","\xab","\xe4","\x5d","\x71"),
	HX_HCSTRING("getImageSource","\xa0","\x0d","\x10","\x02"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	::String(null()) };

static void TiledTileSet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTileSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TiledTileSet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTileSet_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledTileSet_obj::__mClass;

void TiledTileSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledTileSet","\xa7","\x5e","\x38","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TiledTileSet_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TiledTileSet_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledTileSet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TiledTileSet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledTileSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledTileSet_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled