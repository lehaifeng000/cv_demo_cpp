#include <iostream>
#include <opencv2/opencv.hpp>
#include <math.h>
using namespace cv;
using namespace std;

int main()
{
    Mat src1 = imread("../data/lena.jpg");
    Mat src2 = imread("../data/fox.png");
    Mat output_image, src_reg;

    Size size1 = Size(128,128);
    Size size2 = Size(32,32);

    resize(src1,src1,size1);
    resize(src2,src2,size2);
    
    int x=0,y=0;

    // 从原图扣一部分，大小与小图相同
    Rect m_select = Rect(x,y,size2.width,size2.height);
    src_reg=src1(m_select);

    // 和小图片合并
    addWeighted(src_reg,0.8,src2,0.2,0,src_reg);

    // src1(m_select)=src_reg;

    // 转存
    imwrite("test.jpg", src1);
    
    return 0;
}