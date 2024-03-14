#pragma once

// [계약서 / 결재]

//	CPU	[	]		GPU	[	]
//	한국	[	]		미국	[	]
//	CPU와 GPU에게 서로 사용할 곳을 명시해준다?

class RootSignature
{
public:
	void Init(ComPtr<ID3D12Device> device);

	ComPtr<ID3D12RootSignature>	GetSignature() { return _signature; }

private:
	ComPtr<ID3D12RootSignature>	_signature;
};

