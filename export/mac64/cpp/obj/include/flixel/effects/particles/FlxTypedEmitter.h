// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#define INCLUDED_flixel_effects_particles_FlxTypedEmitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxEmitterMode)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxBounds)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxPointRangeBounds)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxRangeBounds)

namespace flixel{
namespace effects{
namespace particles{


class HXCPP_CLASS_ATTRIBUTES FlxTypedEmitter_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef FlxTypedEmitter_obj OBJ_;
		FlxTypedEmitter_obj();

	public:
		void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Int >  __o_Size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.effects.particles.FlxTypedEmitter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.effects.particles.FlxTypedEmitter"); }
		static hx::ObjectPtr< FlxTypedEmitter_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Int >  __o_Size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTypedEmitter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxTypedEmitter","\x96","\x29","\xe7","\x49"); }

		hx::Class particleClass;
		Bool emitting;
		Float frequency;
		 ::Dynamic blend;
		Float x;
		Float y;
		Float width;
		Float height;
		::hx::EnumBase launchMode;
		Bool keepScaleRatio;
		 ::flixel::util::helpers::FlxPointRangeBounds velocity;
		 ::flixel::util::helpers::FlxRangeBounds speed;
		 ::flixel::util::helpers::FlxRangeBounds angularAcceleration;
		 ::flixel::util::helpers::FlxRangeBounds angularDrag;
		 ::flixel::util::helpers::FlxRangeBounds angularVelocity;
		 ::flixel::util::helpers::FlxRangeBounds angle;
		Bool ignoreAngularVelocity;
		 ::flixel::util::helpers::FlxBounds launchAngle;
		 ::flixel::util::helpers::FlxBounds lifespan;
		 ::flixel::util::helpers::FlxPointRangeBounds scale;
		 ::flixel::util::helpers::FlxRangeBounds alpha;
		 ::flixel::util::helpers::FlxRangeBounds color;
		 ::flixel::util::helpers::FlxPointRangeBounds drag;
		 ::flixel::util::helpers::FlxPointRangeBounds acceleration;
		 ::flixel::util::helpers::FlxRangeBounds elasticity;
		Bool immovable;
		Bool autoUpdateHitbox;
		Int allowCollisions;
		Int _quantity;
		Bool _explode;
		Float _timer;
		Int _counter;
		 ::flixel::math::FlxPoint _point;
		Bool _waitForKill;
		void destroy();

		 ::flixel::effects::particles::FlxTypedEmitter loadParticles( ::Dynamic Graphics,hx::Null< Int >  Quantity,hx::Null< Int >  bakedRotationAngles,hx::Null< Bool >  Multiple,hx::Null< Bool >  AutoBuffer);
		::Dynamic loadParticles_dyn();

		 ::Dynamic loadParticle( ::Dynamic Graphics,Int Quantity,Int bakedRotationAngles,hx::Null< Bool >  Multiple,hx::Null< Bool >  AutoBuffer,Int totalFrames);
		::Dynamic loadParticle_dyn();

		 ::flixel::effects::particles::FlxTypedEmitter makeParticles(hx::Null< Int >  Width,hx::Null< Int >  Height,hx::Null< Int >  Color,hx::Null< Int >  Quantity);
		::Dynamic makeParticles_dyn();

		void update(Float elapsed);

		void explode();
		::Dynamic explode_dyn();

		void emitContinuously(Float elapsed);
		::Dynamic emitContinuously_dyn();

		void emitParticleContinuously();
		::Dynamic emitParticleContinuously_dyn();

		void onFinished();
		::Dynamic onFinished_dyn();

		void kill();

		 ::flixel::effects::particles::FlxTypedEmitter start(hx::Null< Bool >  Explode,hx::Null< Float >  Frequency,hx::Null< Int >  Quantity);
		::Dynamic start_dyn();

		 ::Dynamic emitParticle();
		::Dynamic emitParticle_dyn();

		void focusOn( ::flixel::FlxObject Object);
		::Dynamic focusOn_dyn();

		void setPosition(hx::Null< Float >  X,hx::Null< Float >  Y);
		::Dynamic setPosition_dyn();

		void setSize(Float Width,Float Height);
		::Dynamic setSize_dyn();

		Bool get_solid();
		::Dynamic get_solid_dyn();

		Bool set_solid(Bool Solid);
		::Dynamic set_solid_dyn();

};

} // end namespace flixel
} // end namespace effects
} // end namespace particles

#endif /* INCLUDED_flixel_effects_particles_FlxTypedEmitter */ 
