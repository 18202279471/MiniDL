#pragma once
#pragma once
#include "Configure.h"
#include "Data.h"
#include "Operator.h"

namespace MiniDL
{
	// 1. ������������˽ṹ
	// 2. �������ݵ�����
	// 3. ģ�ͼ��غͱ���	
	class Network
	{
	public:
		// ����OP
		Network& add_op(Operator* op);

		// ǰ�򴫲�
		void forward(const std::vector<Data*>& inputs);

		// ���򴫲�
		void backward(const std::vector<Data*>& inputs, const std::vector<Data*>& groundtruthes);

		// ����ģ��
		bool save_model(const std::string& model_path) const;

		// ����ģ��
		bool load_model(const std::string& model_path);
	private:
		std::vector<Operator*> ops;
	};

} //namespace MiniDL