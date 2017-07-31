package;

import openfl.display.Shader;


class Chromatic extends Shader
{
	@fragment var fragment = '
	uniform vec2 uROffset;
	uniform vec2 uGOffset;
	uniform vec2 uBOffset;

	uniform vec2 uSize;

	void main()
	{
		vec4 rValue = texture2D(${Shader.uSampler}, ${Shader.vTexCoord} - uROffset/uSize);
		vec4 gValue = texture2D(${Shader.uSampler}, ${Shader.vTexCoord} - uGOffset/uSize);
		vec4 bValue = texture2D(${Shader.uSampler}, ${Shader.vTexCoord} - uBOffset/uSize);

		// Combine the offset colors.
		gl_FragColor = vec4(rValue.r, gValue.g, bValue.b, 1.0);
	}';

	public function new()
	{
		super();
	}
}