#include <iostream>
#include <cstdlib>
#include <string>
#include <opencv2/opencv.hpp>

int main(int argc, char* argv[])
{
	const std::string image_path = R"(C:\Users\allen\Desktop\ֱ��\���ݼ�\ѵ����\����\QQ��ͼ20180105200630.png)";
	const cv::Mat image = cv::imread(image_path);
	cv::imshow("image", image);
	cv::waitKey(0);

	system("pause");
	return 0;
}