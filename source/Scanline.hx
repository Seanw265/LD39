package;

import openfl.display.Shader;

class Scanline extends Shader
{
	@fragment var fragment = '
	uniform float scale;

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
		float darkmult = 0.75;
		float lightmult = 0.85;


		float xMod = mod(floor((convertToNormalized(${Shader.vTexCoord}).x * ${Shader.uObjectSize}.x + 1.0*scale/2.0) / scale), 2.0);
		float yMod = mod(floor((convertToNormalized(${Shader.vTexCoord}).y * ${Shader.uObjectSize}.y + 1.0*scale/2.0) / scale), 2.0);

//		float xMod = mod(floor((${Shader.vTexCoord}.x * ${Shader.uObjectSize}.x + 0.0*${Shader.uTextureSize}.x) / scale), 2.0);
//		float yMod = mod(floor((${Shader.vTexCoord}.y * ${Shader.uTextureSize}.y + 1.0/${Shader.uObjectSize}.y) / scale), 2.0);

//		mult = smoothstep(0.0,8.0,xMod + yMod);

		vec4 darkmultVec = vec4(darkmult, darkmult, darkmult, darkmult);
		vec4 lightmultVec = vec4(lightmult, lightmult, lightmult, lightmult);
//		gl_FragColor = multVec * texture2D(${Shader.uSampler}, ${Shader.vTexCoord});
//		return;

		if (yMod == 0.0)
			gl_FragColor = darkmultVec * texture2D(${Shader.uSampler}, ${Shader.vTexCoord});
		else if (xMod == 0.0)
			gl_FragColor = lightmultVec * texture2D(${Shader.uSampler}, ${Shader.vTexCoord});
		else
			gl_FragColor = texture2D(${Shader.uSampler}, ${Shader.vTexCoord});
	}';

	public function new()
	{
		super();
	}
}