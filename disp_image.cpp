#include <iostream>
#include <cmath>
#include <vector>
#include <opencv2/opencv.hpp>

using uint = unsigned int;

int main() {
	// open image file
	auto image = cv::imread("./input.png", 1);
	if(image.empty()){
		std::cerr << "Cannot open the image file. " << std::endl;
		return EXIT_FAILURE;
	}

	// prepare window
	cv::String windowName = "Display an Image";
	cv::namedWindow(windowName, CV_WINDOW_AUTOSIZE);

	cv::imshow(windowName, image);
	while(cv::waitKey() != 'q'){}

	return 0;
}
