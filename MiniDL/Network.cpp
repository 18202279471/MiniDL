#pragma once
#include "network.h"
#include "tools.h"

namespace MiniDL
{
	Network& Network::add_op(Operator* op)
	{
		do_assert(op != nullptr, "op can't be NULL.");
		ops.push_back(op);
		return *this;
	}

	// ǰ�򴫲�
	void Network::forward(const std::vector<Data*>& inputs)
	{
		//TODO
	}

	// ���򴫲�
	void Network::backward(const std::vector<Data*>& inputs, const std::vector<Data*>& groundtruthes)
	{
		//TODO
	}

	// ����ģ��
	bool Network::save_model(const std::string& model_path) const
	{
		//TODO
		return false;
	}

	// ����ģ��
	bool Network::load_model(const std::string& model_path)
	{
		//TODO
		return false;
	}
} //namespace MiniDL