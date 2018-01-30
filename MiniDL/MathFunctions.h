#pragma once
#include "Configure.h"

namespace MiniDL
{
	// ������ʼ��
	void constant_filler(DataType& data, const float val);

	// ��˹�ֲ���ʼ��
	void gaussian_filler(DataType& data, const float mean, const float std);

	// ���ȷֲ���ʼ��
	void uniform_filler(DataType& data, const float min_val, const float max_val);
}