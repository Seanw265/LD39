package ;

import openfl.display.Shader;

class Distortion extends Shader {

	@fragment var fragment = '
const float PI = 3.1415926535;
uniform float BarrelPower;

vec2 Distort(vec2 p)
{
    float theta  = atan(p.y, p.x);
    float radius = length(p);
    radius = pow(radius, BarrelPower);
    p.x = radius * cos(theta);
    p.y = radius * sin(theta);
    return 0.5 * (p + 1.0);
}

// Go from Full Width=.58 to
vec2 convertToNormalized(vec2 p)
{
	return p * (${Shader.uTextureSize}/${Shader.uObjectSize});
}

vec2 convertToFull(vec2 p)
{
	return p / (${Shader.uTextureSize}/${Shader.uObjectSize});
}

void main()
{
  vec2 xy = ${Shader.vTexCoord};
  vec2 uv;
//  float d = length(xy);
//  if (d < 1.0)
//  {
    uv = Distort(2.0 * convertToNormalized(xy) - 1.0);
//  }
//  else
//  {
//    uv = convertToNormalized(${Shader.vTexCoord});
//  }

  vec4 c;
  if(uv.x > 0.001){
  	c = texture2D(${Shader.uSampler}, convertToFull(uv));
  }else{
  	c = vec4(0.0);
  }

//  c = texture2D(${Shader.uSampler}, smoothstep(vec2(0.0),vec2(1.0),${Shader.vTexCoord}));

//  if(convertToNormalized(xy).x > 1.0){
//  	c = vec4(1.0,1.0,1.0,1.0);
//  }else{
//    c = vec4(convertToNormalized(xy).x,0.0,0.0,1.0);
//  }
  gl_FragColor = c;
}';

	public function new() {
		super();
	}
}

	//1200
	//680

	//1024
